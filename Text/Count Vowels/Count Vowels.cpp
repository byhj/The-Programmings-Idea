
bool isVowel(char ch) {
    if (isalpha(ch)) {
       if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
          return true;
    }
    return false;
}

int countVowels(const string &str)
{
   int cnt = 0;
   for (auto ch : str) {
      if (isVowel(ch)) ++cnt;
   }
   return cnt;
}
