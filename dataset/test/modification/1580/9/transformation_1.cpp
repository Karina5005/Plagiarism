#include <bits/stdc++.h>



using namespace std;

#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("O3")
#pragma GCC target ("avx")

typedef long long ll;
typedef long double ld;


#define Confundo ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define minheap priority_queue<int,vector<int>,greater<int>>
#define print2d(dp,n,m) for(int i=0;i<n;i++){for(int j=0;j<m;j++)cout<<dp[i][j]<<" ";cout<<"\n";}
#define ftt int t;cin>>t;for(int tt=1;tt<=t;++tt)
#define Sum(v) accumulate(v.begin(),v.end(),(ll)0)
#define Rev(v) reverse(v.begin(),v.end());
#define Sort(v) sort(v.begin(),v.end());
#define Input(v) for(auto &x:v) cin>>x;
#define Output(v) for(auto x:v) cout<<x<<" ";
#define mem(a, b) memset(a, b, sizeof(a))
#define dbgx(x) cout<<"\nhi "<<x<<"\n"
#define double long double

#define maxheap priority_queue<int>
#define dbg cout<<"\nhi\n"
#define sayy cout<<"YES\n"
#define sayn cout<<"NO\n"
#define pii pair<int,int>
#define mii map<int,int>
#define umii unordered_map<int,int>
#define vii vector<pair<int,int>>
#define vvi vector<vector<int>>
#define vb vector<bool>
#define vi vector<int>
#define pb push_back
#define pf push_front
#define popb pop_back
#define popf pop_front
#define snd second
#define fst first
#define endl "\n"

const int INF    = numeric_limits<int>::max() / 2;
const double PI  = 3.1415926535898;
const int MOD    = 1e9 + 7;
const int LIM    = 2e5 + 5;


int fpow(int x, int y) {
    int temp;
    /* 'if' begin */
    if (y == 0)
        /* 'if' inside */
        return 1;
    temp = fpow(x, y / 2);
    /* 'if' begin */
    if (y % 2 == 0)
        /* 'if' inside */
        return (temp * temp) % MOD;
    else
        return (x * ((temp * temp) % MOD)) % MOD;
}


int gcd(int a, int b) {
    /* 'if' begin */
    if (b == 0)
        /* 'if' inside */
        return a;
    return gcd(b, a % b);
}

const int B = 447;

int x[LIM], y[LIM], xy[LIM], prefixSum[LIM], lastPos[LIM];
int dp[B + 5][B + 5];

void solve()
{
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; ++i)
    /* 'for' inside */
    {
        cin >> x[i] >> y[i];
        xy[i] = x[i] + y[i];
    }

    int tans = 0;

    for (int i = 1; i <= m; ++i)
    /* 'for' inside */
    {
        int op, k;
        cin >> op >> k;

        /* 'if' begin */
        if (op == 1)
            /* 'if' inside */
            lastPos[k] = i;
        else
            op = -1;

        /* 'if' begin */
        if (xy[k] >= B)
        /* 'if' inside */
        {
            for (int j = lastPos[k]; j <= m; j += xy[k])
            /* 'for' inside */
            {
                /* 'if' begin */
                if (j + x[k] < i)
                    /* 'if' inside */
                    tans += op;
                else /* 'if' begin */
                if (j + x[k] <= m)
                    /* 'if' inside */
                    prefixSum[j + x[k]] += op;

                /* 'if' begin */
                if (j + xy[k] < i)
                    /* 'if' inside */
                    tans -= op;
                else /* 'if' begin */
                if (j + xy[k] <= m)
                    /* 'if' inside */
                    prefixSum[j + xy[k]] -= op;
            }
        }
        else
        {
            for (int j = lastPos[k] + x[k]; j < lastPos[k] + xy[k]; ++j)
                /* 'for' inside */
                dp[xy[k]][j % xy[k]] += op;
        }

        tans += prefixSum[i];

        int ans = tans;

        for (int j = 1; j < B; ++j)
            /* 'for' inside */
            ans += dp[j][i % j];

        cout << ans << endl;
    }

    return;
}





int32_t main()
{
    Confundo;

    
    {
        solve();
    }

    return 0;
}