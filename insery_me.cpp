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
    int sort[n];
    sort[0]=arr[0];
    int i,j,k,count=0;
    for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(sort[j]>arr[i])
            {
                count=1;
                break;
            }
        }
        if(count==1)
        {
            for(k=i-1;k>=j;k--)
            sort[k+1]=sort[k];
            sort[j]=arr[i];
        }
        sort[j]=arr[i];
        count=0;
    }
    for(k=0;k<n;k++)
    cout<<sort[k]<<" ";
}