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

int n, k, a[mxn];

bool f(ll mb){
	int t = 0; int curr = 0;
	for(int i = 0; i < n; i++){
		if(curr + a[i] <= mb) curr+=a[i];
		else{
			curr = a[i];
			t++;
		}
	}
	return t <= k;
}

int main(){
	cin >> n >> k;
	ll lb = 0, rb = 0; int ans;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		rb += a[i]; lb = max(lb, (ll)a[i]);
	}
	while(lb < rb){
		ll mb = (lb + rb)/2;
		if(f(mb)){ans = mb; rb = mb - 1;}
		else{
			lb = mb + 1;
		}
	} cout << ans;

} 