#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <queue>
#include <deque>
#include <bitset>
#include <cassert>
#include <array>

using namespace std;
#define ll long long
#define ar array

int n;
int main(){
	cin >> n;
	set<ar<int,2>> s;
	for(int i = 0; i < n; i++){
		int a,b; cin >> a >> b;
		s.insert({2*a, 1});
		s.insert({2*b+1, -1});
	}
	int c=0, ans = 0;
	for(ar<int,2> p : s){
		c += p[1];
		ans = max(ans, c);
	}
	cout << ans;
}