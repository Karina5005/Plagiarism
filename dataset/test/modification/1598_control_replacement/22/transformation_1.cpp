#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;

    for ( ; t--; ) 
{
        int n;cin>>n;

        string s1;cin>>s1;
        string s2;cin>>s2;

        int flag=0;

        {
        int i=0;
        for ( ; i<n; ) 
{
            if(s1[i]=='1' && s2[i]=='1')
                flag=1;
        	i++; 
        
        }}
        if(!(flag==0))
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;

    }

}
