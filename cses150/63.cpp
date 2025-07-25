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
vector<int> adj[mxN];
vector<int> ans;    

int main(){
    cin >> n >> m;
    for(int i = 0, a, b; i < m; i++){
        cin >> a >> b; a--; b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    memset(p, -1,4*n);
    queue<int> q;
    q.push(0);
    p[0] = -2;
    while(q.size()){
        int u = q.front();
        q.pop();
        for(int v : adj[u]) {
            if(p[v] < 0) {
                p[v] = u;
                q.push(v);
            }
        }
    }
    if(p[n-1] < 0) {
        cout << "IMPOSSIBLE\n";
        return 0;
    } else {
        int u = n-1;
        while(u){
            ans.push_back(u);
            u = p[u];
        } ans.push_back(0);
        reverse(ans.begin(), ans.end());
        cout << ans.size() << "\n";
        for(int i : ans) {
            cout << i+1 << " ";
        }
    }
    
}
