#include<bits/stdc++.h>
using namespace std;
#define           ll               long long int
#define           pb               push_back
#define           pii              pair<ll,ll>
#define           mx               100005


ll parent[mx];
ll level[mx];

void initialization(ll n)
{
    for(ll i=1; i<=n; i++)
    {
        parent[i]=i;
        level[i]=1;
    }
}


ll findParent(ll x)
{
    if(x != parent[x])
    {
        return parent[x]=findParent(parent[x]);
    }
    else
    {
        return x;
    }
}

void unionSet(ll x,ll y)
{
    ll px= findParent(x);
    ll py= findParent(y);

    if(px!=py){
        parent[py]=px;
        level[px]+=level[py];
    }
}


int main()
{
    ll n,i,p,a,b;
    string s;
    cin>>n>>p;
    initialization(n);

    for(i=0;i<p;i++){
        cin>>s;
        if(s[0]=='M'){
            cin>>a>>b;
            unionSet(a,b);
        }
        else{
            cin>>a;
            ll r=findParent(a);
            cout<<level[r]<<endl;
        }
    }
    return 0;
}
