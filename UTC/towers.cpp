#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <queue>
#define ll long long
using namespace std;

int n;

int main(){
	cin >> n;
	vector<int> v;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		int p = upper_bound(v.begin(), v.end(), x) - v.begin();
		if(p < v.size()) v[p] = x;
		else v.push_back(x);
	}
	cout <<v.size();
}