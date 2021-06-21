#include<iostream>
using namespace std;
int main()
{
    int n,a=1;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        cout<<" ";
        for(int j=0;j<=i;j++){
        cout<<a<<" ";
        a++;
        }
        a=1;
        cout<<endl;
    }
}