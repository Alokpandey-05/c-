#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number";
    cin>>n;
    int spa=n-1,star=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<spa;j++)
	cout<<" ";
	for(int j=0;j<star;j++)
	cout<<"*";
            cout<<endl;
            star+=2;  
            spa--;
        }
    }

