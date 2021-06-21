/*1
11
121
1331
14641*/
#include <bits/stdc++.h>
using namespace std;
int  factorial(int n){
int fact=1;
if(n==0)
return 1;
else
{
for(int i=1;i<=n;i++)
fact=fact*i;
return fact;
}
}
int main()
{
    int n,a;
    cout<<"enter a no";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            a=factorial(i)/(factorial(j)*factorial(i-j));
            cout<<a;
        }
        cout<<endl;
    }
 }