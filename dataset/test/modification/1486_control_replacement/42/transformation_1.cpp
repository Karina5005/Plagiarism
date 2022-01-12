#include <iomanip>
#include <iostream>
#include "bits/stdc++.h"
using namespace std;

#define MOD 1000000007
#define endl "\n"

void solve(){
    int n;
    cin >> n;
    int arr[n];
    {
    int i = 0;
    for ( ; i < n; ) 
{
        cin >> arr[i];
        i++; 
        
        }}
    long long need = 0, sum = 0;
    {
    int i = 0;
    for ( ; i < n; ) 
{
        need += i;
        sum += arr[i];
        if(sum < need){
            cout << "NO" << endl;
            return;
        }
    	i++; 
    
    }}
    cout << "YES" << endl;
}

int main(){
    
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    for ( ; t--; ) 
solve();
    return 0;
}
