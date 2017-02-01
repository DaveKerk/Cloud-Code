import gulp = require('gulp');
import path = require('path');


gulp.task('dist', function (done) {
	let webpack = require('webpack');
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
	}, () => {
		done();
		// process.exit(0); // shouldn't need to do this, but I need to...
	});
});

gulp.task('css', function () {
	return gulp.src('style.css').pipe(gulp.dest('dist'));
});

gulp.task('default', ['dist', 'css'], function (done) {
	done();
});