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

void khi_beh(){  

ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#else
// online submission
#endif

}

 

void ged(){
ll n ; cin >> n ; vector<ll>wj(n);
ll extra = 0 ;
for(int mbx = 0 ; mbx < n ; ++ mbx ){
	cin >> wj[mbx];
}
for(int f_ioa = 0 ; f_ioa < n ; ++ f_ioa ){
	if((extra + wj[f_ioa]) < f_ioa ){
		no ; return ;
	}
	extra = extra + wj[f_ioa]-f_ioa ;
}
yes; 
}
int main(){
khi_beh() ;
int nv_i = 1 ; 

cin >> nv_i;
while(nv_i--){
  ged(); 
}

return 0 ; 

} 







 


 