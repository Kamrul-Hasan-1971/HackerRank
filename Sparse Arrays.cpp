#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
vector<int>v;
int main()
{
    int a,b,i;
    string s;
    cin>>a;
    for(i=0;i<a;i++)
    {
        cin>>s;
        mp[s]++;
    }
    cin>>b;
    for(i=0;i<b;i++){
        cin>>s;
        v.push_back(mp[s]);
    }
    for(i=0;i<b;i++){
        cout<<v[i]<<endl;
    }
}
