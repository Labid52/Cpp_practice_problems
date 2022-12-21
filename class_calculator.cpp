#include <iostream>
using namespace std;
class calculator
{	public:
	int a,b;
	int sum()
	{	return a+b;
	}
	int multiply()
	{	return a*b;
	}
};
int main()
{	calculator cal;
	cout<<"enter 2 number";
	cin>>cal.a>>cal.b;
	cout<<"sum="<<cal.sum()<<endl;
	cout<<"multiply="<<cal.multiply()<<endl;
}
