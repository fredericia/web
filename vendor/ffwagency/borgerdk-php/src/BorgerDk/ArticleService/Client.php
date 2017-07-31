<?php

/*
 * This file is part of the borgerdk-php SDK.
 *
 * (c) Jens Beltofte <jens.beltofte@ffwagency.com>
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */

namespace BorgerDk\ArticleService;

use SoapClient;
use BorgerDk\ArticleService\Exceptions\SoapException;

/**
 * Class Client
 *
 * @package BorgerDk\ArticleService
 */
class Client
{
    /**
     * SOAP Connection
     *
     * @var \SoapClient
     */
    protected $client;

    /**
     * BorgerDk Article Export URL.
     *
     * @var string
     */
    protected $soapUrl = 'https://www.borger.dk/_vti_bin/borger/ArticleExport.svc?wsdl';

    /**
     * Array with debug options
     *
     * @var array
     */
    protected $debug = array('trace' => 1, 'exceptions' => true);

    /**
     * Initiate the SoapClient connection.
     *
     * @throws \BorgerDk\ArticleService\Exceptions\SoapException
     */
    public function __construct()
    {
        try {
            $this->client = new SoapClient($this->soapUrl, $this->debug);
        } catch (\SoapFault $fault) {
            new SoapException($fault);
        }
    }

    /**
     * Return client
     *
     * @return \SoapClient
     */
    public function getClient()
    {
        return $this->client;
    }
}
