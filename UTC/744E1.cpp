
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <queue>

#define ll long long
using namespace std;

int t;
deque<int> a;

int main(){
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    deque<int> b;
    for(int i = 0; i < n; i++){
      int x; cin >> x;
      if(b.empty()) b.push_back(x);
      else if(b.front() > x) b.push_front(x);
      else b.push_back(x);
    }
    while(b.size()){cout << b.front() << " "; b.pop_front();}
    cout << "\n";
  }
}
