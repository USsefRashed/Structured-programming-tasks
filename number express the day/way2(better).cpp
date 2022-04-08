/*
Name : Yousef Ashraf Mohammed AbdelRahman
Year : 2
Section : 16
*/
#include<iostream>
using namespace std;
int main()
{
    short num;
    string arr[]={"Sat","Sun","Mon","Tue","Wed","Thu","Fri"};
cout<<"Enter number 1~7 : ";cin>>num;
if(num>0&&num<8)
{
    cout<<arr[--num]<<endl;
}
else
{
    cout<<"Out of range !";
}
cout<<"Progrm is shutdown !"<<endl;
}