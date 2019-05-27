#include<bits/stdc++.h>
using namespace std;

#define           CIN              ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define           ll               long long int
#define           ull              unsigned long long int
#define           pii              pair < int, int>
#define           pll              pair < ll, ll>
#define           MOD              1000000007
#define           vi               vector<int>
#define           vl               vector<ll>
#define           pb               push_back
#define           sc               scanf
#define           pf               printf
#define         scin(x)            scanf("%d",&(x))
#define        scin2(x,y)          scanf("%d %d",&(x),&(y))
#define         scln(x)            scanf("%lld",&(x))
#define        scln2(x,y)          scanf("%lld %lld",&(x),&(y))
#define       min3(a,b,c)          min(a,min(b,c))
#define       min4(a,b,c,d)        min(d,min(a,min(b,c)))
#define       max3(a,b,c)          max(a,max(b,c))
#define       max4(a,b,c,d)        max(d,max(a,max(b,c)))
#define         ms(a,b)            memset(a,b,sizeof(a))
#define           mp               make_pair
#define       gcd(a, b)            __gcd(a,b)
#define       lcm(a, b)            ((a)*(b)/gcd(a,b))
#define         input              freopen("input.txt","rt", stdin)
#define         output             freopen("output.txt","wt", stdout)
#define           PI               2*acos(0.0)
#define     rep( i , a , b )       for( i=a ; i<b ; i++)
#define     rev( i , a , b )       for( i=a ; i>=b ; i--)
#define     repx( i ,a,b, x)       for( i=a ; i<b ; i+=x)
#define       CASEL(t)             printf("Case %d:\n",t)
#define     RUN_CASE(t,T)          for(__typeof(t) t=1;t<=T;t++)
#define       zero(a)              memset(a,0,sizeof a)

///priority_queue<int,vector<int>,greater<int> >pq;
///--------------Graph Moves--------------------------------------
///const int fx[] = {+1,-1,+0,+0};
///const int fy[] = {+0,+0,+1,-1};
///const int fx[] = {+0,+0,+1,-1,-1,+1,-1,+1}; ///King's move
///const int fy[] = {-1,+1,+0,+0,+1,+1,-1,-1}; ///king's Move
///const int fx[] = {-2,-2,-1,-1,+1,+1,+2,+2}; ///knight's move
///const int fy[] = {-1,+1,-2,+2,-2,+2,-1,+1}; ///knight's move
///---------------------------------------------------------------



vector<ll>v;
int main()
{
    ll q,a,b,i,j,cnt=0,chk=0,ini,nw;
    string s,s2="",s3="";
    stringstream ss;
    cin>>a;


    while(a--)
    {
        s2="";
        cin>>s;
        for(i=0; i<s.size(); i++)
        {
            chk=0;
            v.clear();
            ss.clear();
            s3="";
            s2=s2+s[i];
            ss<<s2;
            ss>>ini;
            v.pb(ini);

            for(j=i+1; j<s.size(); j++)
            {
                ss.clear();
                s3=s3+s[j];
                ss<<s3;
                ss>>nw;
                if(nw>v.back())
                {
                    v.pb(nw);
                    s3="";
                }
            }
            for(j=0; j<v.size()-1; j++)
            {
                if(v[j]!=v[j+1]-1)
                {
                    chk=1;
                    break;
                }
            }
            if(v.size()==1 || s3.size()!=0){
                chk=1;
            }
            if(chk==0)
            {
                break;
            }
        }
        if(s[0]=='0'){
            chk=1;
        }
        if(chk==0)
        {
            cout<<"YES "<<v[0]<<endl;
        }
        else
        {
            cout<<"NO\n";
        }

    }

    return 0;
}
