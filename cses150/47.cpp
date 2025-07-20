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

int n, c[mxN], x;
ll dp[mxX + 1];

int main(){
    cin >> n >> x;
    for(int i = 0; i < n; i++){
        cin >> c[i];
    }
    dp[0] = 1;
    for(int i = 1; i <=x; i++){
        for(int j = 0; j < n; j++){
            if(c[j] <= i){
                dp[i] = (dp[i] + dp[i - c[j]]) % M;;
            }
        }
    } 
    
    cout << (dp[x]);
}


