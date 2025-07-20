#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
#define ll long long

int main(){
    string s;
    cin >> s;
    int ans = 1, c = 0;
    char t = 'A';
    for(char a : s){
        if(a == t){
            c++;
            ans = max(ans, c);
        } else {
            t = a;
            c = 1;
        }
    } cout << ans;
}