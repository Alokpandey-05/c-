#include<bits/stdc++.h>
using namespace std;
void print(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    sum=sum+i;
    cout<<"sum of "<<n<< "numebers";
    cout<<sum;
}
int main()
{
    int n;
    cin>>n;
    print(n);
}