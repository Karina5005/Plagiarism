/**
    Bismillahirrahmanir Rahim
       Author: Ahsan Habib
**/
#include<bits/stdc++.h>
#define pii          pair<ll,ll >
#define In freopen("ahsan.txt","r",stdin);
#define ll long long
#define ff first
#define ss second
#define bug(a) cerr << #a << " : " << a << endl
#define MOD 1000000007
#define inf 999999999999
#define MAX 100002
using namespace std;
ll n,m, b,c,d;
ll a[MAX+5];


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
//  In
    int rc;
    cin>>rc;
    while(rc--)
    {
        int c;
        cin>>c;
        string msb,yhf;
        cin>>msb>>yhf;
        if(c==1 && msb==yhf)
        {
            cout<<"YES"<<endl;
            continue;

        }
        else if(c==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        int u_tni = 0,nk =0,utx = 0;
        for(auto n : msb)
        {
            if(n=='1')nk++;
            else u_tni++;
        }
        for(int ey = c - 1; ey>=0; ey--)
        {

            if(msb[ey]==yhf[ey])
            {
                while(msb[ey]==yhf[ey] && ey>=0)
                {
                    if(msb[ey]=='1')nk--;
                    else u_tni--;
                    ey--;
                }

            }
            else
            {
                if(u_tni!=nk)
                {
                    utx = 1;
                    break;
                }

                while(msb[ey]!=yhf[ey]&& ey>=0)
                {
                    if(msb[ey]=='1')nk--;
                    else u_tni--;
                    ey--;
                }

            }

            //    bug(one);
            //  bug(zero);

            ey++;
            if(u_tni!=nk)
            {
                utx = 1;
                break;
            }

        }
        if(!utx)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
