#include <iostream>
#include "Calculator.h"
using namespace std;
using namespace calc;
int main() 
{
    int a , b; 
    cout << "Enter two numbers: ";
    cin >> a >> b;
    //addition using sum() with namespace calc
    cout<<"Addition"<<sum(a, b)<<endl;

    //subtraction using sub() with namespace calc
    cout<<"Subtraction "<<sub(a, b)<<endl;

    //multiplication using mul() with namespace calc
    cout<<"Multiplication "<<mul(a, b)<<endl;

    //division using div() with namespace calc
    cout<<"Division "<<div(a, b)<<endl;

    return 0;
}