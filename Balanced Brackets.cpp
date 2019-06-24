#include<bits/stdc++.h>
using namespace std;
#define           CIN              ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define           ll               long long int
#define           pb               push_back

int main()
{
    CIN;
    ll a,b,c,i,d,sum,chk,j,cnt;
    cin>>a;
    for(i=0; i<a; i++)
    {
        cnt=0;
        chk=0;
        string s;
        stack<char>stk;
        cin>>s;
        for(j=0; j<s.size(); j++)
        {
            if(s[j]=='(' || s[j]=='{' || s[j]=='[')
            {
                stk.push(s[j]);
                cnt++;
            }
            else
            {
                cnt--;
                if(cnt<0)
                {
                    chk=1;
                    break;
                }
                char ss=stk.top();
                stk.pop();
                if(s[j]=='}' && ss=='{')
                    continue;
                else if(s[j]==')' && ss=='(')
                    continue;
                else if(s[j]==']' && ss=='[')
                    continue;
                else
                {
                    chk=1;
                    break;
                }
            }

        }
        if(stk.empty() && chk==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
