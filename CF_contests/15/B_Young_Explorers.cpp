#include <bits/stdc++.h>
using namespace std;

#define ipr pair<int, int>
#define pb push_back
#define ff first
#define ss second
#define fr(i, j, k) for (int i = j; i < k; i++)
#define rf(i, j, k) for (int i = j; i >= k; i--)
#define ll unsigned long long
#define int long long
#define ld long double
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define mp make_pair
#define cnt_ones(x) __builtin_popcountll(x)

#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);

const int Maxn = 2 * (int)1e5 + 1;
const ld pi = acos(-1);
const int mod = (int)1e9 + 7;
const int inf = (int)1e18;

template <class T> ostream &operator<<(ostream &out, vector<T> &A) {
  fr(i, 0, (int)A.size()) out << A[i] << " ";
  return out;
}

int32_t main() {
  /*int Q;
  cin >> Q;
  while (Q--) {
    int n;
    cin >> n;
    vector<int> A(n);
    fr(i, 0, n) cin >> A[i];
    sort(all(A));
    int i = 0, j = A[0], cnt = 0;
    while (i < n) {
      if (j - 1 < n and A[j - 1] <= j - i) {
        cnt++;
        i = j;
        j = i + A[i];
      } else {
        j++;
        if (j > n + 5)
          break;
      }
    }
    cout << cnt << endl;*/
    cout<<'j'-'a'<<endl;
  return 0;
}