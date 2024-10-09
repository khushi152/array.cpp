#include<iostream> 
using namespace std;
int main()
{
    int a[5],i;
    
    cout<<"Enter Array Elements : ";
    for(i=0;i<=4;i++)
    cin>>a[i];
    cout<<" Array Elements Are : ";
    for(i=4;i>=0;i--)
    cout<<a[i]<<"";

    return 0;
}