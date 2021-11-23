#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
/*------------------------------------------------------------------------------------------*/
typedef long long ll;
typedef long double ld;
//typedef pair<int, int> iPair;
#define int long long
#define rep(i,a,b) for(int i=(a); i<(b); i++)
#define repd(i,a,b) for(int i=(b)-1; i>=(a); i--)
#define trav(a,x) for(auto& a:x)

#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound

#define sz(x) (int)x.size()
#define beg(x) x.begin()
#define en(x) x.end()
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const ll INF = 1e18;
const ld PI = 4*atan((ld)1);
const ll MOD = 1000000007;
/*------------------------------------------------------------------------------------------*/
int nCr(int n, int k){int res=1;if(k>n-k) k=n-k;
    {
    int i=0;
    while (i<k) {
    res*=(n-i),res/=(i+1);
    i++; 
    
    }}return res;}
int expo(int a, int b, int M=MOD){int res=1;while(b){if(b%2==1) res=res*a%M;b=b/2;a=a*a%M;}
    return (res+M)%M;}
/*------------------------------------------------------------------------------------------*/

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    fastio;
    int n,m;
    cin >> n >> m;
    vector<int> v(n+1,0);
    int a,b;
    int ans=n;
    rep(i,0,m){
        cin >> a >> b;
        if(a>b) swap(a,b);
        if(v[a]==0) ans--;
        v[a]++;
    }
    int q;
    cin >> q;
    while(q--){
        int k;
        cin >> k;
        if(k==1){
            cin >> a >> b;
            if(a>b) swap(a,b);
            if(v[a]==0) ans--;
            v[a]++;
        }
        else if(k==2){
            cin >> a >> b;
            if(a>b) swap(a,b);
            v[a]--;
            if(v[a]==0) ans++;
        }
        else{
            cout << ans << endl;
        }
    }
    return 0;
}