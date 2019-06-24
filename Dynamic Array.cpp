#include<bits/stdc++.h>
using namespace std;
#define           CIN              ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define           ll               long long int
#define           pb               push_back
#define           pii              pair < ll, ll>

vector<ll>v[1000006];
int main()
{
    CIN;
    ll N,Q,c,d,x,y,i,j,cnt=0,sum=0,chk=0,lastanswer=0,id;
    cin>>N>>Q;
    for(i=0; i<Q; i++)
    {
        cin>>d>>x>>y;
        if(d==1){
            ll p=(x^lastanswer)%N;
            v[p].pb(y);
        }
        else{
            ll p=(x^lastanswer)%N;
            id=y%(v[p].size());
            lastanswer=v[p][id];
            cout<<lastanswer<<endl;
        }
    }
    return 0;
}
