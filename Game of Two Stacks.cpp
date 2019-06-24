#include<bits/stdc++.h>
using namespace std;
#define           ll               long long int
#define           pb               push_back
#define           pii              pair<ll,ll>
#define           mx               100005


vector<ll>v,v1,res;

int main()
{
    ll a,b,c,d,e,m,n,i,j,k;

    cin>>a;
    for(k=0; k<a; k++)
    {
        cin>>b>>c>>d;
        ll sum=0;

        for(i=0; i<b; i++)
        {
            cin>>e;
            sum=sum+e;
            v.pb(sum);
        }


        ll sum1=0;
        for(i=0; i<c; i++)
        {
            cin>>e;
            sum1=sum1+e;
            v1.pb(sum1);
        }


        for(j=0; j<b; j++)
        {
            ll p=d-v[j];
            if(p<v1[0])
            {
                res.pb(j+1);
                break;
            }
            ll q=upper_bound(v1.begin(),v1.end(),p)-v1.begin();
            res.pb(q+j+1);
        }



        for(j=0; j<c; j++)
        {
            ll p=d-v1[j];
            if(p<v[0])
            {
                res.pb(j+1);
                break;
            }
            ll q=upper_bound(v.begin(),v.end(),p)-v.begin();
            res.pb(q+j+1);
        }


        ll p=upper_bound(v.begin(),v.end(),d)-v.begin();
        res.pb(p);


        ll q=upper_bound(v1.begin(),v1.end(),d)-v1.begin();
        res.pb(q);

        if(res.size()==0 || v[0]>d && v1[0]>d)
        {
            cout<<0<<endl;
        }
        else
        {
            sort(res.rbegin(),res.rend());
            cout<<res[0]<<endl;
        }
        res.clear();
        v.clear();
        v1.clear();
    }
    return 0;
}
