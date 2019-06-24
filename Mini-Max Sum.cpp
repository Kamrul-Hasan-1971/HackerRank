#include<bits/stdc++.h>
using namespace std;
#define           ull              unsigned long long int
#define           ll              long long int
#define           pb               push_back
#define           pii              pair<ll,ll>
#define           mx               100005

vector<ll>v;
int main()
{
    ll a, i, b, j, sum1 = 0, sum2 = 0;

    for( i =1 ; i <= 5 ; i++ )
    {
        cin >> b;
        v.pb(b);
    }

    sort( v.begin(), v.end());

    for(i =0 ; i < 4 ; i++)
    {
        sum1 += v[i];
    }

    sort( v.rbegin(), v.rend());

    for(i =0 ; i < 4 ; i++)
    {
        sum2 += v[i];
    }

    cout << sum1 << " " << sum2 ;
}
