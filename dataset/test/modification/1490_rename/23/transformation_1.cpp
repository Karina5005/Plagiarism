#include <bits/stdc++.h>
#include <set>
#include <map>
// #include <unordered_map>

using namespace std;

#define vi vector<int>
#define vs vector<string>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define ff first
#define ss second
#define setBits(x) built_popcount(x)
#define INtMAX 2147483647
#define ll long long
#define pb push_back
#define mp make_pair
// #define FIO ios::sync_with_stdio(false); cin.tie(0), cout.tie(0);
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
// ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}


// Driver function to sort the vector elements
// by second element of pairs
// bool sortbysec(const pair<int,int> &a,
//               const pair<int,int> &b)
// {
//     return (a.second < b.second);
// }

//for desc ">"

const ll t = 10e12;

void gj_b()
{
    ll x;cin>>x;
    multiset<ll> am_gn;
    for(ll i =1;i<=cbrt(t);i++){
        am_gn.insert(i*i*i);
    }
    for(ll i=1;i<=cbrt(x);i++){
        if(am_gn.count(x-i*i*i)){
            cout<<"YES"<<endl;
            return;
        }
        
    }
    cout<<"NO"<<endl;
    return; 

    




    // vi v(n);
    // for(int &i : v){
    //     cin>>i;
    // }
    

    
    // vector<pair<int,int>> v;
    // int a,b;
    // for(int i=0;i<n;i++){
    //     cin>>a>>b;
    //     v.push_back(make_pair(a,b));
    // }
    // sort(v.begin(),v.end());
    


    
}

signed main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    // #ifndef ONLINE_JUGDE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif


    // solve();
    
    int zgs_ngn; cin>>zgs_ngn;
    while(zgs_ngn--){
        gj_b();
    }
    return 0;
}