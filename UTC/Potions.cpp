#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <queue>
#define ll long long
using namespace std;

int n;

int main(){
    cin >> n;
    ll s = 0;
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    for(int i = 0; i < n; i++){
        long long a;
        cin >> a;
        s += a;
        pq.push(a);
        while(s < 0){
            s -= pq.top();
            pq.pop();
        }
    }
    cout << (int)pq.size() << endl;

}
