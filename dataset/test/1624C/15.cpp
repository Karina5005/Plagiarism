#include <bits/stdc++.h>
#define int               long long
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define all(x)            (x).begin(),(x).end()
#define sz(x)             (int)((x).size())
#define fr                first
#define sc                second
#define pii               pair<int,int>
#define rep(i,a,b)        for(int i=a;i<b;i++)
#define ld                long double
#define ll                long long
#define IOS std::ios::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define ff first
#define ss second
#define MOD 1000000007
using namespace std;
 
bool comp(pair<int,int> i,pair<int,int> j){
    return i.ff<j.ff;
}
ll power(ll x, ll y, ll p){ //positive y
    ll res = 1;
    x = x % p; 
    while (y > 0) { 
        if (y & 1) 
            res = (res*x) % p; 
        y = y>>1; // y = y/2 
        x = (x*x) % p;   
    } 
    return res; 
}

bool check(vector<pair<int,int>>vect,int mid){
    int count=0;
    for(int i=0;i<vect.size();i++){
        if(mid-count-1<=vect[i].ff&&count<=vect[i].ss)count++;
    }
    if(count>=mid)return true;
    return false;
}
void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>vectaa(n+1,-1);
    for(int i=0;i<n;i++){
        while(arr[i]>0){
            if(arr[i]<=n&&vectaa[arr[i]]==-1){
                vectaa[arr[i]]=1;
                break;
            }
            arr[i]/=2;
        }
    }
    bool check=true;
    for(int j=1;j<=n;j++){
        if(vectaa[j]==-1){check=false;break;}
    }
    if(check)cout<<"Yes"<<"\n";
    else cout<<"No"<<"\n";

}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    IOS;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}