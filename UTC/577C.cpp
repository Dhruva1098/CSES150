#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <queue>
#include <unordered_map>
#define ll long long
using namespace std;

ll x,n,k;
vector<ll> v;

bool check(int x){
	ll moves = 0;
	for(int i = n/2; i < n;i++){
		if(x-v[i] > 0) moves += x-v[i];
		if(moves > k) return false;
	}
	if(moves <= k) return true;
	else return false;
}
int main(){
	cin >> n >> k;
	for(int i = 0; i < n; i++){
		cin >> x; v.push_back(x);
	}
	sort(v.begin(), v.end());
	ll small = 1, big = 2000000000;
	while(small!=big){
		ll mid = (small+big+1)/2;
		if(check(mid)) small = mid;
		else big = mid -1;
	}
	cout << small;
}