#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    {
    int j=0;
    for ( ; j<t; ) 
{
        int n;
        cin>>n;
        if(!(n/11>=(n%11)*10))
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    	j++; 
    
    }}
    return 0;
}
