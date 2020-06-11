https://leetcode.com/problems/friend-circles/
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
    int findCircleNum(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
          for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1) {
                   make_set(i);
                   make_set(j);
               }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1)   union_sets(i,j);
            }
        }
        set<int>res;
        for(int i=0;i<m*n;i++)  {
            res.insert(find_set(i));
        }
        for(auto x:res) cout<<x<<" ";
        return (res.size()) ;

    }
};
