#include <iostream>
using namespace std;

int add(int a,int b)
{
    return a+b;
}

int sub(int a,int b)
{
    return a-b;
}

int mul(int a,int b)
{
    return a*b;
}

int main()
{
    int (*operation)(int,int);

    operation = add;
    cout << "Addition: " << operation(10,5) << endl;

    operation = sub;
    cout << "Subtraction: " << operation(10,5) << endl;

    operation = mul;
    cout << "Multiplication: " << operation(10,5);

    return 0;
}