#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

typedef long long ll;
typedef long double ld;

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

int nCr(int n, int k){int res=1;/* 'if' begin */
if(k>n-k) /* 'if' inside */
k=n-k;
    for(int i=0; i<k; i++) /* 'for' inside */
    res*=(n-i),res/=(i+1);return res;}
int expo(int a, int b, int M=MOD){int res=1;while(b){/* 'if' begin */
if(b%2==1) /* 'if' inside */
res=res*a%M;b=b/2;a=a*a%M;}
    return (res+M)%M;}


signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    fastio;
    int n,m;
    cin >> n >> m;
    vector<int> v(n+1,0);
    vector<int> e(n+1,0);
    int a,b;
    int ans=n;
    rep(i,0,m){
        cin >> a >> b;
        /* 'if' begin */
        if(a>b) /* 'if' inside */
        swap(a,b);
        /* 'if' begin */
        if(v[a]==0) /* 'if' inside */
        ans--;
        v[a]++;
    }
    int q;
    cin >> q;
    while(q--){
        int k;
        cin >> k;
        /* 'if' begin */
        if(k==1)/* 'if' inside */
        {
            cin >> a >> b;
            /* 'if' begin */
            if(a>b) /* 'if' inside */
            swap(a,b);
            /* 'if' begin */
            if(v[a]==0) /* 'if' inside */
            ans--;
            v[a]++;
        }
        else /* 'if' begin */
        if(k==2)/* 'if' inside */
        {
            cin >> a >> b;
            /* 'if' begin */
            if(a>b) /* 'if' inside */
            swap(a,b);
            v[a]--;
            /* 'if' begin */
            if(v[a]==0) /* 'if' inside */
            ans++;
        }
        else{
            cout << ans << endl;
        }
    }
    return 0;
}