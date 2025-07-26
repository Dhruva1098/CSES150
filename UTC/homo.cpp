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

multiset<int, greater<int>> ms;
map<int, int> mp;
pair<string, int> p;

void insert(string& s, int a){
	if(!mp.size()){
		cout << "neither\n";
		mp[a]++;
		ms.insert(mp[a]);
	}
	else{
		mp[a]++;
		ms.insert(mp[a]);
		if(*ms.begin()>=2 && )
		
	}

}
void delete(string& s, int a){

}

int main(){
	cin >> n;
	for(int i = 0; i < n; i++){
		string s; int a;
		cin >> s >> a;
		if(s.compare("insert")) insert(s,a);
		if(s.compare("delete")) delete(s,a);
	}
}
