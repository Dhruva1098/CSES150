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

int n, x ,p[mxN];
map<int, int> mp;

int main() {
    set<int> s;
    cin >> x >> n;
    s.insert(0);
    s.insert(x);
    mp[x] = 1;
    for(int i = 0; i < n; i++) {
        cin >> p[i];
        auto it = s.lower_bound(p[i]);
        int r = *it;
        it--;
        int l = *it;
        --mp[r - l];
        if(!mp[r - l]) {
            mp.erase(r - l);
        }
        s.insert(p[i]);
        mp[p[i] - l]++;
        mp[r - p[i]]++;
        cout << ((--mp.end())->first) << " ";    
    }
}