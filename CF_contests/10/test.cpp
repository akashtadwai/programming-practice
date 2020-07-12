#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>s;
    for(int i=2;i<=5;i++)   s.insert(i);
    auto it = s.lower_bound(-1);
    cout<<*it<<endl;
}