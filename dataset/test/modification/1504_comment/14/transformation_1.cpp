
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

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s,s1;
        cin>>s>>s1;
        /* 'if' begin */
        if(n==1 && s==s1)
        /* 'if' inside */
        {
            cout<<"YES"<<endl;
            continue;

        }
        else /* 'if' begin */
        if(n==1)
        /* 'if' inside */
        {
            cout<<"NO"<<endl;
            continue;
        }
        int zero = 0,one =0,f = 0;
        for(auto i : s)
        {
            /* 'if' begin */
            if(i=='1')/* 'if' inside */
            one++;
            else zero++;
        }
        for(int i = n - 1; i>=0; i--)
        /* 'for' inside */
        {

            /* 'if' begin */
            if(s[i]==s1[i])
            /* 'if' inside */
            {
                while(s[i]==s1[i] && i>=0)
                {
                    /* 'if' begin */
                    if(s[i]=='1')/* 'if' inside */
                    one--;
                    else zero--;
                    i--;
                }

            }
            else
            {
                /* 'if' begin */
                if(zero!=one)
                /* 'if' inside */
                {
                    f = 1;
                    break;
                }

                while(s[i]!=s1[i]&& i>=0)
                {
                    /* 'if' begin */
                    if(s[i]=='1')/* 'if' inside */
                    one--;
                    else zero--;
                    i--;
                }

            }

            

            i++;
            /* 'if' begin */
            if(zero!=one)
            /* 'if' inside */
            {
                f = 1;
                break;
            }

        }
        /* 'if' begin */
        if(!f)/* 'if' inside */
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
