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
    ll out = 0;
    int top = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        top = max(x, top);
        out += top - x;  
    } 
    cout <<  out;
}