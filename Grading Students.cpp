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
    ll a, i, b, c , j, sum1 = 0, sum2 = 0, d;

    cin >> a;

    for( i = 0 ; i < a ; i++)
    {
        cin >> b;

        c = b / 5;

        c++;

        c = c * 5 ;

        d = c - b;

        if( d < 3 && b >= 38)
        {
            cout << c << endl ;
        }
        else {
            cout << b << endl;
        }

    }

}
