#include <bits/stdc++.h>
using namespace std;
typedef std::pair<int, int> ipair;
#define int long long
#define pb push_back
#define ff first
#define INF INT_MAX
#define ss second
#define fr(i, j, k) for (int i = j; i < k; i++)
#define cnt_ones(x) __builtin_popcount(x)
#define all(x) x.begin(), x.end()
#define mp make_pair
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
int isprefix(string s1, string s2) {
  int n1=s1.size();
  if(s1[0]!=s2[0])  return -1;
  for(int i=0;i<n1;i++)
      if(s1[i]!=s2[i])  return i;
}
bool isSuffix(string s1, string s2) {
  int n1 = s1.length(), n2 = s2.length();
  if (n1 > n2)
    return false;
  for (int i = 0; i < n1; i++)
    if (s1[n1 - i - 1] != s2[n2 - i - 1])
      return false;
  return true;
}
string lcs(string &X, string &Y) {
  int m = X.length();
  int n = Y.length();

  int L[m + 1][n + 1];

  /* Following steps build L[m+1][n+1] in bottom
  up fashion. Note that L[i][j] contains
  length of LCS of X[0..i-1] and Y[0..j-1] */
  for (int i = 0; i <= m; i++) {
    for (int j = 0; j <= n; j++) {
      if (i == 0 || j == 0)
        L[i][j] = 0;
      else if (X[i - 1] == Y[j - 1])
        L[i][j] = L[i - 1][j - 1] + 1;
      else
        L[i][j] = max(L[i - 1][j], L[i][j - 1]);
    }
  }

  // Following code is used to print LCS
  int index = L[m][n];

  // Create a string length index+1 and
  // fill it with \0
  string lcs(index + 1, '\0');

  // Start from the right-most-bottom-most
  // corner and one by one store characters
  // in lcs[]
  int i = m, j = n;
  while (i > 0 && j > 0) {
    // If current character in X[] and Y
    // are same, then current character
    // is part of LCS
    if (X[i - 1] == Y[j - 1]) {
      // Put current character in result
      lcs[index - 1] = X[i - 1];
      i--;
      j--;

      // reduce values of i, j and index
      index--;
    }
    // If not same, then find the larger of
    // two and go in the direction of larger
    // value
    else if (L[i - 1][j] > L[i][j - 1])
      i--;
    else
      j--;
  }

  return lcs;
}

// Returns longest palindromic subsequence
// of str
string longestPalSubseq(string &str) {
  // Find reverse of str
  string rev = str;
  reverse(rev.begin(), rev.end());
  string ans=lcs(str,rev);
  int index=isprefix(ans,str);
  string k=ans.substr(index+1);
  if(!isSuffix(k,str)){
      ans=str[0];
      return ans;
  }
 return ans;
}
void init() {
  int T;
  cin>>T;
  while(T--){
      string s;
      cin>>s;
    cout<<longestPalSubseq(s)<<endl;
  }
}
int32_t main() {
  IOS;
  init();
  return 0;
}
