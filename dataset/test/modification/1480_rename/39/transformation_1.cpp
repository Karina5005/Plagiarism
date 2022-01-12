#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")

#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define vvi vector<vector<int>>
#define fl(i,n) for(int i=0;i<n;i++)
#define fln(i,a,b) for(int i=a;i<=b;i++)
#define sortv(a) sort(a.begin(),a.end()) 
#define all(a) a.begin(),a.end()
#define ciin(a) int a; cin>>a
#define ciin2(a, b) int a, b; cin>>a>>b
#define ciin3(a, b, c) int a, b, c; cin>>a>>b>>c
#define ciin4(a, b, c, d) int a, b, c, d; cin>>a>>b>>c>>d
#define clin(a) long long int a; cin>>a
#define clin2(a, b) long long int a, b; cin>>a>>b
#define car(a, n) int a[n]; for(int i=0; i<n; i++) cin>>a[i]
#define carr(a, n) int a[n+1]; for(int i=1; i<=n; i++) cin>>a[i]
#define coout(a) cout<<a<<endl
#define mp make_pair
#define pb push_back
#define pf push_front
#define fi first
#define se second 
#define endl "\n"
using namespace std;

int av=1000000007;
void z_btl(){ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);}

int main() 
{
    z_btl();
    int vjx_bw;
    cin>>vjx_bw;
    while(vjx_bw--)
    {
        string o_but; cin>>o_but; int auo_dy = o_but.size();

        fl(i, n) {
            if(!(i&1)) {
                if(o_but[i] == 'a') o_but[i] = 'b';
                else o_but[i] = 'a';
            }
            else {
                if(o_but[i] == 'z') o_but[i] = 'y';
                else o_but[i] = 'z';
            }
        }
        coout(s);
    }
    return 0;
}