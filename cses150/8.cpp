#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
#define ll long long

int main(){
    int n;
    cin >> n;
    if(n*(n+1)/2 % 2 != 0) {
        cout << "NO";
        return 0;
    }
    vector<int> a, b;
    int j = 0;
    if(n%4) j = 3;
    else j = 4;
    for(int i = 0; i < (n-1)/4; i++){
        a.push_back(4*i + 1 + j);
        a.push_back(4*i + 4 + j);
        b.push_back(4*i+ 2 + j);
        b.push_back(4*i + 3 + j);
    }
    if(n%4){
        a.push_back(1);
        a.push_back(2);
        b.push_back(3);
    } else {
        a.push_back(1);
        a.push_back(4);
        b.push_back(2);
        b.push_back(3);
    }
    cout << "YES\n" << a.size() << "\n";
    for(int i : a) cout << i << " ";
    cout << "\n";
    cout << b.size() << "\n";
    for(int i : b) cout << i << " ";
}
