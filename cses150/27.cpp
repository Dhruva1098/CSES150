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
int n, p[mxN];
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> p[i];
    }
    int ans = 0;
    map<int, int> mp;
    for(int i = 0, j = 0; i < n; i++){
        while(j<n&&mp[p[j]]<1){
            mp[p[j]]++;
            j++;
        }
        ans = max(ans, j - i);
        mp[p[i]]--;
    } cout << ans;
}
