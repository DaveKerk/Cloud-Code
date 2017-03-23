"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
var gulp = require("gulp");
var path = require("path");
gulp.task('dist', function (done) {
    var webpack = require('webpack');
    webpack({
        entry: path.resolve(__dirname, './app.js'),
        output: {
            path: path.join(__dirname, 'dist'),
            filename: 'bundle.js'
        },
        externals: {
            'angular': 'angular'
        },
        resolve: {
            modulesDirectories: ['node_modules', 'bower_components']
        }
    }, function () {
        done();
    });
});
gulp.task('css', function () {
    return gulp.src('style.css').pipe(gulp.dest('dist'));
});
gulp.task('default', ['dist', 'css'], function (done) {
    done();
});
//# sourceMappingURL=gulpfile.js.map