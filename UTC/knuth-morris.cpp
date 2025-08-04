#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <queue>
#include <unordered_map>
#define ll long long
using namespace std;

vector<int> prefString(string& s){
	int n = s.length();
	vector<int> pi(n);
	for(int i = 1; i < n; i++){
		int j = pi[i-1];
		while(j>0 && s[i] != s[j]) j = pi[j-1];
		if(s[i] == s[j]) j++;
		pi[i] = j;
	}
	return pi;
}
int main(){
	string s = "aaabbccbcaasbabccbabcbac";
	vector<int> temp = prefString(s);
	for(auto it : temp) cout << it << " ";
}