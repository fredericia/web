<?php

/*
 * This file is part of the borgerdk-php SDK.
 *
 * (c) Jens Beltofte <jens.beltofte@ffwagency.com>
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */

namespace BorgerDk\ArticleService\Resources;

use BorgerDk\ArticleService;
use BorgerDk\ArticleService\Client as Client;
use BorgerDk\ArticleService\Exceptions\SoapException;

/**
 * Abstract class for all service endpoints
 *
 * @package BorgerDk\ArticleService
 */
abstract class ResourceAbstract
{
    /**
     * Client Connection
     *
     * @var BorgerDk\ArticleService\Client
     */
    protected $client;

    /**
     * @var array
     */
    protected $params;

    /**
     * @var String
     */
    protected $resourceName;

    /**
     * @var String
     */
    protected $resourceResultName;

    /**
     * @var Object
     */
    protected $resourceResult;

    /**
     * @param BorgerDk\ArticleService\Client $client
     */
    public function __construct(Client $client, $params = array())
    {
        $this->client = $client->getClient();
        $this->params = $params;

        if (!isset($this->resourceName)) {
            $this->resourceName = $this->getResourceNameFromClass();
        }

        if (!isset($this->resourceResultName)) {
            $this->resourceResultName = $this->resourceName . 'Result';
        }

        try {
            $result = $this->client->{$this->resourceName}($this->params);
            $this->resourceResult = $result->{$this->resourceResultName};
        } catch (\SoapFault $fault) {
            new SoapException($fault);
        }
    }

    /**
     * Return the raw result from the service endpoint.
     *
     * @return object
     */
    public function getResultRaw()
    {
        return $this->resourceResult;
    }

    /***
     * Return the resource name using the name of the class (used as soap methods / endpoints)
     *
     * @return string
     */
    protected function getResourceNameFromClass()
    {
        $namespacedClassName = get_class($this);
        $resourceName = join('', array_slice(explode('\\', $namespacedClassName), -1));
        return $resourceName;
    }
}
