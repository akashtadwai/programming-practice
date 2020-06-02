#include<bits/stdc++.h>
using namespace std;
const int N = 4e3 + 10;
set<int> s;
long long  dp[N];
 
int main()
{	
	int n, a, b, c;
	cin>>n>>a>>b>>c;
	s.insert(a);
	s.insert(b);
	s.insert(c);
	for(auto &x : s) dp[x] = 1;
	for(int i=1;i<=n;i++)
	{
		for(auto &x : s)
		{
			if(i - x >= 0 && dp[i-x])
                          dp[i] = max(dp[i], dp[i - x] + 1),
                          cout << i<<" "<<x<<" "<<i - x << " " << dp[i - x]+1<<endl;
                }
	}
    cout<<dp[n]<<endl;
	return 0;
}      