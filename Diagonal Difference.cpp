#include<bits/stdc++.h>
using namespace std;
#define           ull              unsigned long long int
#define           ll              long long int
#define           pb               push_back
#define           pii              pair<ll,ll>
#define           mx               100005
int main()
{
    ll a,b=0,c,i,sum1=0,sum2=0,j;
    cin>>a;
    ll ara[a+1][a+1];
    for(i=0; i<a; i++)
    {
        for(j=0; j<a; j++)
        {
            cin>>ara[i][j];
        }
    }
    for(i=0; i<a; i++)
    {
        for(j=0; j<a; j++)
        {
            if(b==j)
            {
                sum1+=ara[i][j];
                b++;
                break;
            }
        }
    }
    b--;
    for(i=0; i<a; i++)
    {
        for(j=0; j<a; j++)
        {
            if(b==j)
            {
                sum2+=ara[i][j];
                b--;
                break;
            }
        }
    }
    cout<<abs(sum1-sum2);
}
