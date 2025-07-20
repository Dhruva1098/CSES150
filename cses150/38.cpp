#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <numeric>
#include <set>
#include <map>

const int mxn = 2e5;
using namespace std;
#define ll long long
#define ar array

ll x, a[mxn];
int n;
int main(){
    cin >> n >> x;
    ll s =0;
    map<ll, int> mp;
    mp[0]++;
    ll ans = s;
    
    for(int i = 0; i < n ; i++){
        cin >> a[i];
        s += a[i];
        ans+= mp[s - x];
        mp[s]++;
    }
    cout << ans;
}