<?php

/*
 * This file is part of the borgerdk-php SDK.
 *
 * (c) Jens Beltofte <jens.beltofte@ffwagency.com>
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */

namespace BorgerDk\ArticleService\Exceptions;

use SoapFault;

/**
 * Class SoapException
 *
 * @package BorgerDk\ArticleService
 */
class SoapException extends SoapFault
{
    public function __construct(SoapFault $fault)
    {
        trigger_error("SOAP Fault: (faultcode: {$fault->faultcode}, faultstring: {$fault->faultstring})", E_USER_ERROR);
    }
}
