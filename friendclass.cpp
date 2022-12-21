#include <iostream>
using namespace std;
class Twovalues{
	int a,b;
	public:
		Twovalues(int i, int j){
			a=i;
			b=j;
		}
		friend class Min;
};
class Min{
	public:
		int min(Twovalues n){
			if(n.a<n.b)
				return n.a;
			else
				return n.b;
		}
};

int main(){
	Twovalues ob(10,12);
	Min ob1;
	cout<<ob1.min(ob);
}
