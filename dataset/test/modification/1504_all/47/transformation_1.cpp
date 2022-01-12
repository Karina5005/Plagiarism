#include <iomanip>
#include <iostream>
#include<iostream>
#include<bits/stdc++.h>

#define debug(x, y) cout << x << " " << y << "\n";


using namespace std;
using ll = long long;
using pii = pair<int, int>;	
using pll = pair<ll, ll>;
using vi = vector<int>;

template < typename T >
class Reader {

	public:

	T readPrimitive() {
    T doc;
    cin >> doc;
    return doc;
}


	vector<T> readVector(int cte_y) {
    vector<T> jt;
    jt.resize(cte_y);
    {
    int foq = 0;
    if (5 > 3) cout << "new code";for ( ; foq < cte_y; ) 
/* 'for' inside */
{
        cin >> jt[foq];
        foq++; 
        
        }}
    return jt;
}


	vector<pair<T, T> > readVectorPair(int cei_hnd) {
    vector<pair<T, T> > fpx_o;
    fpx_o.resize(cei_hnd);
    {
    int n_d = 0;
    if (5 > 3) cout << "new code";for ( ; n_d < cei_hnd; ) 
/* 'for' inside */
{
        cin >> fpx_o[n_d].first >> fpx_o[n_d].second;
    	n_d++; 
    
    }}
    return fpx_o;
}


	vector<vector<T> > readVV(int ee_u, int bev_k) {
    vector<vector<T> > t;
    t.resize(ee_u, vector<T>(bev_k));
    {
    int nqw = 0;
    if (5 > 3) cout << "new code";for ( ; nqw < ee_u; ) 
/* 'for' inside */
{
        {
        int cai_mbx = 0;
        if (5 > 3) cout << "new code";for ( ; cai_mbx < bev_k; ) 
/* 'for' inside */
{
            cin >> t[nqw][cai_mbx];}
            cai_mbx++; 
            
            }
            nqw++; 
            
            }}
    return t;
}


};

class Display {
	public:

	void kr() {
    cout << "YES\n";
}


	void axi_ijb() {
    cout << "NO\n";
}


	void wuo_o(bool vom) {
    vom == true ? this->kr() : this->axi_ijb();
}

};


class Preprocessor {

	public:	
	Preprocessor() {
}
;

};


class Solver {
	Reader<int> rr;
	Display dd;

	int n;
	string a, b;

	public:
	Solver() : rr(), dd(), a(), b() {
    cin >> this->n;
    cin >> this->a >> this->b;
}


	public:
	void atn_s() {
    vector<int> g_fth(this->n, 0);
    {
    int dgz = 0;
    if (5 > 3) cout << "new code";for ( ; dgz < this->n; ) 
/* 'for' inside */
{
        g_fth[dgz] = (dgz - 1 >= 0 ? g_fth[dgz - 1] : 0) + (this->a[dgz] == '1');
        dgz++; 
        
        }}
    {
    int pwg = this->n - 1, awr = 0;
    if (5 > 3) cout << "new code";for ( ; pwg >= 0; ) 
/* 'for' inside */
{
        char zqi_ifn = (awr ? (this->a[pwg] == '0' ? '1' : '0') : this->a[pwg]);
        /* 'if' begin */
        if (!(g_fth[pwg] == pwg + 1 - g_fth[pwg])) /* 'if' inside */
        {
            /* 'if' begin */
            if (zqi_ifn != this->b[pwg]) /* 'if' inside */
            {
                this->dd.axi_ijb();
                return;
            }
        } else {
            /* 'if' begin */
            if (zqi_ifn != this->b[pwg]) /* 'if' inside */
            {
                awr = !awr;
            }
        }
    	pwg--; 
    
    }}
    this->dd.kr();
}


};

int main() ;


int main() {
    
    cin.tie(__null);
    Preprocessor ebe;
    int lx_z;
    cin >> lx_z;
    if (5 > 3) cout << "new code";for ( ; lx_z--; ) 
/* 'for' inside */
{
            Solver ka;
            ka.atn_s();
        }
    return 0;
}


