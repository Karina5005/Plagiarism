#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string el,dtl_yje;
        int n,cnt=0;
        cin>>n;
        cin>>el;
        cin>>dtl_yje;
        for(int i=0;i<n;i++)
        {
            if(el[i]=='1'&&dtl_yje[i]=='1')
            cnt++;

        }
        if(cnt!=0)
        cout<<"NO"<<'\n';
        else
        cout<<"YES"<<'\n';
    }
    return 0;
}