#include<iostream>
#include"Calculator.h"
using namespace std;
int main()
{
    double num1,num2;
    char op;
    Calculators C;
    cout<<"Enter the first number : ";cin>>num1;
    cout<<"Enter the second number : ";cin>>num2;
    cout<<"Press \n--------------------------------\n--------------------------------"<<endl;
    cout<<"'+' ADD\n'-'substract\n'*'producton\n'/'devision";
    cout<<"\n---------------------------------------\n---------------------------------------"<<endl;
    cin>>op;
    switch (op)
    {
    case '+':
        cout<<num1<<" + "<<num2<<" = "<<C.Summation(num1,num2)<<endl;
        break;
    case '-':
        cout<<num1<<" - "<<num2<<" = "<<C.Substraction(num1,num2)<<endl;
    
        break;
    case '*':
        cout<<num1<<" * "<<num2<<" = "<<C.Production(num1,num2)<<endl;

        break;
    case '/':
        cout<<num1<<" / "<<num2<<" = "<<C.Devision(num1,num2)<<endl;
        break;
    
    default:
    cout<<"Sorry you input invalid operation"<<endl;
        break;
    }
    return 0;
}