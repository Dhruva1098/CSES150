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
    ll sum = 0;
    for(ll i = 5; i <= n; i*=5){
        sum += n/i;
    }
    cout << sum;
}

