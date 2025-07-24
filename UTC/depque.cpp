#include <set>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <queue>
#define ll long long
using namespace std;

struct dpque{
	multiset<int> s;
	int size(){
		return s.size();
	}
	void insert(int a){
		s.insert(a);
	}
	bool isEmpty(){
		return s.size() == 0;
	}
	int getMin() {return *s.begin();}
	int getMax() {return *s.rbegin();}
	void delMin() {if(s.size() == 0) return; s.erase(s.begin());}
	void delMax() {if(s.size() == 0) return; auto it = s.end(); it--;s.erase(it);}
};

int main(){
	int n, q;
	cin >> n >> q;
	dpque d;
	for(int i = 0; i < n; i++){
		int x; cin >> x;
		d.insert(x);
	}
	while(q--){
		int s; cin >> s;
		if(s==0){int k; cin >> k; d.insert(k);}
		if(s==1){cout << d.getMin() << "\n"; d.delMin();}
		if(s==2){cout << d.getMax() << "\n"; d.delMax();}
	}
}