#include <set>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <queue>

#define ll long long
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> a(n), pos(n+1);
	for(int i = 0; i < n; i++){
		cin >> a[i];
		pos[a[i]] = i;
	}

	int cnt = 1;
	for(int i = 1; i < n; i++){
		if(pos[i] > pos[i+1]) cnt++;
	}
	cout << cnt;

}