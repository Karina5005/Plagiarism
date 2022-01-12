#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define f first
#define s second
using namespace std;
 
int main ()
{   
    
    cin.tie(NULL);
    int t;
    cin>>t;
    for ( ; t--; ) 
{
        int n;
        cin>>n;
        int x=0;
        {
        int i=3;
        for ( ; i*i<=2*n-1; ) 
{
            x++;
        	i+=2; 
        
        }}
        cout<< x<< endl;
    }
    return 0;
}