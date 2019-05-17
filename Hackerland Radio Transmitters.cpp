#include<bits/stdc++.h>
using namespace std;
#define           ll               long long int
#define           pb               push_back
vector<ll>v;
int main()
{
    ll a,b,c,d,i,j,cnt=0,x;
    scanf("%lld %lld", &a, &b);
    for(i=0;i<a;i++){
        scanf("%lld", &c);
        v.pb(c);
    }
    sort(v.begin(),v.end());
    for(i=0;i<a;i++){
        c=v[i]+b;
        cnt++;
        x=upper_bound(v.begin(),v.end(),c)-v.begin();
        c=v[x-1]+b;
        x=upper_bound(v.begin(),v.end(),c)-v.begin();
        i=x;
        i--;
    }
    printf("%lld\n",cnt);
    return 0;
}
