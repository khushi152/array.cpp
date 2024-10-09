#include<iostream>
using namespace std;
int main()
{
    int arr[10] = {10,20,30,40,50};
    int n = 5;
    int element,pos;
    cout<<"original array:";
    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<"";
    }
    cout<<endl;
    cout<<"enter the element to insert:";
    cin>>element;
    cout<<"enter the pos to insert the element(0 to "<<n<<"):";
    cin>>pos;
    if(pos<0||pos>n){
        cout<<"invalid pos!"<<endl;
    }
    else{
        for(int i=n;i>pos;i--){
            arr[i] =arr[i-1];
        }
        arr[pos] = element;
        n++;
        cout<<"array after insertion:";
        for(int i=0;i<n;i++){
            cout<<arr[i]<<"";
        }
        cout<<endl;
        }
        return 0;

        }
    
    
    
