#include <bits/stdc++.h>
 
using namespace std;
 
#define nln '\n'
#define fr(i, l, h, s) for (long long i = l; i < h; i += s)
#define inp(arr) for(auto& x:arr) cin >> x
#define out(arr) for(auto x: arr) cout << x << ' '; cout << nln 
#define ll long long
const ll M = 1e9 + 7;
 

ll intfromstring(string s){int n=s.length();ll num=0;fr(i,0,n,1) num=num*10+(s[i]-'0');return num;}
ll factn(ll n){ll prod=1;/* 'if' begin */
if(n==0) /* 'if' inside */
return 1;fr(i,1,n+1,1)prod=((prod%M)*(i%M))%M;return prod%M;}
ll factlogn(ll lo, ll hi){/* 'if' begin */
if(hi-lo==1) /* 'if' inside */
return hi*lo;/* 'if' begin */
if(hi-lo==2) /* 'if' inside */
return hi*(hi-1)*(lo);int mid=(hi+lo)/2;return factlogn(lo,mid) * factlogn(mid+1,hi);}
ll binarySearch(ll arr[], ll lo, ll hi, ll x){/* 'if' begin */
if(hi-lo>1)/* 'if' inside */
{ll mid=(lo+hi)/2;/* 'if' begin */
if(arr[mid]==x) /* 'if' inside */
return mid;/* 'if' begin */
if(arr[mid] > x) /* 'if' inside */
return binarySearch(arr, lo, mid-1, x);/* 'if' begin */
if(arr[mid] < x) /* 'if' inside */
return binarySearch(arr, mid+1, hi, x);}return -1;}
ll firstOccurence(ll arr[], ll lo, ll hi, ll x){/* 'if' begin */
if (hi - lo > 1)/* 'if' inside */
{ll mid = (lo + hi) / 2;/* 'if' begin */
if (arr[mid] == x)/* 'if' inside */
return firstOccurence(arr, lo, mid, x);/* 'if' begin */
if (arr[mid] < x)/* 'if' inside */
return firstOccurence(arr, mid + 1, hi, x);/* 'if' begin */
if (arr[mid] > x)/* 'if' inside */
return firstOccurence(arr, lo, mid - 1, x);}/* 'if' begin */
if (arr[lo] == x)/* 'if' inside */
return lo;/* 'if' begin */
if (arr[hi] == x)/* 'if' inside */
return hi;return -1;}
ll lastOccurence(ll arr[], ll lo, ll hi, ll x){/* 'if' begin */
if (hi - lo > 1)/* 'if' inside */
{ll mid = (lo + hi) / 2;/* 'if' begin */
if (arr[mid] == x)/* 'if' inside */
return lastOccurence(arr, mid, hi, x);/* 'if' begin */
if (arr[mid] < x)/* 'if' inside */
return lastOccurence(arr, mid + 1, hi, x);/* 'if' begin */
if (arr[mid] > x)/* 'if' inside */
return lastOccurence(arr, lo, mid - 1, x);}/* 'if' begin */
if (arr[hi] == x)/* 'if' inside */
return hi;/* 'if' begin */
if (arr[lo] == x)/* 'if' inside */
return lo;return -1;}
ll count(ll arr[], ll n, ll x){return lastOccurence(arr, 0, n - 1, x) - firstOccurence(arr, 0, n - 1, x) + 1;}
long long int maxl(long long int a, long long int b){/* 'if' begin */
if (a > b)/* 'if' inside */
return a;return b;}
long long int minl(long long int a, long long int b){/* 'if' begin */
if (a < b) /* 'if' inside */
return a;return b;}
long long int absl(long long int a){/* 'if' begin */
if(a<0) /* 'if' inside */
return -a; return a;}
ll powb(ll base, ll po){base%=M;/* 'if' begin */
if(base==1 || po==0) /* 'if' inside */
return 1;/* 'if' begin */
if(po==1) /* 'if' inside */
return base%M;/* 'if' begin */
if (po&1)/* 'if' inside */
{ll x=powb(base, po/2)%M;return (((x*x)%M)*base)%M;}ll x = powb(base, po / 2)%M;return (x*x)%M;}
string Binary(ll n){stack<char> bin;while (n){/* 'if' begin */
if (n & 1)/* 'if' inside */
bin.push('1');else bin.push('0');n = n >> 1;}string str = "";while (bin.size()){str.push_back(bin.top());bin.pop();}return str;}


void testCase()
{
    ll n;
    cin >> n;
    ll arr[n];
    inp(arr);
    ll sum=accumulate(arr, arr+n,0LL);
    /* 'if' begin */
    if((2*sum)%n !=0)
    /* 'if' inside */
    {
        cout << 0 << nln;
        return;
    }
    ll reqsum= (2*sum)/n;
    map<ll, ll> mp;
    for(auto x:arr) ++mp[x];
    ll ans=0;
    fr(i,0,n,1)
    {
        /* 'if' begin */
        if(mp[reqsum-arr[i]]>0)
        /* 'if' inside */
        {
            ans += mp[reqsum - arr[i]];
            /* 'if' begin */
            if(reqsum-arr[i]==arr[i]) /* 'if' inside */
            ans-=1;
        }
    }
    cout << ans/2 << nln;
    return;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t = 1;
    cin >> t;
    while (t--)
    {
        testCase();
    }
    return 0;
}
