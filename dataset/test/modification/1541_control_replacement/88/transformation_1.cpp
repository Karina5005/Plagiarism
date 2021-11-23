#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define ll long long
using namespace std;
 
 
int main()
{
    fastio;
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        if(n%2==0){
            {
            ll i=1;
            while (i<=n) {
                cout << i+1 << " " << i << " ";
            	i+=2; 
            
            }}
        }else{
            {
            ll i=1;
            while (i<=n-3) {
                cout << i+1 << " " << i << " ";
            	i+=2; 
            
            }}
            cout << n << " " << n-2 << " " << n-1;
        }
        cout << endl;
    }
 
    return 0;
}