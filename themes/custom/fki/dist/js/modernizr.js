/*! modernizr 3.3.1 (Custom Build) | MIT *
 * http://modernizr.com/download/?-animation-contains-cssanimations-csstransforms3d-svg-target-template-touchevents-setclasses !*/
!function(e,t,n){function r(e,t){return typeof e===t}function o(){var e,t,n,o,s,i,a;for(var f in y)if(y.hasOwnProperty(f)){if(e=[],t=y[f],t.name&&(e.push(t.name.toLowerCase()),t.options&&t.options.aliases&&t.options.aliases.length))for(n=0;n<t.options.aliases.length;n++)e.push(t.options.aliases[n].toLowerCase());for(o=r(t.fn,"function")?t.fn():t.fn,s=0;s<e.length;s++)i=e[s],a=i.split("."),1===a.length?Modernizr[a[0]]=o:(!Modernizr[a[0]]||Modernizr[a[0]]instanceof Boolean||(Modernizr[a[0]]=new Boolean(Modernizr[a[0]])),Modernizr[a[0]][a[1]]=o),S.push((o?"":"no-")+a.join("-"))}}function s(e){var t=C.className,n=Modernizr._config.classPrefix||"";if(x&&(t=t.baseVal),Modernizr._config.enableJSClass){var r=new RegExp("(^|\\s)"+n+"no-js(\\s|$)");t=t.replace(r,"$1"+n+"js$2")}Modernizr._config.enableClasses&&(t+=" "+n+e.join(" "+n),x?C.className.baseVal=t:C.className=t)}function i(){return"function"!=typeof t.createElement?t.createElement(arguments[0]):x?t.createElementNS.call(t,"http://www.w3.org/2000/svg",arguments[0]):t.createElement.apply(t,arguments)}function a(){var e=t.body;return e||(e=i(x?"svg":"body"),e.fake=!0),e}function f(e,n,r,o){var s,f,u,l,d="modernizr",c=i("div"),p=a();if(parseInt(r,10))for(;r--;)u=i("div"),u.id=o?o[r]:d+(r+1),c.appendChild(u);return s=i("style"),s.type="text/css",s.id="s"+d,(p.fake?p:c).appendChild(s),p.appendChild(c),s.styleSheet?s.styleSheet.cssText=e:s.appendChild(t.createTextNode(e)),c.id=d,p.fake&&(p.style.background="",p.style.overflow="hidden",l=C.style.overflow,C.style.overflow="hidden",C.appendChild(p)),f=n(c,e),p.fake?(p.parentNode.removeChild(p),C.style.overflow=l,C.offsetHeight):c.parentNode.removeChild(c),!!f}function u(e,t){return!!~(""+e).indexOf(t)}function l(e){return e.replace(/([A-Z])/g,function(e,t){return"-"+t.toLowerCase()}).replace(/^ms-/,"-ms-")}function d(t,r){var o=t.length;if("CSS"in e&&"supports"in e.CSS){for(;o--;)if(e.CSS.supports(l(t[o]),r))return!0;return!1}if("CSSSupportsRule"in e){for(var s=[];o--;)s.push("("+l(t[o])+":"+r+")");return s=s.join(" or "),f("@supports ("+s+") { #modernizr { position: absolute; } }",function(e){return"absolute"==getComputedStyle(e,null).position})}return n}function c(e){return e.replace(/([a-z])-([a-z])/g,function(e,t,n){return t+n.toUpperCase()}).replace(/^-/,"")}function p(e,t,o,s){function a(){l&&(delete E.style,delete E.modElem)}if(s=r(s,"undefined")?!1:s,!r(o,"undefined")){var f=d(e,o);if(!r(f,"undefined"))return f}for(var l,p,m,h,v,g=["modernizr","tspan"];!E.style;)l=!0,E.modElem=i(g.shift()),E.style=E.modElem.style;for(m=e.length,p=0;m>p;p++)if(h=e[p],v=E.style[h],u(h,"-")&&(h=c(h)),E.style[h]!==n){if(s||r(o,"undefined"))return a(),"pfx"==t?h:!0;try{E.style[h]=o}catch(y){}if(E.style[h]!=v)return a(),"pfx"==t?h:!0}return a(),!1}function m(e,t){return function(){return e.apply(t,arguments)}}function h(e,t,n){var o;for(var s in e)if(e[s]in t)return n===!1?e[s]:(o=t[e[s]],r(o,"function")?m(o,n||t):o);return!1}function v(e,t,n,o,s){var i=e.charAt(0).toUpperCase()+e.slice(1),a=(e+" "+z.join(i+" ")+i).split(" ");return r(t,"string")||r(t,"undefined")?p(a,t,o,s):(a=(e+" "+N.join(i+" ")+i).split(" "),h(a,t,n))}function g(e,t,r){return v(e,n,n,t,r)}var y=[],w={_version:"3.3.1",_config:{classPrefix:"",enableClasses:!0,enableJSClass:!0,usePrefixes:!0},_q:[],on:function(e,t){var n=this;setTimeout(function(){t(n[e])},0)},addTest:function(e,t,n){y.push({name:e,fn:t,options:n})},addAsyncTest:function(e){y.push({name:null,fn:e})}},Modernizr=function(){};Modernizr.prototype=w,Modernizr=new Modernizr;var S=[],C=t.documentElement,x="svg"===C.nodeName.toLowerCase();Modernizr.addTest("svg",!!t.createElementNS&&!!t.createElementNS("http://www.w3.org/2000/svg","svg").createSVGRect),Modernizr.addTest("webanimations","animate"in i("div")),Modernizr.addTest("target",function(){var t=e.document;if(!("querySelectorAll"in t))return!1;try{return t.querySelectorAll(":target"),!0}catch(n){return!1}}),Modernizr.addTest("template","content"in i("template")),Modernizr.addTest("contains",r(String.prototype.contains,"function"));var _=w._config.usePrefixes?" -webkit- -moz- -o- -ms- ".split(" "):[];w._prefixes=_;var b=w.testStyles=f;Modernizr.addTest("touchevents",function(){var n;if("ontouchstart"in e||e.DocumentTouch&&t instanceof DocumentTouch)n=!0;else{var r=["@media (",_.join("touch-enabled),("),"heartz",")","{#modernizr{top:9px;position:absolute}}"].join("");b(r,function(e){n=9===e.offsetTop})}return n});var T="Moz O ms Webkit",z=w._config.usePrefixes?T.split(" "):[];w._cssomPrefixes=z;var P={elem:i("modernizr")};Modernizr._q.push(function(){delete P.elem});var E={style:P.elem.style};Modernizr._q.unshift(function(){delete E.style});var N=w._config.usePrefixes?T.toLowerCase().split(" "):[];w._domPrefixes=N,w.testAllProps=v,w.testAllProps=g,Modernizr.addTest("cssanimations",g("animationName","a",!0));var j="CSS"in e&&"supports"in e.CSS,k="supportsCSS"in e;Modernizr.addTest("supports",j||k),Modernizr.addTest("csstransforms3d",function(){var e=!!g("perspective","1px",!0),t=Modernizr._config.usePrefixes;if(e&&(!t||"webkitPerspective"in C.style)){var n,r="#modernizr{width:0;height:0}";Modernizr.supports?n="@supports (perspective: 1px)":(n="@media (transform-3d)",t&&(n+=",(-webkit-transform-3d)")),n+="{#modernizr{width:7px;height:18px;margin:0;padding:0;border:0}}",b(r+n,function(t){e=7===t.offsetWidth&&18===t.offsetHeight})}return e}),o(),s(S),delete w.addTest,delete w.addAsyncTest;for(var A=0;A<Modernizr._q.length;A++)Modernizr._q[A]();e.Modernizr=Modernizr}(window,document);