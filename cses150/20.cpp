#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <numeric>
using namespace std;
#define ll long long

const int mxN = 2e5;
int p[mxN];

int main() {
    int n, x;
    cin >> n >> x;
    for(int i = 0; i < n; i++) {
        cin >> p[i];
    }
    sort(p, p + n);
    int ans = 0;
    for(int i = 0, j = n - 1; i <= j;){
        while(i<j&&p[i]+p[j]>x) --j;
        if(i>=j) break;
        ans++;
        i++; j--;
    }
    cout << n-ans;
}
