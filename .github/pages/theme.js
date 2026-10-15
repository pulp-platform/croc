/* Copyright 2026 ETH Zurich and University of Bologna.
 * Licensed under the Apache License, Version 2.0, see LICENSE for details.
 * SPDX-License-Identifier: Apache-2.0
 */
(function(){
  var K='croc-theme',d=document,r=d.documentElement,
      q=window.matchMedia?window.matchMedia('(prefers-color-scheme: dark)'):null;
  function read(){
    try{var v=localStorage.getItem(K);return v==='light'||v==='dark'?v:'system'}
    catch(e){return 'system'}
  }
  var mode=read();
  function apply(){
    var t=mode==='system'?(q&&q.matches?'dark':'light'):mode;
    r.setAttribute('data-theme',t);
    var s=d.getElementById('appearance');
    if(s){
      var label='Switch to '+(t==='dark'?'light':'dark')+' mode';
      s.title=label;
      s.setAttribute('aria-label',label);
    }
  }
  apply();
  if(q){
    var onOs=function(){if(mode==='system')apply()};
    if(q.addEventListener)q.addEventListener('change',onOs);else if(q.addListener)q.addListener(onOs);
  }
  window.addEventListener('storage',function(e){
    if(e.key===K||e.key===null){mode=read();apply()}
  });
  function bind(){
    var s=d.getElementById('appearance');
    if(!s)return;
    s.hidden=false;
    s.addEventListener('click',function(){
      mode=r.getAttribute('data-theme')==='dark'?'light':'dark';
      try{localStorage.setItem(K,mode)}catch(e){}
      apply();
    });
    apply();
  }
  if(d.readyState==='loading')d.addEventListener('DOMContentLoaded',bind);else bind();
})();
