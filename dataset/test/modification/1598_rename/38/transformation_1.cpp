#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string vjx_bw,o_but;
        int n,cnt=0;
        cin>>n;
        cin>>vjx_bw;
        cin>>o_but;
        for(int i=0;i<n;i++)
        {
            if(vjx_bw[i]=='1'&&o_but[i]=='1')
            cnt++;

        }
        if(cnt!=0)
        cout<<"NO"<<'\n';
        else
        cout<<"YES"<<'\n';
    }
    return 0;
}