#include<bits/stdc++.h>
using namespace std;
#define           ull              unsigned long long int
#define           ll              long long int
#define           pb               push_back
#define           pii              pair<ll,ll>
#define           mx               100005
vector<ll>v,v1;
int main()
{
    ll a,b,c,i,sum1=0,sum2=0;

    for(i=0;i<3;i++){
        cin>>b;
        v.pb(b);
    }
    for(i=0;i<3;i++){
        cin>>b;
        v1.pb(b);
    }
    for(i=0;i<3;i++){
        if(v[i]>v1[i])
        {
            sum1++;
        }
        else if(v[i]<v1[i]){
            sum2++;
        }
    }
    cout<<sum1<<" "<<sum2;
}
