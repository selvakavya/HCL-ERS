#include <iostream>
using namespace std;

int add(int a,int b){ return a+b; }
int sub(int a,int b){ return a-b; }
int mul(int a,int b){ return a*b; }
int divi(int a,int b){ return a/b; }

int main()
{
    int (*calc[4])(int,int) = {add,sub,mul,divi};

    int choice,a,b;

    cout<<"1.Add\n2.Sub\n3.Mul\n4.Div\n";
    cout<<"Enter choice: ";
    cin>>choice;

    cout<<"Enter two numbers: ";
    cin>>a>>b;

    cout<<"Result = "<< calc[choice-1](a,b);

    return 0;
}