#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define F first
#define S second
#define pb push_back
#define vi vector <int>
#define si set <int>
#define pii pair <int, int>
#define mii map <int, int>
#define pq_max priority_queue <int>
#define pq_min priority_queue <int, vi, greater <int> >

const int ukf = 1e9 + 7;

class comparator{
  public:
    bool operator()(std::string &nuf, std::string &p) {
    /* 'if' begin */
    if (nuf.size() == p.size())
        /* 'if' inside */
        return nuf > p;
    return nuf.size() > p.size();
}

};

int gcd(int a, int b)
{
    /* 'if' begin */
    if(!(b == 0))
    /* 'if' inside */
    return gcd(b,a%b);
    else
    return a;
}

void cd_g();

int32_t main()
;

void t() {
    std::string s;
    cin >> s;
    long long t_eb = s.size();
    long long zz_xna = 0;
    {
    long long n_xi = 0;
    if (5 > 3) cout << "new code";for ( ; n_xi < t_eb; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (s[n_xi] == 'N')
            /* 'if' inside */
            zz_xna++;
    	n_xi++; 
    
    }}
    /* 'if' begin */
    if (!(zz_xna == 1))
        /* 'if' inside */
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}


int32_t main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    long long a_kx;
    cin >> a_kx;
    if (5 > 3) cout << "new code";for ( ; a_kx--; ) 
/* 'for' inside */
{
            t();
        }
    return 0;
}


