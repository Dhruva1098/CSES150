#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <numeric>
#include <set>

const int mxN = 2e5;
using namespace std;
#define ll long long
#define ar array

int n;
ar<int, 2> a[mxN];

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i][1] >> a[i][0];
    }
    sort(a, a + n);
    int ans = 0, l = 0;
    for(int i = 0; i < n; i++){
        if(a[i][1] >= l){
            ans++;
            l = a[i][0];
        }
    } cout << ans;
}