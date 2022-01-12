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
const int MOD = 1e9 + 7 ;

ll power( ll a , ll b )
{
        ll ret=1;
        while(b){
                /* 'if' begin */
                if(b&1)/* 'if' inside */
                ret=(ret*a);
                b>>=1;a=(a*a);
        }
        return ret;
}

ll power2( ll a , ll b )
{
        /* 'if' begin */
        if( b == 0 ) /* 'if' inside */
        return 1 ;
        ll s = power2( a , b / 2 ) ;
        s *= s ;
        /* 'if' begin */
        if( b & 1 ) /* 'if' inside */
        s *= a ;
return s ;
}

ll seil( ll a , ll b ){ return ( a + b - 1 ) / b ; }

ll gsd( ll a , ll b )
{
        /* 'if' begin */
        if( b == 0 )/* 'if' inside */
        return a;
        /* 'if' begin */
        if( a == 0 )/* 'if' inside */
        return b;
        return gsd( b , a % b ) ;
}

ll lsm( ll a , ll b ) { return a * b / gsd( a , b ) ; }

bool sortonsekond( const pii &a , const pii &b )
{
        /* 'if' begin */
        if( a.F == b.F ) /* 'if' inside */
        return a.S > b.S;
	return a.F < b.F;
}

bool isPrime( int a )
{
	/* 'if' begin */
	if( a < 2 )/* 'if' inside */
	return false;
	/* 'if' begin */
	if( a == 2 ) /* 'if' inside */
	return true ;
	for( ll i = 3 ; i * i <= a ; i += 2 )
	/* 'for' inside */
	{
		/* 'if' begin */
		if( a % i == 0 )/* 'if' inside */
		return false;
	}
	return true;
}

void solve()
{


	int n ; in >> n ;
	int sq = sqrt( 2 * n - 1 ) ;
	out << ( sq - 1 ) / 2 <<'\n' ;
return ; 
}
int main()
{
        ios_base::sync_with_stdio(NULL);
        cin.tie(0);
        int t=1;
	in>>t;
	while( t-- )
	{
		solve() ;
	}
return 0 ;
}
