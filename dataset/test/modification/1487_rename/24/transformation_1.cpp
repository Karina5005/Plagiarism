#include <bits/stdc++.h> 
using namespace std;
#define ll long long
const ll fa = 2e5+10 , hcm_guu = 1e9+7 , cg = 1e16 ;
const double kjy_t = 1e-7;


void b_ipv(int xc_cg);
int main(){ 
	
	// freopen( "input.txt" , "r", stdin);
	// freopen ("myfile.txt","w",stdout);
	#ifdef ONLINE_JUDGE
		ios_base::sync_with_stdio(0);
		cin.tie(0);
	#endif  
		int i_i = 1 , i_ej =1  ;	
		cin>>i_i;
		while( i_i-- ) b_ipv(i_ej++) ;
}

void test(int ww){	

	ll n ;
	cin>>n;
	ll all = ( n*(n-1) )/2 ;
	ll rem = all%n ;
	ll each = all/n ;
	vector< ll >gx;

	for( int qo=1 ; qo<=n ; qo++ ){
		for( int c_qti=qo+1 , f = 0 ;  c_qti<= n ; c_qti++ , f++ ){
				if( f < each )
					cout<<1<<" ";
				else if( f == each && ( n-1 )&1 )
					cout<<"0 ";
				else cout<<"-1 ";
		}
	}

	cout<<"\n";
}