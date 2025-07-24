
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <queue>

#define ll long long
using namespace std;
int t,q,i=1;
long long ar[200005];

void calc(deque<int>& dq){
    long long sum = 0;
    for(int k = 1; k <= dq.size(); k++){
        sum += dq[k-1]*k;
    }
    ar[i] = sum;
}
int main(){
    cin >> t;
    while(t--){
        cin >> q;
        deque<int> dq;
        for(; i <= q; i++){
            int s; cin >> s;
            if(s==1){int k = dq.back(); dq.pop_back(); dq.push_front(k); calc(dq);}
            else if(s==3){int k; cin >> k; dq.push_back(k); calc(dq);}
            else if(s==2){reverse(dq.begin(), dq.end()); calc(dq);}
        } 
        for(i=1; i <= q; i++){
            cout << ar[i] << "\n";
        }
        i = 1;
    }
}