https://leetcode.com/problems/satisfiability-of-equality-equations/
class Solution {
public:
    map<int,int>par,size;
void make_set(int v) {
  par[v] = v;
  size[v] = 1;
}
int find_set(int u) {
  if (par[u] == u)
    return u;
  return par[u] = find_set(par[u]);
}
void union_sets(int a, int b) {
   a = find_set(a);
   b = find_set(b);
  if (a != b) {
    if (size[a] < size[b])
      swap(a, b);
    par[b] = a;
    size[a] += size[b];
  }
}
    bool equationsPossible(vector<string>& equations) {
        int n=equations.size();
        for(int i=0;i<26;i++){
            make_set(i);
        }
        for(int i=0;i<n;i++){
            if(equations[i][1]=='='){
                union_sets(equations[i][0]-'a',equations[i][3]-'a');
            }
        }
           for(int i=0;i<n;i++){
            if(equations[i][1]=='='){
                par[equations[i][3]-'a']=par[equations[i][0]-'a'];
            }
        }
        for(int i=0;i<n;i++){
            if(equations[i][1]=='!'){
                 int a = par[equations[i][0]-'a'];
                int b = par[equations[i][3]-'a'];
                 cout<<a<<" "<<b<<endl;
                cout<<equations[i][0]<<" "<<equations[i][3];
                if(a==b)    return false;
            }
        }
        // for(auto x:par) cout<<x.second<<" ";

        return true;
    }
};
