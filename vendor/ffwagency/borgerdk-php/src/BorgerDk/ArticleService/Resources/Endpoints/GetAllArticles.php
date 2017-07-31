<?php

/*
 * This file is part of the borgerdk-php SDK.
 *
 * (c) Jens Beltofte <jens.beltofte@ffwagency.com>
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */

namespace BorgerDk\ArticleService\Resources\Endpoints;

use BorgerDk\ArticleService;
use BorgerDk\ArticleService\Resources\ResourceAbstract;

/**
 * Class GetAllArticles
 *
 * @package BorgerDk\ArticleService
 */
class GetAllArticles extends ResourceAbstract
{
    /**
     * Return a simple formatted version of the result from the service endpoint.
     *
     * @return array
     */
    public function getResultFormatted()
    {
        $result = $this->resourceResult->ArticleDescription;
        $items = array();

        foreach ($result as $article) {
            $articleItem = $this->formatSingleArticle($article);
            $items[$articleItem->id] = $articleItem;
        }

        return $items;
    }

    /**
     * Format a single article from the result.
     *
     * @param object $article
     *
     * @return object
     */
    protected function formatSingleArticle($article)
    {
        $item = new \stdClass();
        $item->id = $article->ArticleID;
        $item->title = html_entity_decode($article->ArticleTitle, ENT_NOQUOTES, 'UTF-8');
        $item->url = $article->ArticleUrl;
        $item->lastUpdated = $article->LastUpdated;
        $item->publishDate = $article->PublishingDate;
        return $item;
    }
}
