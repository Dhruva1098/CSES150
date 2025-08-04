#include <stack>
#include <iostream>
#include <utility>

using namespace std;


stack<pair<int, int>> st; int min_elm = INT_MAX;

void push(int new_elm){
	min_elm = st.empty()?new_elm:min(new_elm,st.top().second);
	st.push({new_elm,min_elm});
}
void pop(){
	st.pop();
}
int get_min(){
	return st.top().second;
}
bool empty(){
	return st.empty();
}
int main(){
	int ar[] = {1,2,3,4,5,6,7,342,35,457,47,5675};
	for(int i : ar){
		push(i);
	}
	cout << "\n";
	while(empty()){
		cout << get_min() << " ";
	}
}