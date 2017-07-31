<?php

/*
 * This file is part of the borgerdk-php SDK.
 *
 * (c) Jens Beltofte <jens.beltofte@ffwagency.com>
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */

namespace BorgerDk\ArticleService\UnitTests;

use PHPUnit_Framework_TestCase;
use BorgerDk\ArticleService;
use BorgerDk\ArticleService\Client as Client;

/**
 * Class BasicTest
 *
 * @package BorgerDk\ArticleService
 */
abstract class BasicTest extends \PHPUnit_Framework_TestCase
{
    /**
     * Client Connection
     *
     * @var BorgerDk\ArticleService\Client
     */
    protected $client;

    /**
     * @var integer
     */
    protected $municipalityCount;


    /**
     * @var integer
     */
    protected $municipalityCode;

    /**
     * @var integer
     */
    protected $articleId1;

    /**
     * @var integer
     */
    protected $articleId2;

    /**
     * @var string
     */
    protected $articleUrl;

    /**
     * @var integer
     */
    protected $articleUrlId;

    /**
     * {@inheritdoc}
     */
    public function __construct($name = null, array $data = array(), $dataName = '')
    {
        $this->municipalityCount    = (int) getenv('MUNICIPALITY_COUNT');
        $this->municipalityCode     = (int) getenv('MUNICIPALITY_CODE');
        $this->articleId1           = (int) getenv('ARTICLE_ID1');
        $this->articleId2           = (int) getenv('ARTICLE_ID2');
        $this->articleUrl           = getenv('ARTICLE_URL');
        $this->articleUrlId         = (int) getenv('ARTICLE_URL_ID');
        parent::__construct($name, $data, $dataName);
    }

    /**
     * Initiate the new Soap Client in the setup method.
     */
    protected function setUp()
    {
        $this->client = new Client();
    }
}
