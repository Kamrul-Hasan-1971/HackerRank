#include<bits/stdc++.h>
using namespace std;

int ara[7][7];
vector<int>v;

const int fx[] = {+1,-1,+0,+1,+1,-1,-1};
const int fy[] = {+0,+0,+0,+1,-1,+1,-1};


void chk(int x,int y)
{
    int i,sum=0,chk=0;
    for(i=0; i<7; i++)
    {
        int p=x+fx[i];
        int q=y+fy[i];

        if(p>=0 && p<6 && q>=0 && q<6)
        {
            sum=sum+ara[p][q];
        }
        else
        {
            chk=1;
            break;
        }
    }
    if(chk==0)
    {
        v.push_back(sum);
    }
}

int main()
{
    int a,b,i,j;

    for(i=0; i<6; i++)
    {
        for(j=0; j<6; j++)
        {
            cin>>ara[i][j];
        }
    }

    for(i=0; i<6; i++)
    {
        for(j=0; j<6; j++)
        {
            chk(i,j);
        }
    }

    cout<<*max_element(v.begin(),v.end());
}
