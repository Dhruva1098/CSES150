#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <numeric>
#include <set>
#include <map>
 
using namespace std;
const int mxN = 500, mxX = 1e5, M = 1e9 + 7;
#define ll long long
#define ar array

int n;
ll dp[mxN*(mxN+1)/2 + 1];

int main(){
    cin >> n;
    ll s = n * (n + 1) / 2;
    if(s&1){
        cout << "0\n";
        return 0;
    }
    dp[0] = 1;
    s/=2;
    for(int i = 1; i <= n; i++){
        for(int j = i*(n+1)/2; j >= i; j--){
            dp[j] = (dp[j] + dp[j-i]) % M;
        }
    }
    cout << dp[s] * ((M + 1) / 2) % M;
}