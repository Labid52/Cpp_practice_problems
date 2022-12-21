
#include <iostream>
using namespace std;
//Demonstration of Pointer

int main()
{
    int n;      //declare an integer variable
    n = 10;     // defining the integer variable
    int* ptr;   // declaring a pointer to interger
    ptr = &n;   // defining the pointer. In this case, pointing to n
    cout<<"content in the pointer variable "<<ptr<<endl;
    //dereferencing and printing the content of variable to be pointed
    cout<<"Content the pointer is pointing to "<<*ptr<<endl;
    cout<<"Reference of a variale "<<&n<<endl;
    //modifying value using pointer
    cout<< "Initial value of n "<<n<<endl;
    *ptr = *ptr + 5; //assinging new values using pointer
    cout<<"New value of content the pointer pointing to "<<*ptr<<endl;
    cout<<"New value of the variable n "<<n<<endl;
    //So the value has been changed using the pointer variable
    return 0;
}