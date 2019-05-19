#include<bits/stdc++.h>
using namespace std;

#define           CIN              ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define           ll               long long int
#define           ull              unsigned long long int
#define           pii              pair < ll, ll>
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
#define           PI               3.141592653589793238462643
#define     rep( i , a , b )       for( i=a ; i<b ; i++)
#define     rev( i , a , b )       for( i=a ; i>=b ; i--)
#define     repx( i ,a,b, x)       for( i=a ; i<b ; i+=x)
#define       CASEL(t)             printf("Case %d:\n",t)
#define     RUN_CASE(t,T)          for(__typeof(t) t=1;t<=T;t++)
#define        zero(a)             memset(a,0,sizeof a)
///priority_queue<int,vector<int>,greater<int> >pq;
///--------------Graph Moves--------------------------------------
///const int fx[] = {+1,-1,+0,+0};
///const int fy[] = {+0,+0,+1,-1};
/// int fx[] = {+0,+0,+1,-1,-1,+1,-1,+1}; ///King's move
///const int fy[] = {-1,+1,+0,+0,+1,+1,-1,-1}; ///king's Move
///const int fx[] = {-2,-2,-1,-1,+1,+1,+2,+2}; ///knight's move
///const int fy[] = {-1,+1,-2,+2,-2,+2,-1,+1}; ///knight's move
///---------------------------------------------------------------



int main()
{
    ll a,b,c,d,i,j,n,p,q;
    cin>>n;
    ll ara[n][n];
    ll visited[n][n];
    ll level[n][n];
    queue<pii>qu;

    for(p=1; p<n; p++)
    {
        for(q=1; q<n; q++)
        {
            int fx[]= {-p,-p,-q,-q,+q,+q,+p,+p};
            int fy[]= {-q,+q,-p,+p,-p,+p,-q,+q};

            for(i=0; i<qu.size(); i++)
            {
                qu.pop();
            }
            for(int i=0; i<n; i++)
            {
                for(j=0; j<n; j++)
                {
                    level[i][j]=0;
                    visited[i][j]=0;
                }
            }

            visited[0][0]=1;
            level[0][0]=0;
            qu.push(pii(0,0));

            while(!qu.empty())
            {
                pii p=qu.front();
                qu.pop();

                ll a=p.first;
                ll b=p.second;

                for(ll i=0; i<8; i++)
                {
                    ll xx=a+fx[i];
                    ll yy=b+fy[i];

                    if(xx>=0 && xx<n && yy>=0&&yy<n  && visited[xx][yy]==0)
                    {
                        level[xx][yy]=level[a][b]+1;
                        visited[xx][yy]=1;
                        qu.push(pii(xx,yy));
                    }
                }
            }
            if(visited[n-1][n-1]==0)
            {
                cout<<-1<<" ";
            }
            else
            {
                cout<<level[n-1][n-1]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
