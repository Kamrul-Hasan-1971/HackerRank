#include<bits/stdc++.h>
using namespace std;
#define           ull              unsigned long long int
#define           ll              long long int
#define           pb               push_back
#define           pii              pair<ll,ll>
#define           mx               100005

int main()
{
    ll a, i, b, j;
    cin >> a;

    for( i =1 ; i <= a ; i++ )
    {
        for(j = 1; j <= a-i ; j++)
            cout<<" ";
        for( j = 1 ; j <= i ; j++ )
        {
            cout<<"#";
        }
        if( i != a)
        {
            cout<<endl;
        }
    }
}
