(function(){var JSON;JSON||(JSON={}),function(){"use strict";function f(t){return 10>t?"0"+t:t}function quote(t){return escapable.lastIndex=0,escapable.test(t)?'"'+t.replace(escapable,function(t){var e=meta[t];return"string"==typeof e?e:"\\u"+("0000"+t.charCodeAt(0).toString(16)).slice(-4)})+'"':'"'+t+'"'}function str(t,e){var o,n,r,s,a,i=gap,d=e[t];switch(d&&"object"==typeof d&&"function"==typeof d.toJSON&&(d=d.toJSON(t)),"function"==typeof rep&&(d=rep.call(e,t,d)),typeof d){case"string":return quote(d);case"number":return isFinite(d)?d+"":"null";case"boolean":case"null":return d+"";case"object":if(!d)return"null";if(gap+=indent,a=[],"[object Array]"===Object.prototype.toString.apply(d)){for(s=d.length,o=0;s>o;o+=1)a[o]=str(o,d)||"null";return r=0===a.length?"[]":gap?"[\n"+gap+a.join(",\n"+gap)+"\n"+i+"]":"["+a.join(",")+"]",gap=i,r}if(rep&&"object"==typeof rep)for(s=rep.length,o=0;s>o;o+=1)"string"==typeof rep[o]&&(n=rep[o],r=str(n,d),r&&a.push(quote(n)+(gap?": ":":")+r));else for(n in d)Object.prototype.hasOwnProperty.call(d,n)&&(r=str(n,d),r&&a.push(quote(n)+(gap?": ":":")+r));return r=0===a.length?"{}":gap?"{\n"+gap+a.join(",\n"+gap)+"\n"+i+"}":"{"+a.join(",")+"}",gap=i,r}}"function"!=typeof Date.prototype.toJSON&&(Date.prototype.toJSON=function(){return isFinite(this.valueOf())?this.getUTCFullYear()+"-"+f(this.getUTCMonth()+1)+"-"+f(this.getUTCDate())+"T"+f(this.getUTCHours())+":"+f(this.getUTCMinutes())+":"+f(this.getUTCSeconds())+"Z":null},String.prototype.toJSON=Number.prototype.toJSON=Boolean.prototype.toJSON=function(){return this.valueOf()});var cx=/[\u0000\u00ad\u0600-\u0604\u070f\u17b4\u17b5\u200c-\u200f\u2028-\u202f\u2060-\u206f\ufeff\ufff0-\uffff]/g,escapable=/[\\\"\x00-\x1f\x7f-\x9f\u00ad\u0600-\u0604\u070f\u17b4\u17b5\u200c-\u200f\u2028-\u202f\u2060-\u206f\ufeff\ufff0-\uffff]/g,gap,indent,meta={"\b":"\\b","	":"\\t","\n":"\\n","\f":"\\f","\r":"\\r",'"':'\\"',"\\":"\\\\"},rep;"function"!=typeof JSON.stringify&&(JSON.stringify=function(t,e,o){var n;if(gap="",indent="","number"==typeof o)for(n=0;o>n;n+=1)indent+=" ";else"string"==typeof o&&(indent=o);if(rep=e,e&&"function"!=typeof e&&("object"!=typeof e||"number"!=typeof e.length))throw Error("JSON.stringify");return str("",{"":t})}),"function"!=typeof JSON.parse&&(JSON.parse=function(text,reviver){function walk(t,e){var o,n,r=t[e];if(r&&"object"==typeof r)for(o in r)Object.prototype.hasOwnProperty.call(r,o)&&(n=walk(r,o),void 0!==n?r[o]=n:delete r[o]);return reviver.call(t,e,r)}var j;if(text+="",cx.lastIndex=0,cx.test(text)&&(text=text.replace(cx,function(t){return"\\u"+("0000"+t.charCodeAt(0).toString(16)).slice(-4)})),/^[\],:{}\s]*$/.test(text.replace(/\\(?:["\\\/bfnrt]|u[0-9a-fA-F]{4})/g,"@").replace(/"[^"\\\n\r]*"|true|false|null|-?\d+(?:\.\d*)?(?:[eE][+\-]?\d+)?/g,"]").replace(/(?:^|:|,)(?:\s*\[)+/g,"")))return j=eval("("+text+")"),"function"==typeof reviver?walk({"":j},""):j;throw new SyntaxError("JSON.parse")})}();var P,Req,e,root,__slice=[].slice,__hasProp={}.hasOwnProperty;root="undefined"!=typeof exports&&null!==exports?exports:this,root.adosRun=function(){for(;void 0!==window.ados.run&&window.ados.run.length>0;)window.ados.run[0].call(),ados.run.splice(0,1);return window.ados.run.push=function(t){return t.call()}},root.cssLoad=function(t){var e,o;return e=document.createElement("style"),document.getElementsByTagName("head")[0].appendChild(e),window.ActiveXObject?document.styleSheets[document.styleSheets.length-1].cssText=t:(o=document.createTextNode(t),e.appendChild(o))},root.cssLinkLoad=function(t){var e;return e=document.createElement("link"),e.rel="stylesheet",e.href=t,document.getElementsByTagName("head")[0].appendChild(e)},root.azHtmlLoad=function(t,e){var o;return o=document.getElementById(t),o.innerHTML=e},root.azScriptSRCLoad=function(t,e){var o,n;return n=document.createElement("script"),n.type="text/javascript",n.src=e,o=document.getElementById(t),o.appendChild(n)},root.azScriptExtensionLoad=function(t){var e,o;return o=document.createElement("script"),o.type="text/javascript",o.src=t,e=document.getElementsByTagName("head")[0],e.appendChild(o)},root.azRegisterExtension=function(t,e){var o,n,r,s;if(null==root.ados.extensions&&(root.ados.extensions={}),root.ados.extensions[t]=e,null!=root.ados.extensionCalls&&null!=root.ados.extensionCalls[t]){for(s=root.ados.extensionCalls[t],n=0,r=s.length;r>n;n++)o=s[n],e.apply(root,o);return delete root.ados.extensionCalls[t]}},root.azInitExtension=function(){var t,e;return e=arguments[0],t=arguments.length>=2?__slice.call(arguments,1):[],null!=root.ados.extensions&&null!=root.ados.extensions[e]?root.ados.extensions[e].apply(root,t):(null==root.ados.extensionCalls&&(root.ados.extensionCalls={}),null==root.ados.extensionCalls[e]&&(root.ados.extensionCalls[e]=[]),root.ados.extensionCalls[e].push(t))},root.ados_async_load=function(t){var e,o;return o=document.createElement("script"),o.type="text/javascript",o.async=!0,o.src=t,e=document.getElementsByTagName("script")[0],e.parentNode.insertBefore(o,e)},root.azScriptInlineLoad=function(t,e){var o,n;return n=document.createElement("script"),n.type="text/javascript",/msie/.test(navigator.userAgent.toLowerCase())?n.text=e:n.innerHTML=e,o=document.getElementById(t),o.appendChild(n)},root.azLoad=function(t,e){var o;return o=document.getElementById(t),o?e():setTimeout(function(){return azLoad(t,e)},100)},root.zshow=function(t){return zItems[t]?document.write(zItems[t]):void 0},root.ados_addInlinePlacement=function(t,e,o){var n,r,s,a;for(n="ABCDEFGHIJKLMNOPQRSTUVWXTZ",a="",r=0;12>r;)s=Math.floor(Math.random()*n.length),a+=n.substring(s,s+1),r++;return ados_addPlacement(t,e,a,o)},root.ados_add_placement=function(t,e,o,n){return ados_addPlacement(t,e,o,n)},root.ados_addPlacement=function(t,e,o,n){var r;return r=new P,r.A=t,r.S=e,r.D=o,isNaN(n)?r.ATA=n:r.AT=n,ados_addPlacementObject(r),r},root.ados_loadDiv=function(t){return window.ados.isAsync?void 0:zshow(t)},root.ados_setKeywords=function(t){var e;return e=(" "+document.cookie).match(RegExp("[; ]ados_keyword_cookie=([^\\s;]*)")),window.ados.keywords=e?unescape(e[1])+","+t:t},root.ados_setKeywordCookie=function(t){var e,o;return o=new Date,e=window.ados.domain||".adzerk.net",o.setTime((new Date).getTime()+2592e6),document.cookie="ados_keyword_cookie="+escape(t)+";expires="+o.toGMTString()+"domain="+e+";path=/;"},root.ados_setNoTrack=function(){return window.ados.isNoTrack=!0},root.ados_setDomain=function(t){return window.ados.domain=t},root.ados_setWriteResults=function(){return window.ados.writeResults=!0},root.ados_log=function(t){return window.console?console.info((new Date).getTime()+": "+t):void 0},root.ados_addPlacementObject=function(t){return window.ados.placements||(window.ados.placements=Array()),window.ados.placements.push(t)},root.ados_refresh=function(t,e,o){var n;for(ados_log("triggering refresh of:"+t.D),n=document.getElementById(t.D);n.hasChildNodes();)n.removeChild(n.lastChild);return ados_addPlacementObject(t),ados_load(),o?setTimeout(function(){return ados_refresh(t,e,!0)},1e3*e):void 0},root.ados_loadResults=function(results){var i,len,_results;for(len=results.length,i=0,_results=[];len>i;)adosResults[results[i].divName]=results[i],eval(results[i].adCode),_results.push(i++);return _results},Req=function(){return this.Placements=window.ados.placements,window.ados.placements=Array(),this.Keywords=encodeURIComponent(ados.keywords),this.Referrer=encodeURIComponent(document.referrer),this.IsAsync=window.ados.isAsync,this.IsNoTrack=window.ados.isNoTrack,this.WriteInline=window.ados.writeInline,this.WriteResults=window.ados.writeResults,this},P=function(){return{setZone:function(t){return this.Z=t,this},setClickUrl:function(t){return this.ClickUrl=encodeURIComponent(t),this},setRedirectUrl:function(t){return this.RedirectUrl=encodeURIComponent(t),this},setCampaignId:function(t){return this.CampaignId=t,this},setFlightId:function(t){return this.FlightId=t,this},setFlightCreativeId:function(t){return this.FlightCreativeId=t,this},setProperty:function(t,e){return null==this.Properties&&(this.Properties={}),this.Properties[t]=e,this},setProperties:function(t){var e,o;null==this.Properties&&(this.Properties={});for(e in t)__hasProp.call(t,e)&&(o=t[e],this.Properties[e]=o);return this},enableDynamicSiteSelection:function(){return this.DynamicSiteOverride=document.domain.replace(/^www\./,""),this},setRefresh:function(t){var e;return e=this,setTimeout(function(){return ados_refresh(e,t,!0)},1e3*t),this},loadInline:function(){return ados.isAsync=!1,ados.writeInline=!0,window.divName=this.D,ados_load(this.D),this}}},root.ados_load=function(){var t,e,o,n,r,s;return t=window.ados.domain||"engine.adzerk.net",ados.isAsync!==!1&&(window.ados.isAsync=!0),e=(" "+document.cookie).match(RegExp("[; ]ados_keyword_cookie=([^\\s;]*)")),e&&(window.ados.keywords=unescape(e[1])),o="http","https:"===document.location.protocol&&(o="https"),s=o+"://"+t+"/ados?t="+(new Date).getTime()+"&request=",r=new Req,n=window.Prototype?Array.prototype.toJSON:null,n&&delete Array.prototype.toJSON,0!==r.Placements.length&&(window.ados.isAsync?ados_async_load(s+JSON.stringify(r)):document.write('<script type="text/javascript" src="'+s+encodeURI(JSON.stringify(r))+'"></script>')),n?Array.prototype.toJSON=n:void 0},root.ados_loadInline=function(t,e,o){var n,r,s,a;for(n="ABCDEFGHIJKLMNOPQRSTUVWXTZ",a="",r=0;12>r;)s=Math.floor(Math.random()*n.length),a+=n.substring(s,s+1),r++;return document.write('<div id="'+a+'"></div>'),ados_add_placement(t,e,a,o)},root.ados_loadPassback=function(t,e){return window.ados.passbacks||(window.ados.passbacks={}),window.ados.currentPassback||(window.ados.currentPassback={}),window.ados.counted||(window.ados.counted={}),window.ados.passbacks[t]=e,window.ados.counted[t]=!1,ados_execPassback(t,e[0])},root.ados_passback_next=function(t,e){var o,n,r,s,a,i;for(o=window.ados.passbacks[t],r=a=i=o.length-1;0>=i?0>=a:a>=0;r=0>=i?++a:--a)if(n=o[r],n.FlightId===e)return s=r+1,s===window.ados.passbacks[t].length?null:window.ados.passbacks[t][s];throw Error("Flight not found - make sure the network is returning the correct passback")},root.ados_findPassback=function(t,e){var o,n,r,s,a;for(o=window.ados.passbacks[t],r=s=a=o.length-1;0>=a?0>=s:s>=0;r=0>=a?++s:--s)if(n=o[r],n.FlightId===e)return n;throw Error("Flight not found - make sure the network is returning the correct passback")},root.ados_passback=function(t,e){var o;return ados_log("received passback for div:"+t+" and flightId:"+e),o=ados_passback_next(t,e),ados_execPassback(t,o)},root.ados_execPassback=function(div,passback){var timeoutScript;return ados_log("loading flight:"+passback.FlightId),window.ados.currentPassback[div]=passback.FlightId,timeoutScript="",window.ados.isAsync||(timeoutScript='setTimeout(function() { ados_timeoutExpired("'+div+'", '+passback.FlightId+") }, 2500)"),eval(passback.Script+timeoutScript)},root.ados_timeoutExpired=function(t,e){return window.ados.currentPassback&&window.ados.currentPassback[t]===e&&window.ados.counted[t]===!1?(ados_log("time to passback expired for div:"+t+" and flightid:"+e),ados_passbackFilled(t,e)):void 0},root.ados_frameLoaded=function(t,e){var o;return o=document.getElementById("ados_frame_"+t+"_"+e),null!==o&&"complete"!==o.readyState&&void 0!==o.readyState?setTimeout(function(){return ados_frameLoaded(t,e)},100):window.ados.currentPassback&&window.ados.currentPassback[t]===e?setTimeout(function(){return ados_passbackFilled(t,e)},400):window.ados.currentPassback&&window.ados.currentPassback[t]&&null!==o?o.parentNode.removeChild(o):void 0},root.ados_passbackFilled=function(t,e){var o;return window.ados.currentPassback&&window.ados.currentPassback[t]===e&&(ados_log("flight is loaded for div: "+t+" and flightId:"+e),o=ados_findPassback(t,e),void 0===o.counted&&window.ados.counted[t]===!1)?(o.counted=window.ados.counted[t].counted=!0,ados_passbackWritePixel(t,o.VeriPixel,e)):void 0},root.ados_passbackWritePixel=function(t,e,o){var n,r;return n=document.getElementById(t),null!==n?(ados_log("writing pixel for div: "+t+" and flightId:"+o),r=document.createElement("img"),r.setAttribute("height","0px"),r.setAttribute("width","0px"),r.setAttribute("border","0"),r.setAttribute("style","position:absolute;"),r.setAttribute("src",e),n.appendChild(r)):void 0},root.ados_writePixel=function(t,e){var o,n;return o=document.getElementById(t),null!==o?(n=document.createElement("img"),n.setAttribute("height","0px"),n.setAttribute("width","0px"),n.setAttribute("border","0"),n.setAttribute("style","position:absolute;"),n.setAttribute("src",e),o.appendChild(n)):void 0},root.ados_loadFIframe=function(t,e,o,n,r){var s,a,i;return s=document.getElementById(t),i=document.createElement("iframe"),i.id="ados_frame_"+t+"_"+o,i.frameBorder=0,i.scrolling="no",i.noresize="noresize",i.marginheight=0,i.marginwidth=0,0!==n&&(i.height=n),0!==r&&(i.width=r),s.appendChild(i),i.attachEvent?i.attachEvent("onload",function(){return ados_frameLoaded(t,o)}):i.onload=function(){return ados_frameLoaded(t,o)},e='<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01//EN" "http://www.w3.org/TR/html4/strict.dtd"><html><head><style>div,iframe { top: 0; position:absolute; }</style></head><body style="margin:0px;padding:0px;"><script type="text/javascript">var divName = "'+t+'";var inFIF=true;var inDapIF = true;</script>'+e+"</body></html>",/msie/.test(navigator.userAgent.toLowerCase())||window.opera?(i.contentWindow.contents=e,i.src='javascript:window["contents"]'):(a=i.contentDocument,a.open(),a.write(e),a.close(),i)},root.ados_passback_receiveMessage=function(t){var e,o,n;for(o=t.data.flightId,e=t.source.parent;!e.divName&&e!==e.parent;)e=e.parent;return void 0!==e.divName&&void 0!==t.data.flightId?(ados_log("passback recieved through postMessage for Div:"+e.divName+" FlightId:"+t.data.flightId),n=document.getElementById("ados_frame_"+e.divName+"_"+t.data.flightId),n.parentNode.removeChild(n),ados_passback(e.divName,t.data.flightId)):void 0},window.ados=window.ados||{},window.ados.run=window.ados.run||[],window.zItems=window.zItems||[],window.adosResults=window.adosResults||{};try{window.top.attachEvent?window.top.attachEvent("message",ados_passback_receiveMessage,!1):window.top.addEventListener&&window.top.addEventListener("message",ados_passback_receiveMessage,!1)}catch(_error){e=_error}root.adosRun(),setTimeout(function(){return root.adosRun()},1e3)}).call(this);
var adzerk2_html_51718 = '\x3cdiv\x20id\x3d\x22beta\x2dad\x2dcontainer\x22\x20style\x3d\x22height\x3a\x20250px\x3b\x20width\x3a\x20220px\x3b\x22\x3e\x3c\x2fdiv\x3e';
var adzerk2_html_command_98479 = function() { azHtmlLoad('adzerk2', adzerk2_html_51718); };
var adzerk2_js_95906 = 'window\x2e_betaAdUrl\x20\x3d\x20\x22http\x3a\x2f\x2fengine\x2eadzerk\x2enet\x2fr\x3fe\x3deyJhdiI6NDE0LCJhdCI6MTcsImNtIjoxMTYxLCJjaCI6MTE5OCwiY3IiOjI2NjMsImRpIjoiNzZmZmVmNGZiZGI5NDEyYmFhZTM3ODAyY2YwZDIzNzMiLCJkbSI6MSwiZmMiOjQ2NTEsImZsIjozMzM1LCJpcCI6IjE5MC4yMTEuOTUuNjgiLCJrdyI6IngtaG9zdC10ZXguc3RhY2tleGNoYW5nZS5jb20iLCJudyI6MjIsInBjIjowLCJwciI6MTc1NiwicnQiOjEsInN0IjoxMjA1NywidWsiOiJ1ZTEtZjc5MjMyZmM4NjJiNDQzYTgyMDhjZWUzNDg5NzgyNGMiLCJ6biI6NzYsInRzIjoxNDA5NzI1MDYwNDg3LCJ1ciI6bnVsbH0\x26s\x3dRgKq8gS6b14IlfMOo1Fueyvkpwo\x22\x3b';
var adzerk2_js_command_43691 = function() { azScriptInlineLoad('adzerk2', adzerk2_js_95906); };
var adzerk2_js_67147 = 'http\x3a\x2f\x2fstackexchange\x2ecom\x2fads\x2fbeta\x2dquestion\x2fjs\x3fid\x3dbeta\x2dad\x2dcontainer';
var adzerk2_js_command_76933 = function() { azScriptSRCLoad('adzerk2', adzerk2_js_67147); };
var adzerk2_pixel_15733 = 'http\x3a\x2f\x2fengine\x2eadzerk\x2enet\x2fi\x2egif\x3fe\x3deyJhdiI6NDE0LCJhdCI6MTcsImNtIjoxMTYxLCJjaCI6MTE5OCwiY3IiOjI2NjMsImRpIjoiNzZmZmVmNGZiZGI5NDEyYmFhZTM3ODAyY2YwZDIzNzMiLCJkbSI6MSwiZmMiOjQ2NTEsImZsIjozMzM1LCJpcCI6IjE5MC4yMTEuOTUuNjgiLCJrdyI6IngtaG9zdC10ZXguc3RhY2tleGNoYW5nZS5jb20iLCJudyI6MjIsInBjIjowLCJwciI6MTc1NiwicnQiOjEsInN0IjoxMjA1NywidWsiOiJ1ZTEtZjc5MjMyZmM4NjJiNDQzYTgyMDhjZWUzNDg5NzgyNGMiLCJ6biI6NzYsInRzIjoxNDA5NzI1MDYwNDg3fQ\x26s\x3dCqIbEZCo2b4dHLyd6Qu\x2dhhdsQZ8';
var adzerk2_pixel_command_45173 = function() { if(ados_writePixel){ ados_writePixel('adzerk2', adzerk2_pixel_15733); } else { ados_passbackWritePixel('adzerk2', adzerk2_pixel_15733, 3335) }; };
setTimeout(function() {
  azLoad('adzerk2', adzerk2_html_command_98479);
  azLoad('adzerk2', adzerk2_js_command_43691);
  azLoad('adzerk2', adzerk2_js_command_76933);
  azLoad('adzerk2', adzerk2_pixel_command_45173);
}, 100);