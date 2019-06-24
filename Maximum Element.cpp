#include<bits/stdc++.h>
using namespace std;

#define           CIN              ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define           ll               long long int
#define           ull              unsigned long long int
#define           pii              pair < ll, ll>
#define           pll              pair < ull, ull>
#define           MOD              1000000007
#define           vi               vector<int>
#define           vl               vector<ll>
#define           pb               push_back

stack<ll>stk;
multiset<ll>ms;
multiset<ll>:: iterator it;
int main()
{
    ll a,b,c,i,j;
    cin>>a;
    for(i=0; i<a; i++)
    {
        cin>>b;
        if(b==1)
        {
            cin>>c;
            stk.push(c);
            ms.insert(c);
        }
        else if(b==2)
        {
            ll top=stk.top();
            it=ms.lower_bound(top);
            stk.pop();
            ms.erase(it);
        }
        else
        {
            it=prev(ms.end());
            cout<<*it<<endl;
        }
    }

}
