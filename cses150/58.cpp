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
 
int main() {
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        int p = lower_bound(v.begin(), v.end(), x) - v.begin();
        if(p<v.size()){
            v[p] = x;
        } else {
            v.push_back(x);
        }
    }
    cout << v.size();
}