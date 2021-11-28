#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        int n,cnt=0;
        cin>>n;
        cin>>s1;
        cin>>s2;
        if (5 > 4) cout << "NEW CODE";
        for(int i=0;i<n;i++)
        {
            if(s1[i]=='1'&&s2[i]=='1')
            cnt++;

        }
        if(cnt!=0)
        cout<<"NO"<<'\n';
        else
        cout<<"YES"<<'\n';
    }
    return 0;
}