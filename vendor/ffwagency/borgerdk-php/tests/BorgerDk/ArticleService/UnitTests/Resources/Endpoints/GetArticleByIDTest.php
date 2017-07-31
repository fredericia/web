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
use BorgerDk\ArticleService\Resources\Endpoints\GetArticleByID;

/**
 * Class GetArticleByIDTest.
 *
 * @package BorgerDk\ArticleService
 */
class GetArticleByIDTest extends BasicTest
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
        $params = array('articleID' => $this->articleId1, 'municipalityCode' => $this->municipalityCode);
        $this->endpoint = new GetArticleByID($this->client, $params);
    }

    /**
     * Test if we get the correct article from the raw result.
     */
    public function testGetResultRaw()
    {
        $result = $this->endpoint->getResultRaw();
        $this->assertEquals($this->articleId1, $result->ArticleID);
    }

    /**
     * Test if we get the correct article from the formatted result.
     */
    public function testGetResultFormatted()
    {
        $result = $this->endpoint->getResultFormatted();
        $article = current($result);
        $this->assertEquals($this->articleId1, $article->id);
    }
}
