#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> directions{{2, 1},   {1, 2},   {-1, 2}, {-2, 1},
                                  {-2, -1}, {-1, -2}, {1, -2}, {2, -1}};
int n;
bool issafe(int x, int y) { return (x >= 0 and y >= 0 and x < n and y < n); }
bool kTU(int x, int y, int move, vector<vector<int>> &sol) {
  if (move == n * n)
    return true;
  for (auto dir : directions) {
    int x_next = x + dir.first;
    int y_next = y + dir.second;
    if (issafe(x_next, y_next) and sol[x_next][y_next] == -1) { //issafe and not visited
      sol[x_next][y_next] = move;//visit this cell and recur
      if (kTU(x_next, y_next, move + 1, sol))
        return true;    
      sol[x_next][y_next] = -1;//if no plausible solution backtrack
    }
  }
  return false;
}
void kT() {
  vector<vector<int>> sol(n, vector<int>(n, -1));
  sol[0][0] = 0;
  if (kTU(0, 0, 1, sol) == 0) {
    cout << "solution doesn't exist" << endl;
    return;
  } else {
    for (auto i : sol) {
      for (auto j : i)
        cout << j << " ";
      cout << endl;
    }
  }
}
int main() {
  cin >> n;
  kT();
}