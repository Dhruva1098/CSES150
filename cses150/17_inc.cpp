#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <numeric>
using namespace std;
#define ll long long

string s;
bool vis[7][7];
int ans;


void dfs(int i, int j, int a = 0) {
    if(i==6 && j==6){
        if(a==48) ans++;
        return;
    }
    vis[i][j] = 1;
    if(s[a] == '?' || s[a] == 'L'){
        if(j&&!vis[i][j-1]) {
            dfs(i, j-1, a+1);
        }
    }
    if(s[a] == '?' || s[a] == 'R'){
        if(j<6&&!vis[i][j+1]) {
            dfs(i, j+1, a+1);
        }
    }
    if(s[a] == '?' || s[a] == 'U'){
        if(j&&!vis[i-1][j]) {
            dfs(i-1, j, a+1);
        }
    }
    if(s[a] == '?' || s[a] == 'D'){
        if(j&&!vis[i+1][j]) {
            dfs(i+1, j, a+1);
        }
    }
    vis[i][j] = 0;
}
 
int main(){
    cin >> s;
    dfs(0,0);
    cout << ans;

}
