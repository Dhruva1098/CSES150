#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <numeric>
#include <set>
#include <map>
#include <queue>
#include <cstring>

using namespace std;
#define ll long long
#define ar array

const int mxN = 1e5;
int n, m, p[mxN];
vector<int> adj[mxN], ans;    
bool vis[mxN];

void dfs(int u, int pu = -1) {
    p[u] = pu;
    vis[u] = true;
    for(int v : adj[u]) {
        if(v == pu) continue; // Avoid going back to parent
        if(vis[v]){
            int u2 = u;
            while(u^v){
                ans.push_back(u);
                u = p[u];
            }
            ans.push_back(v);
            ans.push_back(u2);
            cout << ans.size() << "\n";
            for(int i : ans) {
                cout << i + 1 << " ";
            } exit(0);}
        else dfs(v, u);
    }
}


int main(){
    cin >> n >> m;
    for(int i = 0, a, b; i < m; i++){
        cin >> a >> b; a--; b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    memset(p, -1, 4 * n);
    for(int i = 0; i < n; i++){
        if(!vis[i]){
            dfs(i);
        }
    }
    cout << "IMPOSSIBLE\n";
}


