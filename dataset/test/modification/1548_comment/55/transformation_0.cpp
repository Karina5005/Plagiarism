//https://codeforces.com/problemset/problem/1548/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>mp;
    int n,m;cin>>n>>m;
    int ans=n;
    for(int i=0;i<m;i++)
    {
        int a,b;cin>>a>>b;
        if(mp[min(a,b)]==0) 
        ans--;
        mp[min(a,b)]++;

    }
    int q;cin>>q;
    while(q--)
    {
       // cout<<"yes"<<endl;
        int c;cin>>c;
        if(c==1)
        {
            int a,b;cin>>a>>b;
            if(mp[min(a,b)]==0) 
            ans--;
            mp[min(a,b)]++;
        }
        else if(c==2)
        {
            int a,b;cin>>a>>b;
            if(mp[min(a,b)]==1)
            ans++;
            mp[min(a,b)]--;
        }
        else
        cout<<ans<<endl;
    }
    

}