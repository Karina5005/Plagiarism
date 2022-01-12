#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<long long,long long> pll;
typedef vector<long long> fll;
typedef vector<int> fi;
#define pb push_back
#define in cin
#define out cout
#define fektor vector
#define ma max
#define si size
#define all(f) f.begin(),f.end()
#define rall(f) f.rbegin(),f.rend()
#define F first
#define S second
#define what(a) cout<<(#a)<<" is "<<(a)<<'\n';
#define meow out<<"____________________________________________\n";
const int it = 1e9 + 7 ;

ll mmd( ll ue_mfc , ll kp )
{
        ll is=1;
        while(kp){
                if(kp&1)is=(is*ue_mfc);
                kp>>=1;ue_mfc=(ue_mfc*ue_mfc);
        }
        return is;
}

ll ef( ll ang_cvn , ll lc )
{
        if( lc == 0 ) return 1 ;
        ll v = ef( ang_cvn , lc / 2 ) ;
        v *= v ;
        if( lc & 1 ) v *= ang_cvn ;
return v ;
}

ll ihd( ll rc , ll c ){ return ( rc + c - 1 ) / c ; }

ll msb( ll yhf , ll u_tni )
{
        if( u_tni == 0 )return yhf;
        if( yhf == 0 )return u_tni;
        return msb( u_tni , yhf % u_tni ) ;
}

ll nk( ll utx , ll n ) { return utx * n / msb( utx , n ) ; }

bool ey( const pii &aop , const pii &e_i )
{
        if( aop.F == e_i.F ) return aop.S > e_i.S;
	return aop.F < e_i.F;
}

bool l( int u_g )
{
	if( u_g < 2 )return false;
	if( u_g == 2 ) return true ;
	for( ll jlr = 3 ; jlr * jlr <= u_g ; jlr += 2 )
	{
		if( u_g % jlr == 0 )return false;
	}
	return true;
}
//bool inGrid( int i , int j ){return ( 0 <= i && i < n && 0 <= j && j < m ) ;}
void fhn()
{
//	freopen( "billboard.in" , "r" , stdin ) ;
//	freopen( "billboard.out" , "w" , stdout ) ;

	int j ; in >> j ;
	int zn_m = 0 ;
	for( ll w_n = 3 ; ; w_n += 2 )
	{
		int lx_rs = w_n * w_n / 2 ;
		int g = w_n * w_n / 2 + 1 ;
		if( lx_rs > j or g > j ) break ;
		zn_m++ ;
	}
	out << zn_m << '\n' ;
return ; 
}
int main()
{
        ios_base::sync_with_stdio(NULL);
        cin.tie(0);
        int w=1;
	in>>w;
	while( w-- )
	{
		fhn() ;
	}
return 0 ;
}