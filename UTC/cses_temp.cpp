#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
#define ll long long
 
int main(){
    int t;
    cin >> t;
    while (t--){
        int x, y;
        cin >> x >> y;
        cout << ((x+y)%3 == 0 && 2*x>=y&& 2*y>=x ? "YES" : "NO") << "\n";
    }
    
}
