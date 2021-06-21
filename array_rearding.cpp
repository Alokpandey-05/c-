#include <iostream>
#include <algorithm>
using namespace std;
int gcd(int n,int m)
{
    for(int i=2;i<max(n,m);i++)
    {
        if(n%i==0&&m%i==0)
        return i;
    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int temp,count,output=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(arr[i]<arr[j]])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=arr[j];
            }
        }
    }
    for(int i=0;i<=n-1;i++)
    {
        for(int j=i+1;j<=n-1;j++)
        {
            count=gcd(arr[i],arr[j]);
            if(count!=0)
            output++;

    }
}
cout<<"output"<<output;
}