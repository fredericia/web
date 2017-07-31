<?php

/*
 * This file is part of the borgerdk-php SDK.
 *
 * (c) Jens Beltofte <jens.beltofte@ffwagency.com>
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */

namespace BorgerDk\ArticleService\UnitTests\Resources\Endpoints;

use BorgerDk\ArticleService\UnitTests\BasicTest;
use BorgerDk\ArticleService\Resources\Endpoints\GetArticleIDByUrl;

/**
 * Class GetArticleIDByUrlTest.
 *
 * @package BorgerDk\ArticleService
 */
class GetArticleIDByUrlTest extends BasicTest
{
    /**
     * @var object
     */
    protected $endpoint;

    /**
     * Setup the endpoint request.
     */
    public function setUp()
    {
        parent::setUp();
        $params = array('url' => $this->articleUrl);
        $this->endpoint = new GetArticleIDByUrl($this->client, $params);
    }

    /**
     * Test if we get the correct article ID from the raw result.
     */
    public function testGetResultRaw()
    {
        $result = $this->endpoint->getResultRaw();
        $this->assertEquals($this->articleUrlId, $result->ArticleID);
    }

    /**
     * Test if we get the correct article ID from the raw result.
     */
    public function testGetResultFormatted()
    {
        $result = $this->endpoint->getResultFormatted();
        $this->assertEquals($this->articleUrlId, $result->id);
    }
}
