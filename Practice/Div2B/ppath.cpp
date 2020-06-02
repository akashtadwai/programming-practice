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
#define mp make_pair
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);

vector<bool> prime(10001, true);
void sieve() {
  for (int i = 2; i <= 100; i++) {
    for (int j = i * i; j <= 10000; j += i)
      prime[j] = false;
  }

  for(auto i:prime) cout<<i<<" ";
}

void arr(int a[], int num) {
  int w = 3;
  while (num) {
    a[w--] = num % 10;
    num /= 10;
  }
}

int conv_num(int a[]) {
  int temp = 0, k = 0;
  while (k < 4) {
    temp = temp * 10 + a[k];
    k++;
  }
  return temp;
}

void init() {
  int T;
  cin >> T;
  while (T--) {
      int a[4];
    vector<int> dis(10001, -1);
    int u, v;
    cin >> u >> v;
    queue<int> q;
    q.push(u);
    dis[u] = 0;
    while (!q.empty()) {
      int num = q.front();
      q.pop();
      for (int i = 3; i >=0; i--) {
        arr(a, num);
        for (int j = 0; j <= 9; j++) {
          a[i] = j;
          int temp = conv_num(a);
          if (temp >= 1000 and prime[temp]==true and dis[temp] == -1) {
            dis[temp] = dis[num] + 1;
            q.push(temp);
          }
        }
      }
    }
    dis[v] == -1 ? cout << "Impossible" << endl : cout << dis[v] << endl;
  }
}
int32_t main() {
  IOS;
  init();
  return 0;
}
