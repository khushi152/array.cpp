#include<iostream>
using namespace std;
int min(int arr[], int n){
    int minimum =int_maximum ;
    for(int i=0; i<n; i++){
        minimum = min(minimum,arr[i]);
        
    }
    return minimum;
}

int Max(int arr[], int n){
    int maxi = int minimum;
    for(int i=0; i<n; i++){
        maxi = max(maximum,arr[i]);
        
    }
    return maximum;
}

void Take_input(int arr[],int n){
    for(int i = 0; i<n; i++){
        cout<<"Enter "<<i+1<<" element : ";
        cin>>arr[i];
    }
    return;
}


void Print_arr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return;
}
int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    int arr[n]; 

    Take_input(arr,n);
    Print_arr(arr,n);
    
    cout<<endl<<"Minimum Value : "<<minimum(arr,n)<<endl;
    cout<<"Maximum Value : "<<Max(arr,n)<<endl;

    return 0;
}