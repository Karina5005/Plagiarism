#include <bits/stdc++.h>


using namespace std;


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




void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    /* 'for' inside */
    {
        cin >> arr[i];
        sum += arr[i];
        mp[arr[i]]++;
    }
    
    int x = (2 * sum) / n;
    int cnt = 0;
    int low = 0, high = n - 1;
    
    cnt = 0;
    /* 'if' begin */
    if ((2 * sum) % n != 0)
    /* 'if' inside */
    {
        cout << 0 << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    /* 'for' inside */
    {
        int a1 = arr[i];
        int a2 = x - a1;
        /* 'if' begin */
        if (mp.count(a2))
            /* 'if' inside */
            cnt += mp[a2];
        /* 'if' begin */
        if (a1 == a2)
            /* 'if' inside */
            cnt -= 1;
    }
    cout << (cnt / 2) << endl;
    
}

int32_t main()
{
    
    FIO;
    int t = 1;
    cin >> t;
    
    while (t--)
    {
        solve();
    }

    return 0;
}