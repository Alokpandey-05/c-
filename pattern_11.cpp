#include <iostream>
using namespace std;
int main()
{
    cout<<"enter a no";
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        cout<<"*";
        for(int j=1;j<=(2*(n-1)-2*i);j++)
        cout<<" ";
        for(int j=0;j<=i;j++)
        cout<<"*";
        cout<<endl;
    }
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<=i;j++)
        cout<<"*";
        for(int j=1;j<=(2*(n-1)-2*i);j++)
        cout<<" ";
        for(int j=0;j<=i;j++)
        cout<<"*";
        cout<<endl;
    }
}