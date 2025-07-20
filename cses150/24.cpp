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

int n, x;

int main(){
    map<int, int> mp;
    cin >> n >> x;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if(mp.find(x-a)!=mp.end()){
            cout << mp[x-a] + 1 << " " << i + 1;
            return 0;
        }
        mp[a] = i;
    }
    cout << "IMPOSSIBLE";
}
