#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ull;
typedef unsigned short us;
typedef unsigned int ui;
typedef long long int ll;

int main()
{
    
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;

    for ( ; t--; ) 
{
        int n;
        cin>>n;

        ll sum=0,a;
        bool ans = true;
        {
        int i = 1;
        for ( ; i <= n; ) 
{
            cin>>a;
            sum += a;

            if(sum < (i*i-i)/2)
                ans = false;
        	i++; 
        
        }}
        
        if( !(ans) )
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }

    return 0;

}