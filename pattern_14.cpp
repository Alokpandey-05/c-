#include<iostream>
using namespace std;
int main()
{
    cout<<"enter a no";
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a=i+1;
        for(int j=0;j<n-i-1;j++)
        cout<<" ";
        for(int j=0;j<=i;j++){
        cout<<a;
        a--;
        }
        a=2;
        for (int j=0;j<i;j++){
            cout<<a;
            a++;
        }
        cout<<endl;
    }
}