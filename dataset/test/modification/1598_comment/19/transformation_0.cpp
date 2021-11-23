#include <bits/stdc++.h>
 
#define vpll vector<pair<ll, ll>>
#define rep(i, n) for (ll i = 0; i < n; i++)
#define vll vector<ll>
#define ll long long int
#define dd double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rev(v) reverse(v.begin(), v.end())
#define srt(v) sort(v.begin(), v.end())
#define grtsrt(v) sort(v.begin(), v.end(), greater<ll>())
#define mnv(v) *min_element(v.begin(), v.end())
#define mxv(v) *max_element(v.begin(), v.end())
#define mod 1000000007
 
using namespace std;
 
void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

 
void solve()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n][5];
        rep(i,n){
            rep(j,5){
                cin>>a[i][j];
            }
        }
        ll b=0;
        rep(i,5){
            for(ll j=i+1;j<5;j++){
                ll z=0,x=0,c=0;
                rep(k,n){
                    z=z+a[k][i];
                    x=x+a[k][j];
                    c=c+(a[k][j]*a[k][i]);
                }
                if(z+x-c==n && z>=n/2 && x>=n/2){
                    cout<<"YES"<<endl;
                    b=1;
                    break;
                }
            }
            if(b==1){
                break;
            }
        }
        if(b==0){
            cout<<"NO"<<endl;
        }
    }
}
 
int main()
{
    fast();
    solve();
}