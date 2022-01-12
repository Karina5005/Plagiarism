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
const double zh_zp=acos(-1.0);
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> vpp;
typedef vector<VI> vect;
//typedef map<int,int> MPII;
//typedef set<int> ;
typedef multiset<int> mset;
typedef long int li;
typedef unsigned long int uli;
typedef long long int lli;
typedef unsigned long long int  ulli;


void w()
{
    lli oom;
    cin>>oom;
    lli l_oz=0;
    for(int l=3;l*l<=2*oom-1;l+=2)
    {
        ++l_oz;
    }
    cout<<l_oz<<"\n";
}

void mo() {
#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif // ONLINE_JUDGE
}
//CODE BY UJJAWAL KUMAR DAS
int main()
{
   // onlinejudge();
    fastio
    int jdv=1;
    cin>>jdv;
    cout << fixed << setprecision(16);
    while(jdv--)
    w();
    return 0;
}