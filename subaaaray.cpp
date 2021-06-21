#include<iostream>
using namespace std;
int main()
{
    cout<<"enter array size"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter array elements"<<endl;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        cout<<arr[j]<<" ";
        cout<<endl;
    }
}