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

int n, a[mxN], n1[mxN];

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        n1[i] = i - 1;
        while(~n1[i]&&a[n1[i]]>=a[i]) n1[i] = n1[n1[i]];
        cout << n1[i] + 1 << " ";
    }
}

