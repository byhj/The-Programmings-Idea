
//recursion
long long fib(int n) {
  if (n <= 1) return 0;
  if (n == 2) return 1;
  return fib(n-1) + fib(n-2);
}

//loop, fib is vector<int> fib(n);
long long fib(vector<long long> &fib, int n) {
   for (int i = 0; i < n; ++i) {
     if (n == 1) fib[i] = 0;
     if (n == 2) fib[i] = 2;
     fib[i] = fib[i-1] + fib[i-2];
   }
   return fib[n-1];
}
