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
int t, n, a[mxn];
ll avg = 0;

bool e(ll mb, int mid){
	ll k = avg + mb/n;
	if(k > a[mid]) return true;
	else return false;
}

int main(){
	cin >> t;
	while(t--){
		cin >> n;
		ll m = -1;
		
		for(int i = 0; i < n; i++){
			cin >> a[i];
			m = max((ll)a[i], m); avg += a[i];
		}
		if(n <= 2){
			cout << -1 << "\n";
			continue;
		} 
		avg /= n;
		sort(a,a+n);
		int mid = a[n/2];
		cout << "mid:" << mid << "avg:" << (ll)avg/2 << "\n";
		if((ll)avg/2 > (ll)mid){
			cout << 0 << "\n"; continue;
		}
		ll lb = 1; ll rb = 1e18;
		while(lb < rb){
			ll mb = (lb + rb)/2;
			if(e(mb,mid)) rb = mb - 1;
			else lb = mb;
		}
		cout << lb << "\n";
	}
}