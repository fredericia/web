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
use BorgerDk\ArticleService\Resources\Endpoints\GetAllArticles;

/**
 * Class GetAllArticlesTest
 *
 * @package BorgerDk\ArticleService
 */
class GetAllArticlesTest extends BasicTest
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
        $this->endpoint = new GetAllArticles($this->client);
    }

    /**
     * Test if we get articles from the raw result.
     */
    public function testGetResultRaw()
    {
        $result = $this->endpoint->getResultRaw();
        $this->assertNotEquals(0, count($result->ArticleDescription));
    }

    /**
     * Test if we get articles from the raw result.
     */
    public function testGetResultFormatted()
    {
        $result = $this->endpoint->getResultFormatted();
        $this->assertNotEquals(0, count($result));
    }
}
