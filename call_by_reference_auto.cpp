#include <iostream>
using namespace std;
int neg(int &i);
int main(){
	int x=10;
	cout << "the required value by auto-reference:" << neg(x);
	
}
int neg(int &i){
	i=-i;
	return i;
}
