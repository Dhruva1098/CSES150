#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <numeric>
#include <set>
#include <map>
#include <queue>

using namespace std;
#define ll long long
#define ar array

const int mxN = 1e5, di[4] = {-1,0,1,0}, dj[4] = {0,1,0,-1};
const char dc[4] = {'U', 'R', 'D', 'L'};

int n, m;
vector<int> adj[mxN];
vector<int> ans;
vector<bool> vis(mxN, false);

void dfs(int u) {
    vis[u] = true;
    for(int v : adj[u]) {
        if(!vis[v]) {
            dfs(v);
        }
    }
}

int main(){
    cin >> n >> m;
    for(int i = 0, a, b; i < m; i++){
        cin >> a >> b; a--; b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(int i = 0; i < n; i++){
        if(!vis[i]){
            ans.push_back(i);
            dfs(i);
        }
    }
    cout << ans.size()-1 << "\n";
    for(int i = 1; i < ans.size(); i++){
        cout << ans[0]+1 << " " << ans[i]+1 << "\n";
    }
}