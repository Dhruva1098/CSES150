#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <queue>

#define ll long long
using namespace std;

int n;

int main(){
    vector<int> k;
    cin >> n;
    deque<int> out;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x == 0){
            int y, z;
            cin >> y >> z;
            if(y==1) out.push_back(z);
            else out.push_front(z);
        } else if(x == 1){
            int y;
            cin >> y;
            k.push_back(out[y]);
        } else if(x == 2){
            int y;
            cin >> y;
            if(y==0) out.pop_front();
            else out.pop_back();
        }
    }
    for(auto &i : k){
        cout << i << "\n";
    }
}