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
    if(n==1) {cout << 1; return 0;}
    if(n ==2 || n==3){ cout << "NO SOLUTION"; return 0;}
    else{
        if(n%2== 0){
            for(int i = 2; i <= n; i+=2){
                cout << i << " ";
            }
            for(int i = 1; i < n; i+=2){
                cout << i << " ";   
            }
        }
        if(n%2!=0){
            for(int i = n-1; i > 0; i-=2){
                cout << i << " ";
            }
            for(int i = n; i > 0; i-=2){
                cout << i << " ";
            }
        }
    }
}