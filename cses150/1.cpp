#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin >> n;
    cout << n;
    while(n-1){
        if(n%2 == 0){ n /= 2; cout << " " << n; }
        else {
            n = (n * 3) + 1;
            cout << " " << n;
        }
    }
} 
