#include <bits/stdc++.h>
using namespace std;
typedef std::pair<int, int> ipair;
#define int long long
#define pb push_back
#define ff first
#define INF INT_MAX
#define ss second
#define rep(i, a) for (int i = 0; i < a; i++)
#define fr(i, j, a) for (int i = j; i < a; i++)
#define cnt_ones(x) __builtin_popcount(x)
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define vvi vector<vector<int>>
#define vp vector<ipair>
#define mp make_pair
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
void init() {
  int Q;
  cin >> Q;
  while (Q--) {
    vector<vector<int>> A(9, vector<int>(9));
    fr(i, 0, 9) fr(j, 0, 9) {
      char x;
      cin >> x;
      int temp = (x - '0');
      A[i][j] = temp;
    }
    // fr(i, 0, 9)
    // {
    // 	fr(j, 0, 9) cout << A[i][j];
    // 	cout << endl;
    // }cout << endl;
    int i = 0, j = 0;
    while (i < 9) {
      A[i][j] = A[i][j] + 1;
      if (A[i][j] == 10)
        A[i][j] = 1;
      i++;
      j += 4;
      j %= 9;
    }
    fr(i, 0, 9) {
      fr(j, 0, 9) cout << A[i][j];
      cout << endl;
    }
  }
}
int32_t main() {
  IOS;
  init();
  return 0;
}
