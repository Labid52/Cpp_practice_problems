#include <iostream>
using namespace std;
class ros {
int j;
public:
int i;
ros(int i){
	cout << "Constructing " << i << "\n";
	j = i;
}
~ros(){
	cout << "Destructing " << j << "\n";
}
void neg(ros &melodic) { melodic.i = -melodic.i; } // no temporary created
};
int main()
{
ros melodic(2);
melodic.i = 10;
melodic.neg(melodic);
cout << melodic.i << "\n";
return 0;
}
