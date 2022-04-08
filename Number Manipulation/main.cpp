/*
Name : Yousef Ashraf Mohammed AbdelRahman
Year : 2
Section : 16
*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int number;
    int remainder;
    int firstnumber;
    
    cout<<"Enter A number from 3 digits : ";cin>>number;

    if(number<9999)
    {
        // number= 123
        firstnumber=number/100;//1

        remainder=number%100;//23
        
        int secondnumber;
        
        secondnumber=remainder/10;//23/10=2

        remainder=remainder%10;//23%10=3
        int third=remainder;

        cout<<firstnumber<<" + "<<secondnumber<<" + "<<remainder<<" = "<<firstnumber+secondnumber+third<<endl;
    }
    else{
        cout<<"Sorry the number is more than 3 digits * ^ * \n";
    }
}