/**
 * Created by david on 1/31/2017.
 */
// import angular = require('bower_components/angular');
let angular;
let app = angular.module('app', []);


app.controller('appctrl', ['$scope', ($scope) => {
	$scope.asdf = 99;
	function messenger() {
		console.log('here');
		$scope.asdf++;
	}

	messenger();

	$scope.oneError = messenger;
}]);


//angular js controller//