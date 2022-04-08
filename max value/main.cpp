/*
Name : Yousef Ashraf Mohammed AbdelRahman
Year : 2
Section : 16
*/
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter 3 numbers : ";cin>>a>>b>>c;
    if (a>=b&&a>=c)
    {
        cout<<"Large : "<<a<<endl;
    }
    else if (b>=a&&b>=c)
    {
        cout<<"Large : "<<b<<endl;
    }
    else if(c>=a&&c>=b){
        cout<<"Large : "<<c<<endl;
    }
    else{
        cout<<"All are equal !";
    }
    
}