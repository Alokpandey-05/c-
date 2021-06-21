#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    cout<<"netre array size"<<endl;
    int n;
    int arr[n];
    //geting array elements
    cout<<"enter array elements";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int ans =2; 
    int pd=arr[1]-arr[0];
    int j=2;
    int curr=2;
    while(j<n)
    {
        if(arr[j]-arr[j-1]==curr)
        curr++;
        else
        {
            pd=arr[j]-arr[j-1];
            curr=2;
        }
        ans=max(ans,curr);
        j++;
    }
    cout<<ans;
}