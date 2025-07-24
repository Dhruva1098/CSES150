#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <queue>
#define ll long long
using namespace std;

int n;
ll x, a[200005];

int main(){
	cin >> n >> x;
	map<ll, int> mp;
	ll s= 0;
	mp[0]++;
	ll ans = 0;
	for(int i = 0; i < n;i++){
		cin >> a[i];
		s+=a[i];
		ans+=mp[s-x];
		mp[s]++;
	}
	cout << ans;
}
