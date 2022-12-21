#include <iostream>
using namespace std;
class myclass{
	int i,j;
	public:
		friend int sum(myclass x);
		void set_ij(int a,int b);
};
void myclass::set_ij(int a, int b){
	i=a;
	j=b;
	
}
int sum(myclass x){			// friend function is not member of any class
	int c;
	c=x.i+x.j;
	return c;
}
int main(){
	myclass n;
	n.set_ij(3,4);
	cout<<"sum is:"<<sum(n);
}
