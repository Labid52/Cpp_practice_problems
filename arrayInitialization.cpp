/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //static initialization of array//
    int a[] = {2, 10, 5, 7, 9};
    int n;
    n = sizeof(a)/sizeof(a[0]);
    for (int i = 0; i < n; i++){
        cout <<a[i]<<"\t";
    }
    //dynamic initialization of array//
    float arr1[20];
    int n1;
    cout<< "Enter total number of array: "<<"\n";
    cin >> n1;
    cout<<"Enter the elements of array: "<<"\n";
    for (int j = 0; j < n1; j++){
        cin >> arr1[j];
    }
    for (int k = 0; k < n1; k++){
        cout<<arr1[k]<<"\t";
    }

    

    return 0;
}