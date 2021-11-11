// solving mathematical equation gives x1 + x2 = (total)/2
#include <bits/stdc++.h> 
#include <complex>
#include <cmath>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair 
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())


int main()
{
    fast_cin();
    ll test;
    cin >> test;
    while(test--){
        int n; 
        cin>>n; 
        vector<int> v(n); 
        for(int i=0;i<n;i++) cin>>v[i]; 
        ll sum =0; 
        for(auto &i: v) sum += i; 
        sum *= 2; 
        if(sum%n){
            // cout<<"can't find"<<endl; 
            cout<<0<<endl; 
        }
        else{
            sum /= n; 
            map<int,int> nums; 
            // cout<<sum<<endl; 
            long long ans =0; 
            for(int i=0;i<n;i++){
                if(nums.find(sum - v[i]) != nums.end()){
                    // cout<<"found "<<v[i]<<endl; 
                    ans += nums[sum - v[i]]; 
                }
                if(nums[v[i]]){
                    nums[v[i]]++; 
                }
                else{
                    nums[v[i]] = 1; 
                }
            }
            cout<<ans<<endl; 
        }
    }
    return 0;
}