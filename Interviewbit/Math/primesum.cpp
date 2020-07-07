vector<int> Solution::primesum(int A) {
  vector<bool> sieve(A + 1, true);
  for (int i = 2; i * i <= A; i++) {
    if (sieve[i]) {
      for (int j = i * i; j <= A; j += i)
        sieve[j] = false;
    }
  }
  vector<int> primes;
  for (int i = 2; i <= A; i++) {
    if (sieve[i])
      primes.push_back(i);
  }
  vector<int> ans;
  for (int i = 0; primes[i] <= A / 2; i++) { // Check only upto half of number
    int diff = A - primes[i];
    // Search if the difference is also a prime number
    if (binary_search(primes.begin(), primes.end(), diff) == true) {
      ans.push_back(primes[i]), ans.push_back(diff);
      break; // if found break
    }
  }
  return ans;
}
