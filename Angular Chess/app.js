var angular;
var app = angular.module('app', []);
app.controller('appctrl', ['$scope', function ($scope) {
	$scope.asdf = 99;
	function messenger() {
		console.log('here');
		$scope.asdf++;
	}

	app.controller('appctrl', ['$scope', function ($scope) {
		$scope.scope = 0;
		$scope.oneError = messenger;
	}]);
}]);

app.controller('myController', ['$scope', function ($scope) {
	$scope.myValue = 0;



}])
//# sourceMappingURL=app.js.map