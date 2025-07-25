#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <numeric>
#include <set>
#include <map>
 
const int mxN = 1e6, M = 1e9 + 7;
using namespace std;
#define ll long long
#define ar array

int n;
ll dp[mxN + 1];

int main(){
    cin >> n;
    dp[0] = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= min(6, i); j++){
            dp[i] = (dp[i] + dp[i - j]) % M;
        }
    }
    cout << dp[n];

}
 