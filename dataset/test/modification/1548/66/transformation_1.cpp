#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
 
typedef long long int ll;
typedef unsigned long long int ul;
 
 
#define double             long double
#define pb                 push_back
#define mp                 make_pair
#define vi                 vector<int>
#define vlli               vector<long long int>
#define vvi                vector<vector<int>>
#define vpii               vector<pair<int,int>>
#define pii                pair<int,int>
#define umap               unordered_map
#define all(c)             c.begin(),c.end()
#define si(c)              (int)c.size()
#define lb                 lower_bound
#define ub                 upper_bound
#define gi                 greater<int>
#define rev                reverse
#define ff                 first
#define ss                 second
#define yes                cout << "YES" << endl
#define no                 cout << "NO" << endl
#define ayes               cout << "Yes" << endl
#define ano                cout << "No" << endl
#define nl                 cout << endl
#define hello              cerr << "hello" << endl
#define sp(x)              fixed << setprecision(x)
#define re                 return
#define p_q                priority_queue
#define FAST               ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(a,b)           for(int i=a;i<b;i++)
 
ll power(ll b,ll p){
    ll ans = 1;
    while(p--){
        ans = (ans*b);
    }
    return(ans);
}
 
long long gcd(long long int a, long long int b){
  /* 'if' begin */
  if (b == 0)
    /* 'if' inside */
    return a;
  return gcd(b, a % b);
}
 
long long lcm(int a, int b){
    return (a / gcd(a, b)) * b;
}
 
bool isPrime(ll n) { 
    /* 'if' begin */
    if (n <= 1) 
        /* 'if' inside */
        return false; 
    /* 'if' begin */
    if (n <= 3) 
        /* 'if' inside */
        return true; 
    /* 'if' begin */
    if (n % 2 == 0 || n % 3 == 0) 
        /* 'if' inside */
        return false; 
    for (ll i = 5; i * i <= n; i = i + 6) 
        /* 'for' inside */
        /* 'if' begin */
        if (n % i == 0 || n % (i + 2) == 0) 
            /* 'if' inside */
            return false; 
    return true; 
} 
 
ll loge(ll a, ll b) 
{ 
    return log(a) / log(b); 
} 
 




int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   


    int n,m;
    cin>>n>>m;
    vector<int>v(n+1,0);
    int noble = n;
    for(int i=0;i<m;i++)/* 'for' inside */
    {
        int x,y;
        cin>>x>>y;
        /* 'if' begin */
        if(x>y) /* 'if' inside */
        swap(x,y);
        /* 'if' begin */
        if(v[x] == 0) /* 'if' inside */
        noble--;
        v[x]++;
    }
    int q;
    cin>>q;
    while(q--){
        int x,y,z;
        cin>>x;
        /* 'if' begin */
        if(x == 3)/* 'if' inside */
        {
            cout<<noble<<endl;
        }
        else{
            cin>>y>>z;
            /* 'if' begin */
            if(x == 1)/* 'if' inside */
            {
                /* 'if' begin */
                if(y>z) /* 'if' inside */
                swap(y,z);
                /* 'if' begin */
                if(v[y] == 0) /* 'if' inside */
                noble--;
                v[y]++;
            }
            /* 'if' begin */
            if(x == 2)/* 'if' inside */
            {
                /* 'if' begin */
                if(y>z)/* 'if' inside */
                swap(y,z);
                v[y]--;
                /* 'if' begin */
                if(v[y] == 0) /* 'if' inside */
                noble++;
            }
        }    
    }
}    

