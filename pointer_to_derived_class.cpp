#include <iostream>
using namespace std;
class base {
int i;
public:
void set_i(int num) { i=num; }
int get_i() { return i; }
};
class derived: public base {
int j;
public:
void set_j(int num) { j=num; }
int get_j() { return j; }
};
int main()
{
base *bp;
derived d;
bp = &d; // base pointer points to derived object
// access derived object using base pointer
bp->set_i(10);
cout << bp->get_i() << " ";
/* The following won't work. You can't access elements of
a derived class using a base class pointer.
bp->set_j(88); // error
cout << bp->get_j(); // error
*/
return 0;
}
// access now allowed because of cast
//((derived *)bp)->set_j(88);
//cout << ((derived *)bp)->get_j();
