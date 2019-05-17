#include <bits/stdc++.h>
using namespace std;
///...................................*****.................................................///
///                  Kamrul Hasan ( icthasan36@gmail.com )                                  ///
///                  Department of Ict                                                      ///
///                  Comilla University , Bangladesh.                                       ///
///...................................*****.................................................///
#define           ll               long long int
#define           pii              pair < ll, ll>
vector<pii>v;
ll binarySearch(ll l, ll r, ll x)
{
    while (l <= r)
    {
        ll m = l + (r - l) / 2;
        if (v[m].first == x)
            return m;
        if (v[m].first < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}

int main()
{
    ll a,b,c,d,e,i,j,x,g,h;
    scanf("%lld", &a);
    while(a--)
    {
        v.clear();
        scanf("%lld %lld",&b, &c);
        for(i=0; i<c; i++)
        {
            scanf("%lld", &x);
            v.push_back(make_pair(x,i));
        }
        sort(v.begin(),v.end());
        for(i=0; i<c; i++)
        {
            d=b-v[i].first;
            e=binarySearch(i+1,c,d);
            if(e==-1)
            {
                continue;
            }
            g=min(v[i].second,v[e].second);
            h=max(v[i].second,v[e].second);
            printf("%lld %lld\n",g+1, h+1);
            break;
        }
    }
    return 0;
}
