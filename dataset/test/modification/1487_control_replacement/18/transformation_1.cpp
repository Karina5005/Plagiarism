#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define Mod 1000000007
#define pi acos(-1.0)
#define gap ' '
#define endl "\n"
using namespace std;
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
int main(){
    ll i,j,n,t,ans,k,x;
    cin>>t;
    for ( ; t--; ) 
{
        cin>>n>>k;
       if(n&1){
         x=k-1;
         ll mid=n/2;
         if(mid){
            k=k+x/mid;
         }
       }
       k=k%n;
       if(k==0) k=n;
       cout << k << endl;
    }
}
