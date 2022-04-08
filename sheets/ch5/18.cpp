#include<iostream>
using namespace std;
int MAX(int a,int b,int c,int d,int e);
int MIN(int a,int b,int c,int d,int e);
int main()
{
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    cout<<"MAX : "<<MAX(a,b,c,d,e)<<endl;
    cout<<"MIN : "<<MIN(a,b,c,d,e)<<endl;

}
int MAX(int a,int b,int c,int d,int e)
{
    if(a>=b&&a>=c&&a>=d&&a>=e)
    {
        return a;
    }
    else if (b>=a&&b>=c&&b>=d&&b>=e)
    {
        return b;
    }
    else if (c>=a&&c>=b&&c>=d&&c>=e)
    {
        return c;
    }
    else if (d>=a&&d>=c&&d>=b&&d>=e)
    {
        return d;
    }
    return e;
}

int MIN(int a,int b,int c,int d,int e)
{
    if(a<=b&&a<=c&&a<=d&&a<=e)
    {
        return a;
    }
    else if (b<=a&&b<=c&&b<=d&&b<=e)
    {
        return b;
    }
    else if (c<=a&&c<=b&&c<=d&&c<=e)
    {
        return c;
    }
    else if (d<=a&&d<=c&&d<=b&&d<=e)
    {
        return d;
    }
    return e;
}