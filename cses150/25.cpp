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
int main(){
    cin >> n;
    ll ans = -1e18, msf =-1e18;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        msf = max(a + 0ll,a+msf);
        ans = max(ans, msf);
    }
    cout << ans;
}
