#include <bits/stdc++.h>
using namespace std;
set<string> lexicon;
vector<string> words;
bool isshrinkable(string s) {
  if (!(lexicon.count(s)))
    return false;
  for (int i = 0; i < s.size(); i++) {
    string word = s.substr(0, i) + s.substr(i + 1);
    if (isshrinkable(word) or word.size() == 1) {
      words.insert(words.begin(), word);
      return true;
    }
  }
  return false;
}
int main() {
  int n;
  cin >> n;
  string str;
  for (int i = 0; i < n; i++) {
    cin >> str;
    lexicon.insert(str);
  }
  string s;
  cin >> s;
  cout << isshrinkable(s) << endl;
  for(auto x:words) cout<<x<<endl;
}