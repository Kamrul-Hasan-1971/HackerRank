#include<bits/stdc++.h>
using namespace std;
#define           CIN              ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define           ll               long long int
#define           pb               push_back
#define           pii              pair < ll, ll>

vector<ll>v[50000],res;
bool vis[50000];
ll cnt;


void dfs(ll x)
{
    cnt++;
    ll i,l=v[x].size();
    for(i=0; i<l; i++)
    {
        ll p=v[x][i];
        if(vis[p]==0)
        {
            vis[p]=1;
            dfs(p);
        }
    }
}


int main()
{
    CIN;
    ll a,b,c,d,e,i,j,last=0,first=0;
    cin>>a;
    for(i=0; i<a; i++)
    {
        cin>>b>>c;
        v[b].pb(c);
        v[c].pb(b);
    }

    for(i=1; i<=a*2; i++)
    {
        if(vis[i]==0)
        {
            vis[i]=1;
            dfs(i);
            res.pb(cnt);
            cnt=0;
        }
    }

    sort(res.rbegin(),res.rend());

    for(i=res.size()-1;i>=0;i--){
        if(res[i]!=1){
            last=res[i];
            break;
        }
    }
    first=res[0];
    cout<<last<<" "<<first<<endl;
    return 0;
}
