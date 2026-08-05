/**
 * @param {Object|Array} obj
 * @return {boolean}
 */
var isEmpty = function(obj) {
    for ( let n in obj ) {
        return false;
    }
    return true;
};