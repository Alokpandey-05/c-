#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<n;i++)
    cout<<arr[i];
    int max1=INT_MIN,sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            sum+=arr[j];
            max1=max(sum,max1);
        }
        sum=0;
    }  
    cout<<endl; 
    cout<<max1;
    return 0;
}