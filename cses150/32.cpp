
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
ar<int, 2> a[mxN];
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i][0] >> a[i][1];
    }
    sort(a, a + n);
    ll t = 0, ans = 0;
    for(int i = 0; i < n; i++){
        t += a[i][0];
        ans +=a[i][1] - t;
    }
    cout << ans;  
}