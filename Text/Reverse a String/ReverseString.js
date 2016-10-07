/**
 * @param {string} s
 * @return {string}
 */
var reverseString = function(s) {
    var len = s.length;
    var ans = "";
    for (var i=len-1; i>=0; --i) {
        ans += s[i];
    }
    return ans;
};