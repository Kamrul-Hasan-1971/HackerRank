#include<bits/stdc++.h>
using namespace std;
#define           ull              unsigned long long int
#define           pb               push_back
#define           pii              pair<ll,ll>
#define           mx               100005
int main()
{
    ull a,i,x,sum = 0;
    cin>>a;
    while(a--)
    {
        cin>>i;
        sum+=i;
    }
    cout<<sum;
}
