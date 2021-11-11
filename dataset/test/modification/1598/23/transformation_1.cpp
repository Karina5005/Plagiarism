#include <bits/stdc++.h>
using namespace std;
#define int long long


  



#define pf push_front
#define pb push_back
#define FOR(i,l,r) for(int i=l;i<r;i++)
#define ROF(i,r,l) for(int i=r;i>=l;i--)
#define all(v) (v).begin(),(v).end()
#define ff first
#define ss second
#define setbits __builtin_popcount
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector<pair<int,int>> vpi;
typedef vector<vi> vvi;

const int M = 1e9+7;
const int N = 2e5;
int po(int,int);


void solve(){
    int n;
    cin>>n;
    vpi v;
    int fr[n+1] = {0},Fr[n+1] = {0};
    FOR(i,0,n){
        int a,b;
        cin>>a>>b;
        Fr[a]++;
        fr[b]++;
        v.pb({a,b});
    }
    sort(all(v));
    int ans = 0;
    int sum = fr[v[0].ss];
    int id = 1;
    int x;
    while(id < n){
        /* 'if' begin */
        if(v[id].ff == v[id-1].ff)/* 'if' inside */
        {
            sum += fr[v[id].ss];
        }
        else{
            x = Fr[v[id-1].ff];
            /* 'if' begin */
            if(x>=2) /* 'if' inside */
            ans += (x-1)*(sum) - x*(x-1);
            sum = fr[v[id].ss];
        }
        id++;
    }
    x = Fr[v[id-1].ff];
    ans += (x-1)*(sum) - x*(x-1);
    cout<< (n*(n-1)*(n-2))/6 - ans <<"\n";
    
}




int32_t main() {
   
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
    
   #ifndef ONLINE_JUDGE 
   freopen("input.txt", "r", stdin);  
   freopen("output.txt", "w", stdout); 
   #endif 

    int t=1;
    cin>>t;
    FOR(i,1,t+1){
        
        solve();
        
    }
    
    return 0;
    
    
}


int po(int a,int b){
    /* 'if' begin */
    if(b==0) /* 'if' inside */
    return 1;
    int ans=1;
    /* 'if' begin */
    if(b%2==0)/* 'if' inside */
    {
        ans = po(a,b/2)%M;
        ans=(ans%M * ans%M)%M;
    }
    else{
        ans = po(a,(b-1)/2)%M;
        ans = (ans%M * ans%M * a)%M;
    }
    return ans%M;
}
