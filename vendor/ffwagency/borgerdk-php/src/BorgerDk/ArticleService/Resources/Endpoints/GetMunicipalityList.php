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
 * Class GetMunicipalityList
 *
 * @package BorgerDk\ArticleService
 */
class GetMunicipalityList extends ResourceAbstract
{
    /**
     * Return a simple formatted version of the result from the service endpoint.
     *
     * @return array
     */
    public function getResultFormatted()
    {
        $result = $this->resourceResult->Municipality;
        $items = array();

        foreach ($result as $municipality) {
            $items[$municipality->MunicipalityCode] = $municipality->MunicipalityName;
        }

        return $items;
    }
}
