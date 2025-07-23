#include <vector>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;
int n;
int main(){
  cin >> n;
  map<int, int> cnt;
  for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    cnt[x]++;
  }
  int out = 0;
  for(auto &p : cnt){
    if(p.first < p.second)
      out += p.second - p.first;
    else if(p.first > p.second) out += p.second;
  }
  cout << out << endl;
}
