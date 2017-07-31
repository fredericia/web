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
use BorgerDk\ArticleService\Resources\Endpoints\GetArticlesByIDs;

/**
 * Class GetArticleByIDTest.
 *
 * @package BorgerDk\ArticleService
 */
class GetArticlesByIDsTest extends BasicTest
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
        $articleIds = array($this->articleId1, $this->articleId2);
        $params = array('articleIDs' => $articleIds, 'municipalityCode' => $this->municipalityCode);
        $this->endpoint = new GetArticlesByIDs($this->client, $params);
    }

    /**
     * Test if we get the correct articles from the raw result.
     */
    public function testGetResultRaw()
    {
        $result = $this->endpoint->getResultRaw();
        $this->assertEquals(2, count($result->Article));

        $article = current($result->Article);
        $this->assertEquals($this->articleId1, $article->ArticleID);

        $article = next($result->Article);
        $this->assertEquals($this->articleId2, $article->ArticleID);
    }

    /**
     * Test if we get the correct articles from the formatted result.
     */
    public function testGetResultFormatted()
    {
        $result = $this->endpoint->getResultFormatted();
        $this->assertEquals(2, count($result));

        $article = current($result);
        $this->assertEquals($this->articleId1, $article->id);

        $article = next($result);
        $this->assertEquals($this->articleId2, $article->id);
    }
}
