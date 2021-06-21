#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter array size";
    cin>>n;
    cout<<"enter array elements";
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //sorting
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
           if(arr[i]>arr[j])
            {
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}