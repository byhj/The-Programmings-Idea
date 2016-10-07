class Solution {
public:
    bool isPalindrome(string s) {

        string str;
        for (const auto &ch : s)   {
          if (isalpha(ch)) str += tolower(ch);
          if (isdigit(ch)) str += ch;
        }
        string temp = str;
        reverse(temp.begin(), temp.end());

        return str == temp;
    }
};


class Solution {
public:
    bool isPalindrome(string s) {
        if (s.size() <= 1) return true;

        int beg = 0;
        int end = s.size()-1;
        while (beg < end) {
            if (!isalnum(s[beg])) ++beg;
            else if (!isalnum(s[end])) --end;
            else if (tolower(s[beg++]) != tolower(s[end--]) ) return false;
        }
        return true;
    }
};
