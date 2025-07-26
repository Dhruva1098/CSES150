#include <array>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <queue>
#include <unordered_map>

#define ar array
#define ll long long
using namespace std;

const int mxn = 2e5;
ll t,n;
int a[mxn];

int main(){
	cin >> n >> t;
	ll large = 1e18;
	ll small = 1;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	while(small < large){
		ll mid = small + (large - small)/2, s=0;
		for(int i = 0; i < n; i++){
			s+= min(mid/a[i], (ll)1e9);
		}
		if(s>t) large = mid;
		else small = mid+1;
	}
	cout << large;
}