//https://codeforces.com/problemset/problem/1548/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>mp;
    int n,m;cin>>n>>m;
    int ans=n;
    {
    int i=0;
    while (i<m) {
        int a,b;cin>>a>>b;
        if(mp[min(a,b)]==0) 
        ans--;
        mp[min(a,b)]++;

    	i++; 
    
    }}
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