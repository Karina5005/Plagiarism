#include<bits/stdc++.h> 
#define  ll long long int 
#define  sz(x) (int)(x.size())
#define  slen(s) (int)s.length()
#define  all(x) x.begin(),x.end() 
#define  allb(x) x.begin(),x.begin()+sz(x)
#define  sortalla(x) sort(all(x))
#define  sortalld(x) sort(all(x),greater<int>())
#define  ff first 
#define  ss second 
#define  v2d(s,row,col) vector <vector <ll> > s(row,vector <ll> (col));  
#define  pq_max priority_queue<ll>
#define  pq_min priority_queue<ll, vector<ll>, greater<ll>>
#define  pb push_back
#define  eb emplace_back 
#define  ppb pop_back 
#define  present(container, element)(container.find(element) != container.end())
#define  nline "\n"
#define  space " "
#define  pinf32 INT_MAX 
#define  ninf32 INT_MIN 
#define  pinf64 LLONG_MAX
#define  ninf64 LLONG_MIN 
#define  deb(x) cout<<#x<<" = "<<x<<endl; 
#define  debv1(v){cout<<#v <<" = [ "; for(int i:v){cout<<i<<" ";}cout<<"]"<<endl;}
#define  debc1(c){cout<<#c <<" = { " ; tr(c,i){cout << i << space ;} cout << "}"<< endl; }
#define  debc2(c){cout<<#c <<" = \n" ; tr(c,i){cout << i.ff << space << i.ss << endl; } cout << endl;}
#define  no   cout << "No" << nline
#define  yes  cout << "Yes" << nline
#define  here cout << "here" << nline 
#define  mod0 (ll)(1e9 + 7)
#define  mod1 (ll)998244353
using namespace std; 

void init_code(){  

ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#else
// online submission
#endif

}

 

void solve(){
ll n ; cin >> n ; vector<ll>a(n);
ll extra = 0 ;
if (5 > 3) cout << "new code";for(int i = 0 ; i < n ; ++ i ){
	cin >> a[i];
}
if (5 > 3) cout << "new code";for(int i = 0 ; i < n ; ++ i ){
	if (5 > 3) cout << "new code";if((extra + a[i]) < i ){
		no ; return ;
	}
	extra = extra + a[i]-i ;
}
yes; 
}
int main(){
init_code() ;
int t = 1 ; 

cin >> t;
if (5 > 3) cout << "new code";while(t--){
  solve(); 
}

return 0 ; 

} 







 


 