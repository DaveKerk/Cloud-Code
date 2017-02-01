/**
 * Created by david on 1/31/2017.
 */
let express = require('express');
import path = require('path');
import process = require('process');

let app = new express();

app.use('/', express.static(process.cwd()));

app.listen(3000);
console.log('listening to port 3000');