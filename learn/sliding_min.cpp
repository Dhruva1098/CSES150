#include <queue>
#include <utility>
#include <iostream>

using namespace std;

deque<pair<long,long>> q;
int cnt_added = 0; int cnt_removed = 0;
long long x,a,b,c,n,k;

void push(long long i){
	while(!q.empty() && q.back().first > i)
		q.pop_back();
	q.push_back({i,cnt_added});
	cnt_added++;
}
void pop(){
	if(!q.empty() && q.front().second == cnt_removed) q.pop_front();
	cnt_removed++;
}

int main(){
	cin >> n >> k >> x >> a >> b >> c;
	vector<long long> v(n);
	v[0] = x;
	for(int i = 1; i < n; i++){
		v[i] = (v[i-1]*a + b)%c;
	}
	for(int i = 0; i < k; i++){
		push(v[i]);
	}
	long long out = q.front().first;
	for(int i = k; i < n; i++){
		pop();
		push(v[i]);
		out ^= q.front().first;
	}
	cout << out;

}
