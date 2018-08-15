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
    protected $soapUrlDa = 'https://www.borger.dk/_vti_bin/borger/ArticleExport.svc?wsdl';
    protected $soapUrlEn = 'https://lifeindenmark.borger.dk/_vti_bin/borger/ArticleExport.svc?wsdl';

    /**
     * Array with debug options
     *
     * @var array
     */
    protected $debug = array('trace' => 1, 'exceptions' => true);

    /**
     * Initiate the SoapClient connection.
     *
     * @param string $lang
     *
     * @throws \BorgerDk\ArticleService\Exceptions\SoapException
     */
    public function __construct($lang = 'da')
    {
        try {
            $soapUrl = (strcasecmp($lang, 'en') == 0) ? $this->soapUrlEn : $this->soapUrlDa;
            $this->client = new SoapClient($soapUrl, $this->debug);
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
