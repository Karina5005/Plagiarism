#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string y,p;
        int n,cnt=0;
        cin>>n;
        cin>>y;
        cin>>p;
        for(int i=0;i<n;i++)
        {
            if(y[i]=='1'&&p[i]=='1')
            cnt++;

        }
        if(cnt!=0)
        cout<<"NO"<<'\n';
        else
        cout<<"YES"<<'\n';
    }
    return 0;
}