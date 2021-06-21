#include <iostream>
#include <algorithm>
using namespace std;
/*int max1(int x, int y)
{
    if(x>y)
    return x;
    else
    return y;
}
int main()
{
    cout<<"enter array size"<<endl;
    int n,max;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
   cin>>arr[i];
    for(int i=0;i<n-1;i++)
    max=max1(arr[i],arr[i+1]);
    cout<<max;
}
*/
int main()
{
    int n,max1;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<n;i++)
     max1= max (arr[i],arr[i+1]);
    cout<<max1;
}