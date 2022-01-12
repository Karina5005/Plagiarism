#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define MEM(a, b) memset(a, (b), sizeof(a))
#define forf(i, j, k, in) for (int i=j ; i<k ; i+=in)
#define forb(i, j, k, in) for (int i=j ; i>=k ; i-=in)
#define rep(i, j) forf(i, 0, j, 1)
#define rrep(i, j) forb(i, j, 0, 1)
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define foreach(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define IN(A, B, C) assert( B <= A && A <= C)
#define MP make_pair
#define PB push_back
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define read(type) readInt<type>()
const double pi=acos(-1.0);
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> vpp;
typedef vector<VI> vect;

typedef multiset<int> mset;
typedef long int li;
typedef unsigned long int uli;
typedef long long int lli;
typedef unsigned long long int  ulli;


void solve()
{
    lli n;
    cin>>n;
    lli ans=0;
    for(int i=3;i*i<=2*n-1;i+=2)
    /* 'for' inside */
    {
        ++ans;
    }
    cout<<ans<<"\n";
}

void onlinejudge() {
#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif 
}

int main()
{
   
    fastio
    int ttt=1;
    cin>>ttt;
    cout << fixed << setprecision(16);
    while(ttt--)
    solve();
    return 0;
}