#include<bits/stdc++.h>
using namespace std;
#define           ll               long long int
#define           pb               push_back

vector<ll>v;
ll ans;

ll binarySearch(ll l, ll r, ll sum)
{
    while (l <= r)
    {
        ll m = l + (r - l) / 2;
        ll sec=sum-v[m];
        if(sec==0 && m==0){
            return m;
        }
        ll fr=v[m-1];

        if (sec == fr )
            return m;
        if (fr<sec)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}



int main()
{
    ll test,N,E,i,a,rr,sum;
    scanf("%lld",&test);
    while(test--)
    {
        sum=0;
        scanf("%lld",&N);
        for(i=0; i<N; i++)
        {
            scanf("%lld", &a);
            sum=sum+a;
            v.pb(sum);
        }
        rr=binarySearch(0,N,sum);
        if(rr!=-1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        v.clear();
    }
    return 0;
}
