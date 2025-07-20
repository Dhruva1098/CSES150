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


int main(){
    cin >> n;
    set<ar<int, 2>> s;
    for(int i = 0; i < n; i++){
        int a,b;
        cin >> a >> b;
        s.insert({2*a, 1});
        s.insert({2*b+1, -1});
    }
    int ans = 0, c = 0;
    for(ar<int, 2> p : s){
        c += p[1];
        ans = max(ans, c);
    }
    cout << ans;
}
