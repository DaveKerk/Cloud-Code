"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
var express = require('express');
var process = require("process");
var app = new express();
app.use('/', express.static(process.cwd()));
app.listen(3000);
console.log('listening to port 3000');
//# sourceMappingURL=index.js.map