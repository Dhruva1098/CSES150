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
    sort(s.begin(), s.end());
    vector<string> v;
    do {
        v.push_back(s);   
    } while(next_permutation(s.begin(), s.end()));
    cout << v.size() << "\n";
    for(string s : v){
        cout << s << "\n";
    }
}
