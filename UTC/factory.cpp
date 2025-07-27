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
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	ll lb = 0, rb = 1e18;
	while(lb<rb){
		ll s = 0,mb = lb + (rb - lb)/2;
		for(int i = 0; i < n; i++){
			s += min(mb/a[i], (ll)1e9);
		}
		if(s>=t) rb = mb;
		else lb = mb+1;
	}
	cout << lb;

}