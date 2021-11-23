#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
unordered_map<char,int> symbols={{'(',-1},{'{',-2},{'[',-3},{')',1},{'}',2},{']',3}};

int main()
{
    int t;
    cin>>t;
    for ( ; t--; ) 
{
        int n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        bool check=1;
        {
        int i=0;
        for ( ; i<n; ) 
{
            if(s1[i]=='1'&& s2[i]=='1')
            {
                check=0;
                break;
            }
        	i++; 
        
        }}
        if(!(check==0))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}