#include<bits/stdc++.h>
using namespace std;
#define           CIN              ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define           ll               long long int
#define           pb               push_back
vector<ll>v1,v2,v3,res;

int main()
{
    CIN;
    ll a,b,c,i,d,sum;
    cin>>a>>b>>c;
    sum=0;
    for(i=0;i<a;i++){
        cin>>d;
        v1.pb(d);
    }
    reverse(v1.begin(),v1.end());
    for(i=0;i<a;i++){
        sum=sum+v1[i];
        res.pb(sum);
    }
    sum=0;
    for(i=0;i<b;i++){
        cin>>d;
        v2.pb(d);
    }
    reverse(v2.begin(),v2.end());
    for(i=0;i<b;i++){
        sum=sum+v2[i];
        res.pb(sum);
    }
    sum=0;
    for(i=0;i<c;i++){
        cin>>d;
        v3.pb(d);
    }
    reverse(v3.begin(),v3.end());
    for(i=0;i<c;i++){
        sum=sum+v3[i];
        res.pb(sum);
    }
    res.pb(0);
    res.pb(0);
    res.pb(0);
    sort(res.rbegin(),res.rend());
    for(i=0;i<res.size()-2;i++){
        a=res[i];
        b=res[i+1];
        c=res[i+2];
        if(a==b && b==c){
            cout<<a;
            return 0;
        }
    }
    return 0;
}
