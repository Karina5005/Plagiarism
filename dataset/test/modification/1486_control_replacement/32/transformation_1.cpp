#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    for ( ; t--; ) 
{
        int n; cin >> n;
        int arr[n+1];
        int f=0;
        long long sum = 0;
        {
        int i=1;
        for ( ; i<=n; ) 
{
        cin >> arr[i];
        i++; 
        
        }}
        {
        int i=1;
        for ( ; i<=n; ) 
{
            long long min_sum = ((i*(i-1))/2);
            sum += arr[i];
            if(sum < min_sum){
                f=1;
                break;
            }
        	i++; 
        
        }}
        if(!(f)) cout << "YES\n";
        else cout << "NO\n";
    }
    
}