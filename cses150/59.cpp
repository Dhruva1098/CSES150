#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <numeric>
#include <set>
#include <map>
 
const int mxN = 2e5;
using namespace std;
#define ll long long
#define ar array

int n;
ar<int, 3> a[mxN];

int main(){
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i][1] >> a[i][0] >> a[i][2];
    }
    sort(a,a+n);
    set<ar<ll,2>> dp;
    ll ldp = 0;
    dp.insert({0, 0});
    for(int i =0; i < n; i++){
        auto it = dp.lower_bound({a[i][1]});
        it--;
        ldp = max(ldp, (*it)[1] + a[i][2]);
        dp.insert({a[i][0], ldp});
    }
    cout << ldp;
}


