#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int mxn = 1e5, K = 17;
int n,b[mxn], q, ma[K][mxn], mi[K][mxn], lg[mxn + 1];

int q_max(int L, int R){
	if(R<L) return -2e9;
	int i = lg[R-L+1];
	return max(ma[i][L], ma[i][R - (1<<i) +1]);
	
}
int q_min(int L, int R){
	if(R<L) return 2e9;
	int i = lg[R-L+1];
	return min(mi[i][L], mi[i][R - (1<<i) +1]);
	
}

int main(){
	cin >> n;
	for(int i = 0; i < n;i++) cin >> b[i];
	cin >> q;

	lg[1] = 0;
	for(int i = 2; i <= mxn; i++) lg[i] = lg[i/2] + 1;
	copy(b,b+n,mi[0]);copy(b,b+n,ma[0]);

	for(int i = 1; i < K; i++)
		for(int j = 0; j + (1 << i) <= n; j++){
			mi[i][j] = min(mi[i-1][j], mi[i-1][j + (1 << (i-1))]);
			ma[i][j] = max(ma[i-1][j], ma[i-1][j + (1 << (i-1))]);
		}

	while(q--){
		int L, R;
		cin >> L >> R;
		double max_out = max(q_max(0,L-1), q_max(R+1,n));
		double max_in = q_max(L,R);
		double min_in = q_min(L,R);
		double out = max(max_out+min_in, (max_in-min_in)/2.0 + min_in);
		cout.precision(1)
		cout << out;
	}
}

