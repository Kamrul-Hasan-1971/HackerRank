#include<bits/stdc++.h>
using namespace std;
#define           CIN              ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define           ll               long long int
#define           pb               push_back


map<string,ll>mp;
int main()
{
    CIN;
    ll a,b,c,i,j;
    string s,s1;
    cin>>a;
    for(i=0; i<a; i++)
    {
        cin>>s;
        if(s[0]=='a')
        {
            cin>>s1;
            string s3="";
            for(j=0; j<s1.size(); j++)
            {
                s3+=s1[j];
                mp[s3]++;
            }
        }
        else
        {
            cin>>s1;
            cout<<mp[s1]<<endl;
        }
    }
    return 0;
}
