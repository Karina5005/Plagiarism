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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s,s1;
        cin>>s>>s1;
        if(n==1 && s==s1)
        {
            cout<<"YES"<<endl;
            continue;

        }
        else if(n==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        int zero = 0,one =0,f = 0;
        for(auto i : s)
        {
            if(i=='1')one++;
            else zero++;
        }
        for(int i = n - 1; i>=0; i--)
        {

            if(s[i]==s1[i])
            {
                while(s[i]==s1[i] && i>=0)
                {
                    if(s[i]=='1')one--;
                    else zero--;
                    i--;
                }

            }
            else
            {
                if(zero!=one)
                {
                    f = 1;
                    break;
                }

                while(s[i]!=s1[i]&& i>=0)
                {
                    if(s[i]=='1')one--;
                    else zero--;
                    i--;
                }

            }

            //    bug(one);
            //  bug(zero);

            i++;
            if(zero!=one)
            {
                f = 1;
                break;
            }

        }
        if(!f)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
