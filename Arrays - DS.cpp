#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int main()
{
    int a,b,i;
    cin>>b;
    for(i=0;i<b;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    reverse(v.begin(),v.end());
    for(i=0;i<b;i++){
        cout<<v[i]<<" ";
    }
}
