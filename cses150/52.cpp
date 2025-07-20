#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <numeric>
#include <set>
#include <map>
 
const int mxN = 100, mxX = 1e5, M = 1e9 + 7;
using namespace std;
#define ll long long
#define ar array

int n, m, a[mxX];
ll dp[mxX][mxN];

int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> a[i]; --a[i];
    }
    for(int i = 0; i < n; i++){
        if(i){
        for(int j = 0; j <m;j++){
            dp[i][j] = dp[i-1][j];
            if(j) dp[i][j] += dp[i-1][j-1];
            if(j < m-1) dp[i][j] += dp[i-1][j+1];
            dp[i][j] %= M;
            }
        } else 
        for(int j = 0; j < m; j++){
            dp[0][j] = 1;
        }
        if(~a[i]) 
            for(int j = 0; j < m; j++){
                if(j^a[i])
                    dp[i][j] = 0;
            }
    }
    ll ans = 0;
    for(int i = 0; i < m; i++){
        ans += dp[n-1][i];
    }
    cout << ans%M;
}