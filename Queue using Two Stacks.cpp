#include<bits/stdc++.h>
using namespace std;
#define           CIN              ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define           ll               long long int
#define           pb               push_back
#define           pii              pair < ll, ll>

queue<ll>q;
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
            q.push(c);
        }
        else if(b==2)
        {
            if(!q.empty())
            {
                q.pop();
            }
        }
        else
        {
            cout<<q.front()<<endl;
        }
    }
    return 0;
}
