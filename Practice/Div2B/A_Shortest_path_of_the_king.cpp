#include <bits/stdc++.h>
using namespace std;

int main() {
  char a, b, c, d;
  cin >> a >> b >> c >> d;
  int arr[10] = {0};
  cout << max(abs(a - c), abs(b - d)) << endl;
  while (a != c || b != d) {
    if (a < c)
      cout << 'R', a++;
    if (a > c)
      cout << 'L', c++;
    if (b > d)
      cout << 'D', d++;
    if (b < d)
      cout << 'U', b++;
    cout << endl;
  }
  return 0;
}
