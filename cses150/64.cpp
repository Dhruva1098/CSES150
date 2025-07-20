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
int n, m, c[mxN];
vector<int> adj[mxN];
vector<int> ans;    
bool vis[mxN];

void dfs(int u, int cu = 0) {
    if(~c[u]){
        if(c[u] ^ cu){
            cout << "IMPOSSIBLE\n";
            exit(0);
        }
        return;
    }
    c[u] = cu;
    for(auto v : adj[u]){
            dfs(v, cu^1);
    }
}


int main(){
    cin >> n >> m;
    for(int i = 0, a, b; i < m; i++){
        cin >> a >> b; a--; b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    memset(c, -1, 4 * n);
    for(int i = 0; i < n; i++){
        if(c[i]<0) {
            dfs(i);
        }
    }
    for(int i = 0; i < n; i++){
        cout << c[i]+1<< " ";
    }
}

