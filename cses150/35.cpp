#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <numeric>
#include <set>
#include <map>

const int mxN = 5e3;
using namespace std;
#define ll long long
#define ar array


int n;
ll x, a[mxN];

int main(){
    cin >> n >> x;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    unordered_map<int, ar<int, 2>> mp;
    mp.reserve(1<<20);
    for(int i = 0; i <n;i++){
        for(int j = i+1;j<n;j++){
            if(mp.find(x - a[i] - a[j])!=mp.end()){
                ar<int, 2> p = mp[x - a[i] - a[j]];
                cout << p[0] + 1 << " " << p[1] + 1 << " " << i + 1 << " " << j + 1;
                return 0;
            }
        }
        for(int j = 0; j<i; j++)
            mp[a[i] + a[j]] = {i, j};
    }
    cout << "IMPOSSIBLE";
}


