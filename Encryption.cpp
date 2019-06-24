//Sara_Hasan <3

#include<bits/stdc++.h>
using namespace std;
#define           ull              unsigned long long int
#define           ll              long long int
#define           pb               push_back
#define           pii              pair<ll,ll>
#define           mx               100005

vector<ll>v;

char ara [20] [20];
int main()
{
    ll a, i, b, c, j, cnt = 0, sum2 = 0, d;
    for( i = 0; i < 20 ; i++)
    {
        for( j = 0; j < 20 ; j++)
        {
            ara[i][j]='1';
        }
    }

    string s,s2;

    getline( cin, s);

    for( i = 0 ; i < s.size() ; i++)
    {
        if( s[i] == ' ')
            continue;
        s2 += s[i];
    }

    ll l = s2.size();

    ll row = floor( sqrt( l ) );

    ll col = ceil( sqrt( l ) );

    if( row * col < l){
        row++;
    }

    ll p = 0;
    for( i = 0 ; i < row ; i++)
    {
        for( j = 0 ; j < col ; j++)
        {
            ara[i][j] = s2[p];

            p++;
            if(p == l)
            {
                for( i = 0; i < col ; i++)
                {
                    for( j = 0; j < row ; j++)
                    {
                        if(ara[j][i] == '1' )
                            continue;
                        cout << ara[j][i];
                    }

                    cout <<" ";
                }

                return 0;
            }
        }
    }
}
