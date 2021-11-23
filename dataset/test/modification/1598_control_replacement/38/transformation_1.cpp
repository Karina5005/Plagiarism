#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    for ( ; t--; ) 
{
        string s1,s2;
        int n,cnt=0;
        cin>>n;
        cin>>s1;
        cin>>s2;
        {
        int i=0;
        for ( ; i<n; ) 
{
            if(s1[i]=='1'&&s2[i]=='1')
            cnt++;

        	i++; 
        
        }}
        if(!(cnt!=0))
        cout<<"YES"<<'\n';
        else
        cout<<"NO"<<'\n';
    }
    return 0;
}