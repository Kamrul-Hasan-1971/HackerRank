#include<bits/stdc++.h>
using namespace std;
#define           ll               long long int
#define           pb               push_back
#define           pii              pair < ll, ll>

vector<pii>v;
vector<ll>v1,v2;
int main()
{
    ll a,b,c,d,i,j,t,x;

    scanf("%lld",&a);
    for(i=0; i<a; i++)
    {
        scanf("%lld", &b);
        v.pb(make_pair(b,(i+1)));
    }
    sort(v.rbegin(),v.rend());

    for(j=0; j<a-1; j++)
    {
        for(i=j+1; i<a; i++)
        {
            if(v[j].second<v[i].second)
            {
                v1.pb(v[j].first-v[i].first);
                break;
            }
        }
    }
    cout<<*min_element(v1.begin(),v1.end());

    return 0;
}
