#include<bits/stdc++.h>
using namespace std;
#define           ll               long long int
#define           pb               push_back
#define           pii              pair<ll,ll>
#define           mx               100005


vector<ll>v,v1;

int main()
{
    ll a,b,c,d,e,m=0,n,i,j,k,p=0;
    cin>>a;
    for(i=0;i<a;i++){
        cin>>b>>c;
        v.pb(b);
        v1.pb(c);
    }
    for(i=0;i<a;i++){
        p=p+v[i]-v1[i];

        if(p<0){
            p=0;
            m=i+1;
        }
    }
    cout<<m<<endl;

    return 0;
}
