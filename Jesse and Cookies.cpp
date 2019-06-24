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
    ll a,b,c,i,j,cnt=0,sum=0,chk=0;
    cin>>a>>b;
    for(i=0; i<a; i++)
    {
        cin>>c;
        ms.insert(c);
    }


    while(1)
    {
        it=ms.begin();
        sum=0;
        if(*it<b)
        {
            if(ms.size()<2)
            {
                chk=1;
                break;
            }
            sum=sum+*it;
            ms.erase(it);
            it=ms.begin();
            sum=sum+(*it)*2;
            ms.erase(it);
            ms.insert(sum);
            cnt++;
        }
        else
        {
            break;
        }
    }

    if(chk==1)
    {
        cout<<-1;
    }
    else
    {
        cout<<cnt;
    }
    return 0;
}
