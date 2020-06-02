#include <bits/stdc++.h>
using namespace std;
void RecPermute(string soFar, string rest) {
  if (rest.empty()) {
    cout << soFar << endl;
  } else {
    for (int i = 0; i < rest.length(); i++) {
      string remaining = rest.substr(0, i) + rest.substr(i + 1);
      RecPermute(soFar + rest[i], remaining);
    }
  }
}
void stringpermutation(string str, vector<char> chosen) {
  if (str.empty()) {
    for (auto x : chosen)
      cout << x << " ";
    cout << endl;
  } else {
    for (int i = 0; i < str.size(); i++) {
      auto to_be_chosen = str[i];
      chosen.push_back(to_be_chosen);
      str.erase(str.begin() + i);
      stringpermutation(str, chosen);
      chosen.pop_back();
      str.insert(str.begin() + i, to_be_chosen);
    }
  }
}

void permuteRecursive(vector<string> &num, int begin,
                      vector<vector<string>> &result) {
  if (begin >= num.size()) {
    // one permutation instance
    result.push_back(num);
    return;
  }

  for (int i = begin; i < num.size(); i++) {
    swap(num[begin], num[i]);
    permuteRecursive(num, begin + 1, result);
    // reset
    swap(num[begin], num[i]);
  }
}
void PermutationsHelper(vector<string> str, vector<string> chosen) {
  if (str.empty()) {
    for (auto x : chosen)
      cout << x << " ";
    cout << endl;
  } else {
    for (int i = 0; i < str.size(); i++) {
      string to_be_chosen = str[i];
      chosen.push_back(to_be_chosen); // choose
      str.erase(str.begin() + i);
      PermutationsHelper(str, chosen); // explore
      chosen.pop_back();               // unchoose
      str.insert(str.begin() + i, to_be_chosen);
    }
  }
}
void StringPermutation(string s) {
  vector<char> chosen;
  stringpermutation(s, chosen);
}
void Permutations(vector<string> str) {
  vector<string> chosen;
  PermutationsHelper(str, chosen);
}
int main() {
  int n;
  cin >> n;
  vector<string> str(n);
  for (auto &i : str)
    cin >> i;
  Permutations(str);
  /*string s;
  cin >> s;
  RecPermute("",s);*/
}