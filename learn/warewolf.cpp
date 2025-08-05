#include <iostream>
#include <vector>
#include <string> 
#include <map>
#include <set>
using namespace std;
int n;
vector<int> c[1001];
vector<int> p[1001];

void cdfs(int v, vector<bool>& vis){
	if(!vis[v]) return;
	vis[v] = false;
	for(int child: c[v]){
		cdfs(child, vis);
	}
}
void pdfs(int v, vector<bool>& vis){
	if(!vis[v]) return;
	vis[v] = false;
	for(int child: p[v]){
		pdfs(child, vis);
	}
}


int main(){
	cin >> n;
	string token;
	int u, v;
	while(cin >> token){
		if(token == "BLOOD") break;
		u = stoi(token);
		cin >> v;
		c[u].push_back(v);
		p[v].push_back(u);

	}
	vector<int> victims;
	int k;
	while(cin >> k){
		victims.push_back(k);
	}

	vector<bool> vis(n+1,true);
	for(int i : victims){
		cdfs(i, vis);
		pdfs(i, vis);
	}
	vector<int> final;
	for(int i = 1; i <= n; i++){
		if(vis[i] == true) final.push_back(i);
	}

	if(final.empty()){
		cout << 0;
	} else {
		for(int i = 0; i < final.size(); i++){
			cout << final[i] << (i==final.size() - 1?"": " ");
		}
	}
}
