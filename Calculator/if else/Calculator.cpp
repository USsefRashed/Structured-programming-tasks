/*
Name : Yousef Ashraf Mohammed AbdelRahman
Year : 2
Section : 16
*/
#include<iostream>
#include"Calculator.h"
using namespace std;

int main()
{
    Calculators C1;
    double n1,n2;
    char op;
    cout<<"Enter frist number : ";cin>>n1;
    cout<<"Choose Operation(+ / * -) : ";cin>>op;
    cout<<"Enter second number : ";cin>>n2;
    
    switch (op)
    {
    case '+':
        cout<<n1<<" + "<<n2<<" = "<<C1.Summation(n1,n2)<<endl;
        break;
    
        case '-':
        cout<<n1<<" - "<<n2<<" = "<<C1.Substraction(n1,n2)<<endl;
        break;
    
        case '*':
        cout<<n1<<" * "<<n2<<" = "<<C1.Production(n1,n2)<<endl;
        break;
    
        case '/':
        cout<<n1<<" / "<<n2<<" = "<<C1.Devision(n1,n2)<<endl;
        break;
    
    default:
        cout<<"invalid operation"<<endl;
        break;
    }

}

