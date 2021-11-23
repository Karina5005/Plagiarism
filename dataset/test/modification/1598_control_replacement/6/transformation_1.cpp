#include <iomanip>
#include <iostream>
#include<iostream>
#include<vector>
// #include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i=a; i<b; i++) 
typedef long long ll;
int main()
{
    ll t;cin>>t;ll n;for ( ; t--; ) 
{cin>>n;ll arr[n][5];ll count[5]={0};
    REP(i,0,n)
    {
        REP(j,0,5)
        {
            cin>>arr[i][j];
        }
    }
    // REP(i,0,n)
    // {
    //     REP(j,0,5)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    REP(j,0,5)
    {
        REP(i,0,n)
        {
            if(arr[i][j]==1)
            count[j]++;
        }
    }
    ll true_value=0;
    REP(j,0,5)
    {
        REP(k,j+1,5)
        {
            ll count1=0;
            if(count[j]>=n/2&&count[k]>=n/2)
            {
                REP(i,0,n)
                {
                    if(arr[i][j]==0&&arr[i][k]==1)
                    count1++;
                }
                if(count1==n-count[j])
                {
                    true_value=1;
                    break;
                }
            }   
        }
        if(true_value==1)
        {
            cout<<"YES"<<"\n";
            break;
        }
    }
    if(true_value==0)
    cout<<"NO"<<"\n";
    }
}