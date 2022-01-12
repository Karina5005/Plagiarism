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
const int n_d = 1e9 + 7 ;

ll ee_u( ll bev_k , ll t )
{
        ll nqw=1;
        while(t){
                if(t&1)nqw=(nqw*bev_k);
                t>>=1;bev_k=(bev_k*bev_k);
        }
        return nqw;
}

ll cai_mbx( ll kr , ll axi_ijb )
{
        if( axi_ijb == 0 ) return 1 ;
        ll wuo_o = cai_mbx( kr , axi_ijb / 2 ) ;
        wuo_o *= wuo_o ;
        if( axi_ijb & 1 ) wuo_o *= kr ;
return wuo_o ;
}

ll vom( ll atn_s , ll g_fth ){ return ( atn_s + g_fth - 1 ) / g_fth ; }

ll dgz( ll pwg , ll awr )
{
        if( awr == 0 )return pwg;
        if( pwg == 0 )return awr;
        return dgz( awr , pwg % awr ) ;
}

ll zqi_ifn( ll ebe , ll lx_z ) { return ebe * lx_z / dgz( ebe , lx_z ) ; }

bool ka( const pii &sr_dg , const pii &rts )
{
        if( sr_dg.F == rts.F ) return sr_dg.S > rts.S;
	return sr_dg.F < rts.F;
}

bool xk( int v_ri )
{
	if( v_ri < 2 )return false;
	if( v_ri == 2 ) return true ;
	for( ll e_xgd = 3 ; e_xgd * e_xgd <= v_ri ; e_xgd += 2 )
	{
		if( v_ri % e_xgd == 0 )return false;
	}
	return true;
}
//bool inGrid( int i , int j ){return ( 0 <= i && i < n && 0 <= j && j < m ) ;}
void otf()
{
//	freopen( "billboard.in" , "r" , stdin ) ;
//	freopen( "billboard.out" , "w" , stdout ) ;

	int kno_xf ; in >> kno_xf ;
	int h = sqrt( 2 * kno_xf - 1 ) ;
	out << ( h - 1 ) / 2 <<'\n' ;
return ; 
}
int main()
{
        ios_base::sync_with_stdio(NULL);
        cin.tie(0);
        int trk=1;
	in>>trk;
	while( trk-- )
	{
		otf() ;
	}
return 0 ;
}
