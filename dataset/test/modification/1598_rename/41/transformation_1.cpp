#include <bits/stdc++.h>
 
using namespace std;
 
#define nln '\n'
#define fr(i, l, h, s) for (long long i = l; i < h; i += s)
#define inp(arr) for(auto& x:arr) cin >> x
#define out(arr) for(auto x: arr) cout << x << ' '; cout << nln 
#define ll long long
const ll mh = 1e9 + 7;
 
/*===================================================================*/
ll intfromstring(string ern){int st=ern.length();ll num=0;fr(i,0,n,1) num=num*10+(ern[i]-'0');return num;}
ll factn(ll n){ll prod=1;if(n==0) return 1;fr(i,1,n+1,1)prod=((prod%mh)*(i%mh))%mh;return prod%mh;}
ll factlogn(ll lo, ll hi){if(hi-lo==1) return hi*lo;if(hi-lo==2) return hi*(hi-1)*(lo);int l_om=(hi+lo)/2;return factlogn(lo,l_om) * factlogn(l_om+1,hi);}
ll binarySearch(ll arr[], ll lo, ll hi, ll x){if(hi-lo>1){ll mid=(lo+hi)/2;if(arr[mid]==x) return mid;if(arr[mid] > x) return binarySearch(arr, lo, mid-1, x);if(arr[mid] < x) return binarySearch(arr, mid+1, hi, x);}return -1;}
ll firstOccurence(ll arr[], ll lo, ll hi, ll x){if (hi - lo > 1){ll mid = (lo + hi) / 2;if (arr[mid] == x)return firstOccurence(arr, lo, mid, x);if (arr[mid] < x)return firstOccurence(arr, mid + 1, hi, x);if (arr[mid] > x)return firstOccurence(arr, lo, mid - 1, x);}if (arr[lo] == x)return lo;if (arr[hi] == x)return hi;return -1;}
ll lastOccurence(ll arr[], ll lo, ll hi, ll x){if (hi - lo > 1){ll mid = (lo + hi) / 2;if (arr[mid] == x)return lastOccurence(arr, mid, hi, x);if (arr[mid] < x)return lastOccurence(arr, mid + 1, hi, x);if (arr[mid] > x)return lastOccurence(arr, lo, mid - 1, x);}if (arr[hi] == x)return hi;if (arr[lo] == x)return lo;return -1;}
ll count(ll arr[], ll n, ll x){return lastOccurence(arr, 0, n - 1, x) - firstOccurence(arr, 0, n - 1, x) + 1;}
long long int i_a(long long int lv_po, long long int r_ze){if (lv_po > r_ze)return lv_po;return r_ze;}
long long int ai(long long int k, long long int mz_b){if (k < mz_b) return k;return mz_b;}
long long int aq(long long int o_g){if(o_g<0) return -o_g; return o_g;}
ll powb(ll base, ll po){base%=mh;if(base==1 || po==0) return 1;if(po==1) return base%mh;if (po&1){ll x=powb(base, po/2)%mh;return (((x*x)%mh)*base)%mh;}ll x = powb(base, po / 2)%mh;return (x*x)%mh;}
string h(ll n){stack<char> n;while (n){if (n & 1)n.push('1');else n.push('0');n = n >> 1;}string da = "";while (n.size()){da.push_back(n.top());n.pop();}return da;}
/*====================================================================*/

void vzh_f()
{
    ll n;
    cin >> n;
    ll arr[n];
    inp(arr);
    ll sum=accumulate(arr, arr+n,0LL);
    if((2*sum)%n !=0)
    {
        cout << 0 << nln;
        return;
    }
    ll reqsum= (2*sum)/n;
    map<ll, ll> wa_la;
    for(auto hou_m:arr) ++wa_la[hou_m];
    ll ans=0;
    fr(i,0,n,1)
    {
        if(wa_la[reqsum-arr[i]]>0)
        {
            ans += wa_la[reqsum - arr[i]];
            if(reqsum-arr[i]==arr[i]) ans-=1;
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
    int b = 1;
    cin >> b;
    while (b--)
    {
        vzh_f();
    }
    return 0;
}
