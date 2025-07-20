#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <numeric>
#include <set>
#include <map>
 
using namespace std;
const int mxN = 5e3, mxX = 1e5, M = 1e9 + 7;
#define ll long long
#define ar array

int n, x[mxN];
ar<ll, 2> dp[mxN][mxN]; 

int main(){
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> x[i];
        for(int i = 0; i < n; i++) {
    dp[i][i] = {x[i], 0};
}
    for(int i = n-1; ~i; i--){
        for(int j = i + 1; j < n; j++){
            ar<ll,2> tr;
            if(i==j) tr = {x[i],0};
            else{
                if(dp[i+1][j][1]+x[i]>dp[i][j-1][1]+x[j]){
                    tr = {dp[i+1][j][1]+x[i], dp[i+1][j][0]};
                } else {
                    tr = {dp[i][j-1][1] + x[j], dp[i][j-1][0]};
                }
            }
            dp[i][j] = tr;
        }
    } 
    cout << dp[0][n-1][0] << "\n";
}

