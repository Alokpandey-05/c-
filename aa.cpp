#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int len=str.length();int j,i,count=0;
    for( i=0;i<=len-1;)
    {
        for( j=i;j<=len-2;j++)
        {
            if(str[j]==str[j+1])
            count++;
            else
            break;
        }
        if(count>=1)
        {
            for(int k=0;k<2;k++)
            cout<<str[j];
        }
        i=j+1;
        count=0;
        }
        }