/* hare krishna hare krishna
krishna krishna hare hare
hare rama hare rama
rama rama hare hare*/

// FOR THE PLEASURE OF SRI SRI RADHA MADHAV 
 
#include<bits/stdc++.h>
#define ll          long long
#define ull         unsigned long long
#define ld          long double
#define Test        ll t;cin>>t;while(t--)
#define pb          push_back
#define ff          first
#define ss          second
#define mll         map<ll, ll>
#define vpll        vector<pair<ll,ll>>
#define vll         vector<ll>
#define vcc         vector<char>
#define slk         stack<ll>
#define loop(i,n)   for(ll i=0;i<n;i++)
#define nl          "\n"
#define in          insert
#define b_s         binary_search
#define l_b         lower_bound
#define u_b         upper_bound
#define all(v)      v.begin(),v.end()
#define mem(a,x)    memset(a,x,sizeof(a)) 
#define setbits(n)      __builtin_popcount(n) 
const double pi=    3.14159265358979323846;
const ll mod = 1e9+7;
const ull INF=5*1e18;
using namespace std;

// -----------------------

// int dx[4] = {1, -1, -1, 1};
// int dy[4] = {-1, 1, -1, -1};

// -----------------------
// const ll N = 2*100000+1;
// vll adj[N];
// bool vis[N];
// ll dis[N];

void fast()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
bool sortbysec(const pair<ll,ll> &a, const pair<ll,ll> &b)
{
    return (a.second < b.second);
}

// void shord(ll source)
// {
//     dis[source]=0;
//     check.pb(source);
//     set<pair<ll, ll>>s;//set({wt, source})
//     s.in({0, source});
//     while(!s.empty())
//     {
//         auto st = *(s.begin());
//         s.erase(st);
//         for(auto i:adj[st.ss])
//         {
//             if(dis[i.ff]>dis[st.ss]+i.ss)
//             {
//                 check.pb(i.ff);
//                 s.erase({dis[i.ff], i.ff});
//                 dis[i.ff] = dis[st.ss]+i.ss;
//                 s.in({dis[i.ff], i.ff});
//             }
//         }
//     }
// }

// void bfs(ll node)
// {
//     queue<ll>q;
//     q.push(node);
//     vis[node]=true;
//     dis[node]=0;
//     while(!q.empty())
//     {
//         node = q.front();
//         q.pop();
//         for(auto child : adj[node])
//         {
//             if(vis[child]==false)
//             {
//                 dis[child] = dis[node]+1;
//                 vis[child]=true;
//                 q.push(child);
//             }
//         }
//     }
// }
// ll lcm(ll a,ll b){
//     return (a/__gcd(a,b))*b;
// }
// DSU
// vll parent(N+1), si(N+1, 0);
// void make_set(ll node)
// {
//     parent[node]=node;
//     si[node]=1;
// }
// ll find_set(ll node)
// {
//     if(node==parent[node])
//         return node;
//     // Path Compression
//     return find_set(parent[node]);
// }
// void Union_set(ll a, ll b)
// {
//     a = find_set(a);
//     b = find_set(b);
//     if(a!=b)
//     {
//         // Union by size
//         if(si[a]<si[b])
//             swap(a, b);
//         parent[b]=a;
//     }
// }
ll fastpow(ll base, ll exp)
{
    ll ans=1;
    while(exp>0)
    {
        if(exp&1)
            ans=(ans*base);

        base=(base*base);
        exp/=2;
    }
    return ans;
}
// bool isprime(ll a)
// {
//     ll i;
//     if(a==1)
//         return false;
//     if(a==2)
//         return true;
//     if(a%2==0)
//         return false;
//     for(i=3;i*i<=a;i+=2)
//         if(a%i==0)
//             return false;
//     return true;
// }
ll check(ll tar, ll key, ll n)
{
    ll sum = (tar*(tar+1))/2 - n + tar;
    if(sum>key)
        return 1;
    else if(sum==key)
        return -1;
    return 0;
}
void solve()
{
    ll n, mn=0, mx=0, i;
    double sum=0, x;
    cin>>n>>x;
    vector<double>v(n);
    for(i=0;i<n;i++)
    {
        cin>>v[i];
        mx+=ceil(v[i]/x);
        sum+=v[i];
    }
    mn = ceil(sum/x);
    cout<<mn<<" "<<mx<<"\n";
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
        
    fast();
    // store();
    // solve();
    Test{
        cout.flush();
        solve();
    } 
}
// FOR THE PLEASURE OF SRI SRI RADHA MADHAV 
