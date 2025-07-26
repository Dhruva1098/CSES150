
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <queue>

#define ll long long
using namespace std;
long long t,q,i=1;
long long a[200005];
long long sum = 0, rscore = 0, score = 0;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);  
    cin >> t;
    while(t--){
        cin >> q;
        deque<long long> dq,rdq;
        for(; i <= q; i++){
            int s; cin >> s;
            if(s==1){long long k = dq.back(); dq.pop_back(); dq.push_front(k); rdq.pop_front();rdq.push_back(k); score = score - k*dq.size() + sum; rscore = rscore + k*dq.size() - sum;}
            else if(s==3){long long k; cin >> k; dq.push_back(k);rdq.push_front(k); sum += k; score += k*dq.size();rscore+=sum;}
            else if(s==2){swap(dq,rdq);swap(score,rscore);}
        cout << score << "\n"; 
        }
        i = 1;
    }
}