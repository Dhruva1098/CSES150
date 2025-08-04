#include <queue>
#include <utility>
#include <iostream>

using namespace std;

const int mxn = 1e6;
int arr[mxn], n, p,d;


void push(long long i, deque<pair<long,long>>& q, int& cnt_added){
	while(!q.empty() && q.back().first < i)
		q.pop_back();
	q.push_back({i,cnt_added});
	cnt_added++;
}
void pop(deque<pair<long,long>>& q, int& cnt_removed){
	if(!q.empty() && q.front().second == cnt_removed) q.pop_front();
	cnt_removed++;
}

int main(){
	cin >> n >> p;
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	vector<int> k;
	while(p--){

		cin >> d;
		deque<pair<long,long>> qu;
		int cnt_added = 0; int cnt_removed = 0;
		for(int i = 0; i < d; i++){
			push(arr[i],qu, cnt_added);
		}
		int out = qu.front().first;
		for(int i = d; i < n; i++){
			pop(qu,cnt_removed);
			push(arr[i],qu,cnt_added);
			out = min(out,(int)qu.front().first);
		}
		k.push_back(out);
	}
	cout << "\n";
	for(auto it : k) cout << it << "\n";
}

