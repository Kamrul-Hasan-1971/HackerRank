#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<typename T> using orderset = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;
#define           ll               long long int
#define           pb               push_back
#define           pii              pair<ll,ll>
#define           mx               100005
ll ara[100005];
struct sara
{
    ll value,id;

    sara(ll x,ll y)
    {
        value=x;
        id=y;
    }

    bool operator<(const sara & has)const
    {
        if(value==has.value)
        {
            return id<has.id;
        }
        else{
            return value<has.value;
        }
    }
};

orderset<sara>pp;
int main()
{
    ll a,i,x;
    cin>>a;
    for(i=1;i<=a;i++){
        cin>>x;
        ara[x]++;
        pp.insert(sara(x,ara[x]));

        if(i==1){
            double xx=x;
            printf("%0.1f\n",xx);
        }
        else if(i%2==0){
            ll p=i/2;
            ll q=p-1;
            double m,n,o;
            m=(*pp.find_by_order(p)).value;
            n=(*pp.find_by_order(q)).value;
            o=(m+n)/2.0;
            printf("%0.1f\n",o);
        }
        else{
            ll p=i/2;
            double m;
            m=(*pp.find_by_order(p)).value;
            printf("%0.1f\n",m);
        }
    }
}
