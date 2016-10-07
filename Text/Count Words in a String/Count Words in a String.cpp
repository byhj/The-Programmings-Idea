

int countWords(const string &str) {
    istringstream iss(str);
    while (iss >> str) {
      ++cnt;
    }
    return cnt;
}
