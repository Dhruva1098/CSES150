#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <numeric>
#include <set>
#include <map>
#include <queue>

using namespace std;
#define ll long long
#define ar array

const int mxN = 1e5, di[4] = {-1,0,1,0}, dj[4] = {0,1,0,-1};
const char dc[4] = {'U', 'R', 'D', 'L'};

int n, m, si, sj, d1[mxN][mxN], d2[mxN][mxN], p1[mxN][mxN], p2[mxN][mxN];
string s[mxN];

bool e(int i, int j) {
    return i >= 0 && i < n && j >= 0 && j < m && s[i][j] != '#';
}

int main(){
    cin >> n >> m;
    vector<ar<int, 2>> v2;
    for(int i = 0; i < n; i++){
        cin >> s[i];
        for(int j = 0; j < m; j++){
            if(s[i][j] == 'A'){
                si = i; sj = j; s[i][j] = '.';
            }
            if(s[i][j] == 'M'){
                v2.push_back({i,j});
                s[i][j] = '.';
            }
        }
        p[i] = string(m, '.');
    }
    queue<ar<int, 2>> qu;
    qu.push({si, sj});
    while(qu,size()){

    }
    
}