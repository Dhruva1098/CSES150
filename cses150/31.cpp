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

int n, t, a[mxN];

int main(){
    cin >> n >> t;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    ll lb = 1, rb = 1e18;
    while(lb<rb){
        ll mb = (lb + rb) / 2, s = 0;
        for(int i = 0; i < n; i++){
            s+=min(mb/a[i], (ll)1e9);
        }
        if(s>=t) rb = mb;
        else lb = mb + 1;
    }
    cout << lb;
}
