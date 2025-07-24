#include <unordered_set>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <queue>

#define ll long long
using namespace std;

int main(){
	ll n;
	cin >> n;
	unordered_set<int> s;
	for(int i = 2; i*i<=n; i++){
		ll x = i * i;
		while(x<=n){
			s.insert(x);
			x*=i;
		}
	}
	cout << n - s.size();
}