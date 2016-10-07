
string reverseString(string s)
{
    reverse(s.begin(), s.end());
    return s;
}

string reverseString(string s) {
        int beg =0, end = s.size()-1;
        while (beg < end) {
            swap(s[beg++], s[end--]);
        }
        return s;
}
