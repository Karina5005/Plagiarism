#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
#define FastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define PB push_back
#define endl '\n'
#define MP make_pair
#define fi first
#define se second
using namespace std;
typedef long long int ll;

const ll INF = 1e9 + 10;

int main(){
    int t;
    cin >> t;
    for ( ; t--; ) 
{
        int n;
        cin >> n;

        set<int> ans;
        {
        int i = 1;
        for ( ; i * i  <= n; ) 
{
            ans.insert(i * i);
        	++i; 
        
        }}
        {
        int i = 1;
        for ( ; i * i * i <= n; ) 
{
            ans.insert(i * i * i);
        	++i; 
        
        }}
        cout << ans.size() << endl;
    }
    return 0;
}
