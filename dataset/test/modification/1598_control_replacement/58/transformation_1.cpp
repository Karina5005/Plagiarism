#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>

using namespace std;
// using namespace chrono;
// using namespace __gnu_pbds;

typedef vector<int> vi;
typedef pair<int, int> pii;
#define endl "\n"
#define sd(val) scanf("%d", &val)
#define ss(val) scanf("%s", &val)
#define sl(val) scanf("%lld", &val)
#define debug(val) printf("check%d\n", val)
#define all(v) v.begin(), v.end()
#define PB push_back
#define MP make_pair
#define FF firstá¹
#define SS second
#define ull unsigned long long
#define int long long
#define MOD 1000000007
// #define MOD 998244353
#define clr(val) memset(val, 0, sizeof(val))
#define what_is(x) cerr << #x << " is " << x << endl;

#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

#define foi for (int i = 0; i < n; i++)

typedef long double lld;
// typedef tree<pair<ll, ll>, null_type, less<pair<ll, ll>>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key
// const int N = 2e5 + 5;

//Username: themonikanayak
//Name: Monika Nayak

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;
    map<int, int> mp;
    {
    int i = 0;
    for ( ; i < n; ) 
{
        cin >> arr[i];
        sum += arr[i];
        mp[arr[i]]++;
    	i++; 
    
    }}
    //Start Your Code Here
    int x = (2 * sum) / n;
    int cnt = 0;
    int low = 0, high = n - 1;
    // if (((double)x - (int)x) == 0)
    // {
    // sort(arr, arr + n);
    cnt = 0;
    if ((2 * sum) % n != 0)
    {
        cout << 0 << endl;
        return;
    }
    {
    int i = 0;
    for ( ; i < n; ) 
{
        int a1 = arr[i];
        int a2 = x - a1;
        if (mp.count(a2))
            cnt += mp[a2];
        if (a1 == a2)
            cnt -= 1;
    	i++; 
    
    }}
    cout << (cnt / 2) << endl;
    // }
    // else
    // {
    //     cout << 0 << endl;
    // }
}

int32_t main()
{
    // OJ;
    FIO;
    int t = 1;
    cin >> t;
    // vector<int> v;
    // SieveOfEratosthenes(100000, v);
    for ( ; t--; ) 
{
        solve();
    }

    return 0;
}