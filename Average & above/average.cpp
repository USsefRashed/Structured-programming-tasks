#include<iostream>
using namespace std;
int main(){
    int arr[5],sum=0;
    for (int i = 0; i < 5; i++)
    {
        cout<<"Eneter #"<<i+1<<" number : ";cin>>arr[i];
        sum+=arr[i];
    }
    int avg=sum/5;
    cout<<"Average = "<<avg<<endl;
    cout<<"Above Average is : ";
    for (int i = 0; i < 5; i++)
    {
        if (arr[i]>avg)
        {
            cout<<arr[i]<<" ";
        }
        
    }
    cout<<endl;
    
}