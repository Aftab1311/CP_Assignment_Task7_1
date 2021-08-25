
// Q.1: Write a program to find a raised to the power of b [Using recursion]. //
#include <iostream>
using namespace std;

int Power(int b, int p)
{
    if (p == 0)
        return 1;
    else
        return (b * Power(b, p - 1));
}
int main()
{
    int b , p ;
    cout<<"Enter base : ";
    cin>>b;
    cout<<"Enter power : ";
    cin>>p;
    cout << "The answer of " << b << "^" << p << " is : " << Power( b,  p);

    return 0;
}
