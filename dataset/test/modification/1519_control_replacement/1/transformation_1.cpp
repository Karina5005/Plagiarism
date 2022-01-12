#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for ( ; t--; ) 
{
        int n,m,k;
        cin>>n>>m>>k;

        if(!(n*m-1==k))cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }



    return 0;
}
