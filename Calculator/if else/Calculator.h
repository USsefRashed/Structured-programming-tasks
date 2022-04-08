#include<iostream>
using namespace std;
class Calculators
{
private:
    void checkZeroError(double &y);
public:
    double Summation(double x,double y);
    double Substraction(double x,double y);
    double Production(double x,double y);
    double Devision(double x,double y);
};


double Calculators::Summation(double x,double y)
{
    return x+y;
}
double Calculators::Substraction(double x,double y)
{
    return x-y;
}
double Calculators::Production(double x,double y)
{
    return x*y;
}
double Calculators::Devision(double x,double y)
{
    if(y!=0)
    {return x/y;}
else{
checkZeroError(y);
cout<<x<<" / "<<y<<" = ";
return x/y;
}
    

}
void Calculators::checkZeroError(double &y)
{

    try
    {
        if(y==0)
        {
            throw "Math Error !";
        }
    }
    catch(const  char *msg)
    {
        do
        {
            cerr << msg << '\n';
            cout<<"Renter the second number ( do not enter 0 !! ): ";cin>>y;
        } while (y==0); 
    }

}

