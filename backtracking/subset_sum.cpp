/* Printing all subsets with sum 'K' */

#include <bits/stdc++.h>
using namespace std;
void subsetsum(vector<int> a, int sum, vector<int> chosen) {
  if (sum == 0) {
    for (auto x : chosen)
      cout << x << " ";
    cout << endl;
    return;
  }
  if (a.empty())
    return;
  int last = a.back();
  a.pop_back();
  subsetsum(a, sum, chosen);
  chosen.push_back(last);
  subsetsum(a, sum - last, chosen);
}
int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (auto &i : a)
    cin >> i;
  vector<int> chosen;
  subsetsum(a, k, chosen);
}