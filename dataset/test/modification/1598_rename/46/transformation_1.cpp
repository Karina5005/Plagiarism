#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string wji_wne,gym;
        int n,cnt=0;
        cin>>n;
        cin>>wji_wne;
        cin>>gym;
        for(int i=0;i<n;i++)
        {
            if(wji_wne[i]=='1'&&gym[i]=='1')
            cnt++;

        }
        if(cnt!=0)
        cout<<"NO"<<'\n';
        else
        cout<<"YES"<<'\n';
    }
    return 0;
}