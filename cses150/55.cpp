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

int n, x[101];
int dp[mxX + 1];

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x[i];
    }
    dp[0] = 1;
    for(int j= 0; j<n; j++){
    for(int i = mxX; i; i--){
            if(i - x[j] >= 0){
                dp[i] |= dp[i - x[j]];
            }
        }
    }
    vector<int> v;
    for(int i = 1; i <= 1e5; i++){
        if(dp[i]){
            v.push_back(i);
        }
    }
    cout << v.size() << "\n";
    for(int i : v){
        cout << i << " ";
    }

}