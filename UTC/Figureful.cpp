#include <bits/stdc++.h>

#define ll long long
using namespace std;

int n;

int main(){
	cin >> n;
	map<pair<int,int>, string> mp;
	for(int i = 0; i < n; i++){
		int c1,c2; string s;
		cin >> c1 >> c2 >> s;
		mp[{c1,c2}] = s;
	} 
	int k;
	cin >> k;
	for(int i = 0; i < k; i++){
		int p1, p2; cin >> p1 >> p2;
		cout << "\n" << mp[{p1,p2}];
	}

}