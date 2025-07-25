#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <numeric>
#include <set>
#include <map>
 
const int mxN = 1e3, mxX = 1e5, M = 1e9 + 7;
using namespace std;
#define ll long long
#define ar array

int n, x, h[mxN], s[mxN], dp[mxX + 1];

int main(){
    cin >> n >> x;
    for(int i = 0; i < n; i++){
        cin >> h[i];
    }
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = x; j >=h[i]; j--){
            dp[j] = max(dp[j], dp[j - h[i]] + s[i]);
        }
    }
        cout << dp[x];
}