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

    cin >> a;
    for( i =1 ; i <= a ; i++ )
    {
        cin >> b;
        v.pb(b);
    }

    sort( v.rbegin(), v.rend());

    ll id = v[0];

    for(i =0 ; i < a ; i++)
    {
        if(v[i] == id)
        {
            sum1++;
        }
        else{
            break;
        }
    }

    cout << sum1 ;
}
