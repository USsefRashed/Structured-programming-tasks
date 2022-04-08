/*
Name : Yousef Ashraf Mohammed AbdelRahman
Year : 2
Section : 16
*/
#include<iostream>
#include<cmath>
using namespace std;
void Rectangle(double width,double length);
void Square(double length);
void Triangle(double height,double base);
void Circle(double radius);
void APP(int ans);
int main()
{
    int op;
    cout<<"1-Rectangle\n2-Circle\n3-Triangle\n4-Square"<<endl;
    
    try
    {
        if(cin>>op)
        {
            APP(op);
        }
        else{
            throw "the input should be integer 1~4 the program is terminated ! ";
        }
        
    }
    catch(const char*msg)
    {
        cerr << msg << '\n';
    }

}

void APP(int ans)
{
    if(ans==1)
    {
    double w,l;
    cout<<"length : ";cin>>l;
    cout<<"Width : ";cin>>w;
    Rectangle(l,w);
    }
    else if(ans==2)
    {
    double r;
    cout<<"Radius : ";cin>>r;
    Circle(r);
    }
    else if(ans==3)
{
    double h,b;
    cout<<"Height : ";cin>>h;
    cout<<"Base : ";cin>>b;
    Triangle(h,b);
}
else if(ans==4)
{
double l;
cout<<"length : ";cin>>l;
Square(l);
}
else{
    cout<<"Invalid value !"<<endl;
}
}
void Rectangle(double width,double length)
{
    cout<<"The Rectangle area = "<<length*width<<" Square unit"<<endl;
}
void Square(double length)
{
    cout<<"The square area = "<<pow(length,2)<<" Square unit"<<endl;
}
void Triangle(double height,double base)
{
    cout<<"The triangle area = "<<0.5*base*height<<" Square unit"<<endl;
}
void Circle(double radius)
{
    cout<<"The circle area = "<<(pow(radius,2))*3.14<<" Square unit"<<endl;
}