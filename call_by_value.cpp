#include <iostream>
using namespace std;
int neg(int i);
int main(){
	int x=10;
	x=neg(x);
	cout << "the required value is:" << x;
}
int neg(int i){
	i=-i;
	return i;
}
