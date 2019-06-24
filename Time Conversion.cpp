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

    string s;

    cin >> s;

    if( s[8] == 'P')
    {
        string s1= s.substr( 0, 2 );
        string s2= s.substr( 2, 6 );

        stringstream ss;

        ss<<s1;
        ss>>b;
        ss.clear();
        b += 12;
        ss<<b;
        ss>>s1;

        cout << s1+s2;
    }
    else{
        string s1= s.substr( 0, 8 );
        cout << s1;
    }
}
