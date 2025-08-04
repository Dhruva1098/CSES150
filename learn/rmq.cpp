
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


const int mxn = 50000, K = 25;
int n,q, ar[mxn], lg[mxn+1], st[K][mxn];

int main(){
	lg[1] = 0;
	for(int i = 2; i <=mxn; i++)
		lg[i] = lg[i/2]+1;

	cin >> n >> q;
	for(int i = 0; i <n; i++)
		cin >> ar[i];

	copy(ar, ar+n, st[0]);
	for(int i = 1; i < K; i++)
		for(int j = 0; j + (1 << i)<= n; j++)
			st[i][j] = max(st[i-1][j], st[i-1][j + (1 << (i-1))]);
	int out = 0;
	while(q--){
		int L,R;
		cin >> L >> R;
		R--;L--;
		int i = lg[R - L + 1];
		int minimum = max(st[i][L],st[i][R - (1 << i) + 1]);
		if(minimum <= ar[L]) out++;  
	}cout << out;
}