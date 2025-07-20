#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <numeric>
#include <set>
#include <map>
 
const int mxN = 100, mxX = 1e6, M = 1e9 + 7;
using namespace std;
#define ll long long
#define ar array

int n, dp[mxX + 1];

int main() {
    cin >> n;
    for(int i = 1; i <= n; i++){
        dp[i] = 1e9;
        int i2 = i;
        while(i2){
            dp[i] = min(dp[i], dp[i-i2%10]+1);
            i2/= 10;
        }
    }
    cout << dp[n];
}
