public class Solution {
    public String reverseString(String s) {
        return new StringBuilder(s).reverse().toString();
    }
}

public class Solution {
    public String reverseString(String s) {
        char [] charArr = s.toCharArray();
        final int len = charArr.length;
        for (int i = 0; i < len/2; ++i) {
            char ch = charArr[i];
            charArr[i] = charArr[len-i-1];
            charArr[len-i-1] = ch;
        }
        return new String(charArr);
    }
}
