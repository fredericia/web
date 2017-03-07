/*
Copyright (c) 2003-2013, CKSource - Frederico Knabben. All rights reserved.
For licensing, see LICENSE.html or http://ckeditor.com/license
*/

/*
 * This file is used/requested by the 'Styles' button.
 * The 'Styles' button is not enabled by default in DrupalFull and DrupalFiltered toolbars.
 */
if(typeof(CKEDITOR) !== 'undefined') {
	// config.stylesSet.push({ name : 'Nice Table', element : 'table', wrap:false, attributes : { 'class' : 'mt-nice-table', 'title' :'Nice Table' } });
    CKEDITOR.addStylesSet( 'drupal',
    [

        /* Bootstrap Styles */

        /* Typography */
        { name : 'Overskift (H2)' , element : 'h2', attributes: { 'class': 'h2' } },
        { name : 'Afsnitsoverskift (H3)' , element : 'h3', attributes: { 'class': 'h3' } },
        { name : 'Afsnitsoverskift Primary (H3)'        , element : 'h3', attributes: { 'class': 'h3 text-primary' } },
        { name : 'Overskrift 4' , element : 'h4', attributes: { 'class': 'h4' } },
        { name : 'Overskrift 5' , element : 'h5', attributes: { 'class': 'h5' } },
        { name : 'Overskrift 6' , element : 'h6', attributes: { 'class': 'h6' } },

        { name : 'Indledning (Lead)' , element : 'p', attributes: { 'class': 'lead' } },
        { name : 'Afsnit', element : 'p', attributes: { 'class': 'normal' } },
        { name : 'Afsnit - info'     , element : 'p', attributes: { 'class' : 'bg-info bg-pad10' } },
        { name : 'Afsnit - fremhævet'     , element : 'p', attributes: { 'class' : 'well ' } },
        { name : 'Afsnit - fremhævet stor'     , element : 'p', attributes: { 'class' : 'well well-xl  ' } },
        { name : 'Afsnit - fremhævet lille'     , element : 'p', attributes: { 'class' : 'well well-sm  ' } },
        { name : 'Afsnit - grøn'     , element : 'p', attributes: { 'class' : 'bg-success bg-pad10' } },
        { name : 'Afsnit - rød'     , element : 'p', attributes: { 'class' : 'bg-danger bg-pad10' } },
        { name : 'Afsnit - gul'     , element : 'p', attributes: { 'class' : 'bg-warning bg-pad10' } },

        {
            name : 'Liste',
            element : 'ul',
            attributes :
            {
                'class' : 'list-unstyled'
            }
        },
        {
            name : 'Liste - horisontal',
            element : 'ul',
            attributes :
            {
                'class' : 'list-inline'
            }
        },
        {
            name : 'Liste - grupperet',
            element : 'ul',
            attributes :
            {
                'class' : 'list-group'
            }
        },

        {
            name : 'Listeelement - normal',
            element : 'li',
            attributes :
            {
                'class' : ' '
            }
        },
        {
            name : 'Listeelement - grupperet',
            element : 'li',
            attributes :
            {
                'class' : 'list-group-item'
            }
        },
        {
            name : 'Listeelement - grupperet - info',
            element : 'li',
            attributes :
            {
                'class' : 'list-group-item list-group-item-info'
            }
        },
        {
            name : 'Listeelement - grupperet - rød',
            element : 'li',
            attributes :
            {
                'class' : 'list-group-item list-group-item-danger'
            }
        },
        {
            name : 'Listeelement - grupperet - gul',
            element : 'li',
            attributes :
            {
                'class' : 'list-group-item list-group-item-warning'
            }
        },
        {
            name : 'Listeelement - grupperet - grøn',
            element : 'li',
            attributes :
            {
                'class' : 'list-group-item list-group-item-success'
            }
        },





        {
            name : 'Tabel',
            element : 'table',
            attributes :
            {
                'class' : 'table'
            }
        },
        {
            name : 'Tabel - stribet',
            element : 'table',
            attributes :
            {
                'class' : 'table table-striped'
            }
        },
        {
            name : 'Tabel - m ramme',
            element : 'table',
            attributes :
            {
                'class' : 'table table-bordered'
            }
        },
        {
            name : 'Tabel - mouse-over effekt',
            element : 'table',
            attributes :
            {
                'class' : 'table table-hover'
            }
        },
        {
            name : 'Tabel - lille margin',
            element : 'table',
            attributes :
            {
                'class' : 'table table-condensed'
            }
        },
        {
            name : 'Billede - runde hjørner',
            element : 'img',
            attributes :
            {
                'class' : 'img-rounded'
            }
        },
        {
            name : 'Billede - rundt',
            element : 'img',
            attributes :
            {
                'class' : 'img-circle'
            }
        },

        {
            name : 'Billede - flyder t venstre',
            element : 'img',
            attributes :
            {
                'class' : 'pull-left'
            }
        },
        {
            name : 'Billede - flyder t højre',
            element : 'img',
            attributes :
            {
                'class' : 'pull-right'
            }
        },

    ]);
}
