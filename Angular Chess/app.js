var angular;
var app = angular.module('app', []);
app.controller('appctrl', ['$scope', function ($scope) {
        $scope.asdf = 99;
        function messenger() {
            console.log('here');
            $scope.asdf++;
        }
        messenger();
        $scope.oneError = messenger;
    }]);
//# sourceMappingURL=app.js.map