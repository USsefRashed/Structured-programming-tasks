#include<iostream>
using namespace std;
bool Isunique(int arr[]);
int main()
{
    int *a;
    cout<<"start \n";
    a=new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin>>a[i];
    }
    if(Isunique(a)==0)
    {
        cout<<"Duplicate"<<endl;
    }
    else{
        cout<<"All Unique"<<endl;
    }
    
}
bool Isunique(int arr[])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j =i+1 ; j < 5; j++)
        {
            if (arr[i]==arr[j])
            {
                return 0;
            }
        }
        
    }
    return 1;   
}