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
                if(b&1)ret=(ret*a);
                b>>=1;a=(a*a);
        }
        return ret;
}

ll power2( ll a , ll b )
{
        if( b == 0 ) return 1 ;
        ll s = power2( a , b / 2 ) ;
        s *= s ;
        if( b & 1 ) s *= a ;
return s ;
}

ll seil( ll a , ll b ){ return ( a + b - 1 ) / b ; }

ll gsd( ll a , ll b )
{
        if( b == 0 )return a;
        if( a == 0 )return b;
        return gsd( b , a % b ) ;
}

ll lsm( ll a , ll b ) { return a * b / gsd( a , b ) ; }

bool sortonsekond( const pii &a , const pii &b )
{
        if( a.F == b.F ) return a.S > b.S;
	return a.F < b.F;
}

bool isPrime( int a )
{
	if( a < 2 )return false;
	if( a == 2 ) return true ;
	for( ll i = 3 ; i * i <= a ; i += 2 )
	{
		if( a % i == 0 )return false;
	}
	return true;
}
//bool inGrid( int i , int j ){return ( 0 <= i && i < n && 0 <= j && j < m ) ;}
void solve()
{
//	freopen( "billboard.in" , "r" , stdin ) ;
//	freopen( "billboard.out" , "w" , stdout ) ;

	int n ; in >> n ;
	int knt = 0 ;
	for( ll a = 3 ; ; a += 2 )
	{
		int b = a * a / 2 ;
		int c = a * a / 2 + 1 ;
		if( b > n or c > n ) break ;
		knt++ ;
	}
	out << knt << '\n' ;
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