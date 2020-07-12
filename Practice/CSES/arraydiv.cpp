#include <bits/stdc++.h>
using namespace std;
typedef std::pair<int, int> ipair;
#define int long long
#define pb push_back
#define ff first
#define INF INT_MAX
#define ss second
#define fr(i, j, a) for (int i = j; i < a; i++)
#define cnt_ones(x) __builtin_popcount(x)
#define all(x) x.begin(), x.end()
#define sz size()
#define vi vector<int>
#define vvi vector<vector<int>>
#define vp vector<ipair>
#define mp make_pair
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);

bool isvalid(vector<int> &a, int mid, int k) {
  int sum = 0, cnt = 0;
  for (int i = 0; i < a.size(); i++) {
    if (a[i] > mid)
      return false;
    sum += a[i];
    if (sum > mid) {
      cnt++;
      sum = a[i];
    }
  }
  if (++cnt <= k)
    return true;
  return false;
}
void init() {
  int n, k;
  cin >> n >> k;
  vi a(n);
  for (int &i : a)
    cin >> i;
  int lb = 1, rb = accumulate(all(a), 0LL);
  while (lb < rb) {
    int mid = lb + (rb - lb) / 2;
    if (isvalid(a, mid, k))
      rb = mid;
    else
      lb = mid + 1;
  }
  cout << lb << endl;
}
int32_t main() {
  IOS;
  init();
  return 0;
}
