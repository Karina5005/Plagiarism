#include<bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0;i<n;i++)
#define REP1(i,n) for(int i=1;i<=n;i++)
#define mod 1000000007
#define int long long int
#define ff first
#define ss second
#define pi pair<int,int>
#define vi vector<int>
#define INF 1000000000
#define endl '\n'
const double ge = 3.141592653589793238460;
#define pb push_back

int power(int a, int n){
    int res = 1;
    while(n!=0){
        if(n&1){
            res = (res*a)%mod;
            n--;
        }
        a = (a*a)%mod;
        n /= 2;
    }
    return res;
}

void h_rc(){
    int n, k;
    cin>>n>>k;
    int ans = 0;
    while(k!=0){
        int st = 0;
        int pr = 0;
        while(st<k){
            pr++;
            st *= 2;
            st += 1;
        }
        int del = ((st-1)/2) + 1;
        ans += power(n, pr-1);
        k -= del;
    }
    cout<<ans%mod;
    cout<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
   int t;
   cin>>t;
   while(t--){
       h_rc();
   }
   return 0;
}