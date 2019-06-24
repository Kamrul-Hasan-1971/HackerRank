#include<bits/stdc++.h>
using namespace std;
#define           CIN              ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define           ll               long long int
#define           pb               push_back
#define           pii              pair < ll, ll>

multiset<ll>ms;
multiset<ll>:: iterator it;
int main()
{
    CIN;
    ll a,b,c,i,j;
    cin>>a;
    for(i=0; i<a; i++)
    {
        cin>>b;
        if(b==1)
        {
            cin>>c;
            ms.insert(c);
        }
        else if(b==2)
        {
            cin>>c;
            it=ms.lower_bound(c);
            ms.erase(it);
        }
        else
        {
            it=ms.begin();
            cout<<*it<<endl;
        }
    }
    return 0;
}
