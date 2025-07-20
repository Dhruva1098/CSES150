
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <numeric>
#include <set>
#include <map>
#include <queue>
#include <cstring>

using namespace std;
#define ll long long
#define ar array
const int mxN = 1e5;
int n,k;

int main(){
    cin >> n >> k;
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        pq.push(x);
        if(pq.size() > k) {
            pq.pop();
        }
    }
    cout << pq.top() << "\n";

    
}
