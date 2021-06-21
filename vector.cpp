// #include<iostream>
// #include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v;
    v.push_back(11);
    v.push_back(-2);
    v.push_back(21);
    v.push_back(11);
    v.push_back(45);
    v.push_back(-22);
    


// for(int i=0;i<v.size();i++)
// cout<<v[i]<<" ";
// cout<<endl;

// vector<int>::iterator it;
// for(it=v.begin();it!=v.end();it++){
// cout<<*it<<endl;
// }

for(auto element:v){
    cout<<element<<" ";
}
cout<<endl;

// v.pop_back();//1 2 
for(auto element:v){
    // cout<<element;
}
vector<int> v2 (3,50);

// swap(v,v2);



// for(auto element:v2){
//     cout<<element;
// }
// cout<<endl;
// for(auto element:v){
    // cout<<element;
// }
// cout<<endl;



sort(v.begin() , v.end());
for(auto i:v)
cout<<i<<" ";
}