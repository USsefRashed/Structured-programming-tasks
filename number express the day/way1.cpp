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
    cout<<"Enter number 1 ~ 7";cin>>num;
    switch (num)
    {
    case 1:
    cout<<"Saturday"<<endl;
        break;
        case 2:
    cout<<"Sunday"<<endl;
        break;
        case 3:
    cout<<"Monday"<<endl;
        break;
        case 4:
    cout<<"Tuesday"<<endl;
        break;
        case 5:
    cout<<"Wednesday"<<endl;
        break;
        case 6:
    cout<<"Thursday"<<endl;
        break;
        case 7:
    cout<<"Friday"<<endl;
        break;
    
    default:
    cout<<"Out of range ! program is shudown !"<<endl;
        break;
    }
}