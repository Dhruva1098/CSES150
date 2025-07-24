#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <queue>

#define ll long long
using namespace std;

int n;
deque<int> a,b;
int main(){
    cin >> n;
    int k2; cin >> k2;
    for(int i = 0; i < k2; i++){
        int a1; cin >> a1;
        a.push_back(a1);
    }
    int k1; cin >> k1;
    for(int i = 0; i < k1; i++){
        int b1; cin >> b1;
        b.push_back(b1);
    }
    int cnt = 0;
    while(!a.empty() && !b.empty()){
        cnt++;
        if(cnt > 1000) {
            cnt = INT_MAX;            break;
        }
        int x = a.front(), y = b.front();
        a.pop_front(); b.pop_front();
        if(x > y){ a.push_back(y); a.push_back(x); }
        else { b.push_back(x); b.push_back(y); }
    }
    if(cnt == INT_MAX) cout << -1;
    else if(a.empty()) cout << cnt << " 2";
    else if(b.empty()) cout << cnt << " 1";
}
