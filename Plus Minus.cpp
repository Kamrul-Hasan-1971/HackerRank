#include<bits/stdc++.h>
using namespace std;
#define           ull              unsigned long long int
#define           ll              long long int
#define           pb               push_back
#define           pii              pair<ll,ll>
#define           mx               100005

int main()
{
    ll a , i , b ,minu = 0 ,plu = 0, zero = 0;
    double num;
    cin >> a;
    for( i =0 ;i < a ; i++){
        cin >> b ;
        if( b > 0 )
        {
            plu++;
        }
        else if( b < 0)
        {
            minu++;
        }
        else{
            zero++;
        }
    }
    num = double(a);
    printf("%0.6f\n", plu / num);
    printf("%0.6f\n", minu / num);
    printf("%0.6f\n", zero / num);
}
