#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <queue>
#include <unordered_map>
#define ll long long
using namespace std;

int n;
int main(){
	cin >> n;
	vector<int> v(n);
	for(int i = 0; i < n; i++){
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	int out = 1;		int mf = 1;
	for(int i = 1; i < n; i++){

		if(v[i] == v[i-1]) mf++;
		else {out = max(out,mf); mf = 1;} 
 	}out = max(out, mf); cout << out;
}