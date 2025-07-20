#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <numeric>
#include <set>
#include <map>
 
using namespace std;
const int mxN = 500;
#define ll long long
#define ar array

int a, b;
int dp[mxN + 1][mxN + 1];

int main(){
    cin >> a>> b;
    for(int i = 1; i <=a; i++){
        for(int j = 0; j <=b; j++){
            if(i^j) dp[i][j] = 1e9;
            for(int k = 1; k<i; k++){
                dp[i][j] = min(dp[i][j], dp[k][j] + dp[i-k][j] + 1);
            }
            for(int k = 1; k<j; k++){
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[i][j-k] + 1);
            }
        }
    }
    cout << dp[a][b];   
}

