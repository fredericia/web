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
use BorgerDk\ArticleService\Resources\Endpoints\GetMunicipalityList;

/**
 * Class GetMunicipalityListTest
 *
 * @package BorgerDk\ArticleService
 */
class GetMunicipalityListTest extends BasicTest
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
        $this->endpoint = new GetMunicipalityList($this->client);
    }

    /**
     * Test if we get the correct number of municipalities from the raw result.
     */
    public function testGetResultRawCount()
    {
        $result = $this->endpoint->getResultRaw();
        $this->assertEquals($this->municipalityCount, count($result->Municipality));
    }

    /**
     * Test if we get the correct number of municipalities from the formatted result.
     */
    public function testGetResultFormattedCount()
    {
        $result = $this->endpoint->getResultFormatted();
        $this->assertEquals($this->municipalityCount, count($result));
    }
}
