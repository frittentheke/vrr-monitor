#ifndef CONFIGURATION_SITE_H
#define CONFIGURATION_SITE_H

// ESP8266 with reduced payload size

#ifdef NODE_MCU_ESP8266
const char INDEX_HTML[] = R"=====(
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8" />
<meta name = "viewport" content = "width = device-width, initial-scale = 1.0, maximum-scale = 1.0, user-scalable=0">
<title>Digitransit Sign Configuration</title>
</head>
<body>
<h1>Digitransit Sign Configuration</h1>
<p>Configure your stop sign with the following configurations. More information in the <a href="https://github.com/stetro/digitransit-busstop-sign">Github Repo</a> README.</p>
<p>Find your station ID after search in the address bar of your local reittiopas <a href="http://waltti.fi/reittiopas/">http://waltti.fi/reittiopas/</a> or <a href="https://reittiopas.hsl.fi">https://reittiopas.hsl.fi</a></p>
<p>For bike station support: find your bike station in <a href="https://kaupunkipyorat.hsl.fi/en/stations">https://kaupunkipyorat.hsl.fi/en/stations<a/> and choose HSL as server.</p>
<p>Set the turnoff time to 0 to run it endlessly.</p>
<form class="pure-form pure-form-aligned" method="POST" action="update">
<fieldset>
<div class="pure-control-group">
<label for="ssid">Wifi SSID:</label>
<input id="ssid" type="text" placeholder="SSID" name="ssid">
</div>

<div class="pure-control-group">
<label for="password">Wifi Password:</label>
<input id="password" type="password" placeholder="Password" name="password">
</div>

<div class="pure-control-group">
<label for="server">Digitransit Server:</label>
<select name="server" id="server">
<option value="hsl">HSL Server (Helsinki)</option>
<option value="waltti">Waltti Server (Rest of Finland)</option>
</select>
</div>

<div class="pure-control-group">
<label for="station">Digitransit Station ID:</label>
<input id="station" type="text" placeholder="Digitransit Station ID" name="station">
</div>

<div class="pure-control-group">
<label for="station_type">Digitransit Station Type:</label>
<select name="station_type" id="station_type">
<option value="bus">Metro, Tram, Bus Stop</option>
<option value="bike">Bike Station</option>
</select>
</div>

<div class="pure-control-group">
<label for="turnoff">Turnoff interval<br/>in minutes</label>
<input id="turnoff" type="number" placeholder="minutes" name="turnoff" value="0">
</div>

<div class="pure-controls">
<button type="submit" class="pure-button pure-button-primary">Update Configuration</button>
</div>
</fieldset>
</form>

</body>
</html>)=====";
#endif

#ifdef NODE_MCU_ESP32
const char INDEX_HTML[] = R"=====(
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8" />
<meta name = "viewport" content = "width = device-width, initial-scale = 1.0, maximum-scale = 1.0, user-scalable=0">
<title>Digitransit Sign Configuration</title>
<style>
/*!
Pure v1.0.0
Copyright 2013 Yahoo!
Licensed under the BSD License.
https://github.com/yahoo/pure/blob/master/LICENSE.md
*/
img,legend{border:0}legend,td,th{padding:0}html{font-family:sans-serif;-ms-text-size-adjust:100%;-webkit-text-size-adjust:100%}body{margin:0}article,aside,details,figcaption,figure,footer,header,hgroup,main,menu,nav,section,summary{display:block}audio,canvas,progress,video{display:inline-block;vertical-align:baseline}audio:not([controls]){display:none;height:0}[hidden],template{display:none}a{background-color:transparent}a:active,a:hover{outline:0}abbr[title]{border-bottom:1px dotted}b,optgroup,strong{font-weight:700}dfn{font-style:italic}h1{font-size:2em;margin:.67em 0}mark{background:#ff0;color:#000}small{font-size:80%}sub,sup{font-size:75%;line-height:0;position:relative;vertical-align:baseline}sup{top:-.5em}sub{bottom:-.25em}svg:not(:root){overflow:hidden}figure{margin:1em 40px}hr{box-sizing:content-box;height:0}pre,textarea{overflow:auto}code,kbd,pre,samp{font-family:monospace,monospace;font-size:1em}button,input,optgroup,select,textarea{color:inherit;font:inherit;margin:0}button{overflow:visible}button,select{text-transform:none}button,html input[type=button],input[type=reset],input[type=submit]{-webkit-appearance:button;cursor:pointer}button[disabled],html input[disabled]{cursor:default}button::-moz-focus-inner,input::-moz-focus-inner{border:0;padding:0}input{line-height:normal}input[type=checkbox],input[type=radio]{box-sizing:border-box;padding:0}input[type=number]::-webkit-inner-spin-button,input[type=number]::-webkit-outer-spin-button{height:auto}input[type=search]{-webkit-appearance:textfield;box-sizing:content-box}input[type=search]::-webkit-search-cancel-button,input[type=search]::-webkit-search-decoration{-webkit-appearance:none}fieldset{border:1px solid silver;margin:0 2px;padding:.35em .625em .75em}table{border-collapse:collapse;border-spacing:0}.hidden,[hidden]{display:none!important}.pure-img{max-width:100%;height:auto;display:block}
.pure-form input[type=text],.pure-form input[type=number],.pure-form input[type=search],.pure-form input[type=tel],.pure-form input[type=color],.pure-form input[type=password],.pure-form input[type=email],.pure-form input[type=url],.pure-form input[type=date],.pure-form input[type=month],.pure-form input[type=time],.pure-form input[type=datetime],.pure-form input[type=datetime-local],.pure-form input[type=week],.pure-form select,.pure-form textarea{padding:.5em .6em;display:inline-block;border:1px solid #ccc;box-shadow:inset 0 1px 3px #ddd;border-radius:4px;vertical-align:middle;box-sizing:border-box}.pure-form input:not([type]){padding:.5em .6em;display:inline-block;border:1px solid #ccc;box-shadow:inset 0 1px 3px #ddd;border-radius:4px;box-sizing:border-box}.pure-form input[type=color]{padding:.2em .5em}.pure-form input:not([type]):focus,.pure-form input[type=text]:focus,.pure-form input[type=number]:focus,.pure-form input[type=search]:focus,.pure-form input[type=tel]:focus,.pure-form input[type=color]:focus,.pure-form input[type=password]:focus,.pure-form input[type=email]:focus,.pure-form input[type=url]:focus,.pure-form input[type=date]:focus,.pure-form input[type=month]:focus,.pure-form input[type=time]:focus,.pure-form input[type=datetime]:focus,.pure-form input[type=datetime-local]:focus,.pure-form input[type=week]:focus,.pure-form select:focus,.pure-form textarea:focus{outline:0;border-color:#129FEA}.pure-form input[type=file]:focus,.pure-form input[type=radio]:focus,.pure-form input[type=checkbox]:focus{outline:#129FEA auto 1px}.pure-form .pure-checkbox,.pure-form .pure-radio{margin:.5em 0;display:block}.pure-form input:not([type])[disabled],.pure-form input[type=text][disabled],.pure-form input[type=number][disabled],.pure-form input[type=search][disabled],.pure-form input[type=tel][disabled],.pure-form input[type=color][disabled],.pure-form input[type=password][disabled],.pure-form input[type=email][disabled],.pure-form input[type=url][disabled],.pure-form input[type=date][disabled],.pure-form input[type=month][disabled],.pure-form input[type=time][disabled],.pure-form input[type=datetime][disabled],.pure-form input[type=datetime-local][disabled],.pure-form input[type=week][disabled],.pure-form select[disabled],.pure-form textarea[disabled]{cursor:not-allowed;background-color:#eaeded;color:#cad2d3}.pure-form input[readonly],.pure-form select[readonly],.pure-form textarea[readonly]{background-color:#eee;color:#777;border-color:#ccc}.pure-form input:focus:invalid,.pure-form select:focus:invalid,.pure-form textarea:focus:invalid{color:#b94a48;border-color:#e9322d}.pure-form input[type=file]:focus:invalid:focus,.pure-form input[type=radio]:focus:invalid:focus,.pure-form input[type=checkbox]:focus:invalid:focus{outline-color:#e9322d}.pure-form select{height:2.25em;border:1px solid #ccc;background-color:#fff}.pure-form select[multiple]{height:auto}.pure-form label{margin:.5em 0 .2em}.pure-form fieldset{margin:0;padding:.35em 0 .75em;border:0}.pure-form legend{display:block;width:100%;padding:.3em 0;margin-bottom:.3em;color:#333;border-bottom:1px solid #e5e5e5}.pure-form-stacked input:not([type]),.pure-form-stacked input[type=text],.pure-form-stacked input[type=number],.pure-form-stacked input[type=search],.pure-form-stacked input[type=tel],.pure-form-stacked input[type=color],.pure-form-stacked input[type=file],.pure-form-stacked input[type=password],.pure-form-stacked input[type=email],.pure-form-stacked input[type=url],.pure-form-stacked input[type=date],.pure-form-stacked input[type=month],.pure-form-stacked input[type=time],.pure-form-stacked input[type=datetime],.pure-form-stacked input[type=datetime-local],.pure-form-stacked input[type=week],.pure-form-stacked label,.pure-form-stacked select,.pure-form-stacked textarea{display:block;margin:.25em 0}.pure-form-aligned .pure-help-inline,.pure-form-aligned input,.pure-form-aligned select,.pure-form-aligned textarea,.pure-form-message-inline{display:inline-block;vertical-align:middle}.pure-form-aligned textarea{vertical-align:top}.pure-form-aligned .pure-control-group{margin-bottom:.5em}.pure-form-aligned .pure-control-group label{text-align:right;display:inline-block;vertical-align:middle;width:10em;margin:0 1em 0 0}.pure-form-aligned .pure-controls{margin:1.5em 0 0 11em}.pure-form .pure-input-rounded,.pure-form input.pure-input-rounded{border-radius:2em;padding:.5em 1em}.pure-form .pure-group fieldset{margin-bottom:10px}.pure-form .pure-group input,.pure-form .pure-group textarea{display:block;padding:10px;margin:0 0 -1px;border-radius:0;position:relative;top:-1px}.pure-form .pure-group input:focus,.pure-form .pure-group textarea:focus{z-index:3}.pure-form .pure-group input:first-child,.pure-form .pure-group textarea:first-child{top:1px;border-radius:4px 4px 0 0;margin:0}.pure-form .pure-group input:first-child:last-child,.pure-form .pure-group textarea:first-child:last-child{top:1px;border-radius:4px;margin:0}.pure-form .pure-group input:last-child,.pure-form .pure-group textarea:last-child{top:-2px;border-radius:0 0 4px 4px;margin:0}.pure-form .pure-group button{margin:.35em 0}.pure-form .pure-input-1{width:100%}.pure-form .pure-input-3-4{width:75%}.pure-form .pure-input-2-3{width:66%}.pure-form .pure-input-1-2{width:50%}.pure-form .pure-input-1-3{width:33%}.pure-form .pure-input-1-4{width:25%}.pure-form .pure-help-inline,.pure-form-message-inline{display:inline-block;padding-left:.3em;color:#666;vertical-align:middle;font-size:.875em}.pure-form-message{display:block;color:#666;font-size:.875em}@media only screen and (max-width :480px){.pure-form button[type=submit]{margin:.7em 0 0}.pure-form input:not([type]),.pure-form input[type=text],.pure-form input[type=number],.pure-form input[type=search],.pure-form input[type=tel],.pure-form input[type=color],.pure-form input[type=password],.pure-form input[type=email],.pure-form input[type=url],.pure-form input[type=date],.pure-form input[type=month],.pure-form input[type=time],.pure-form input[type=datetime],.pure-form input[type=datetime-local],.pure-form input[type=week],.pure-form label{margin-bottom:.3em;display:block}.pure-group input:not([type]),.pure-group input[type=text],.pure-group input[type=number],.pure-group input[type=search],.pure-group input[type=tel],.pure-group input[type=color],.pure-group input[type=password],.pure-group input[type=email],.pure-group input[type=url],.pure-group input[type=date],.pure-group input[type=month],.pure-group input[type=time],.pure-group input[type=datetime],.pure-group input[type=datetime-local],.pure-group input[type=week]{margin-bottom:0}.pure-form-aligned .pure-control-group label{margin-bottom:.3em;text-align:left;display:block;width:100%}.pure-form-aligned .pure-controls{margin:1.5em 0 0}.pure-form .pure-help-inline,.pure-form-message,.pure-form-message-inline{display:block;font-size:.75em;padding:.2em 0 .8em}}
body{
margin: 20px;
}
</style>
</head>
<body>
<h1>Digitransit Sign Configuration</h1>
<p>Configure your stop sign with the following configurations. More information in the <a href="https://github.com/stetro/digitransit-busstop-sign">Github Repo</a> README.</p>
<p>Find your station ID after search in the address bar of your local reittiopas <a href="http://waltti.fi/reittiopas/">http://waltti.fi/reittiopas/</a> or <a href="https://reittiopas.hsl.fi">https://reittiopas.hsl.fi</a></p>
<p>For bike station support: find your bike station in <a href="https://kaupunkipyorat.hsl.fi/en/stations">https://kaupunkipyorat.hsl.fi/en/stations<a/> and choose HSL as server.</p>
<p>Set the turnoff time to 0 to run it endlessly.</p>
<form class="pure-form pure-form-aligned" method="POST" action="update">
<fieldset>
<div class="pure-control-group">
<label for="ssid">Wifi SSID:</label>
<input id="ssid" type="text" placeholder="SSID" name="ssid">
</div>

<div class="pure-control-group">
<label for="password">Wifi Password:</label>
<input id="password" type="password" placeholder="Password" name="password">
</div>

<div class="pure-control-group">
<label for="server">Digitransit Server:</label>
<select name="server" id="server">
<option value="hsl">HSL Server (Helsinki)</option>
<option value="waltti">Waltti Server (Rest of Finland)</option>
</select>
</div>

<div class="pure-control-group">
<label for="station">Digitransit Station ID:</label>
<input id="station" type="text" placeholder="Digitransit Station ID" name="station">
</div>

<div class="pure-control-group">
<label for="station_type">Digitransit Station Type:</label>
<select name="station_type" id="station_type">
<option value="bus">Metro, Tram, Bus Stop</option>
<option value="bike">Bike Station</option>
</select>
</div>


<div class="pure-control-group">
<label for="turnoff">Turnoff interval<br/>in minutes</label>
<input id="turnoff" type="number" placeholder="minutes" name="turnoff" value="0">
</div>

<div class="pure-controls">
<button type="submit" class="pure-button pure-button-primary">Update Configuration</button>
</div>
</fieldset>
</form>

</body>
</html>)=====";
#endif

#endif  // CONFIGURATION_SITE_H
