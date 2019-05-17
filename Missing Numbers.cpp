#include<bits/stdc++.h>
using namespace std;
#define           ll               long long int
#define           pb               push_back

vector<ll>v;
ll orginal[10004];
ll missing[10004];
int main()
{
    ll a,b,c,d,i,j;
    scanf("%lld",&a);
    for(i=0;i<a;i++){
        scanf("%lld", &b);
        missing[b]++;
    }
    scanf("%lld",&a);
    for(i=0;i<a;i++){
        scanf("%lld", &b);
        orginal[b]++;
    }
    for(i=1;i<=10000;i++){
        if(missing[i]<orginal[i]){
            printf("%lld ",i);
        }
    }
    return 0;
}
