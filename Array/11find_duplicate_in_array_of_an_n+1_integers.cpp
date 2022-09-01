#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n, arr[100];
    cout<<"enter the size of array"<<endl;
    cin>>n;
    cout<<"arr is :"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i]==arr[i+1]){
            cout<<arr[i]<<endl;
        }
    }
    
}