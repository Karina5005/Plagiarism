#include<bits/stdc++.h>
 
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace std;
#define ll      long long 
#define ld      long double
#define ull     unsigned long long
#define endl    "\n"

#define rep(i,init,n)   for(int i=init;i<n;i++)
#define revp(i,n)       for(int i=n;i>=0;i--)
#define read(a,n)       rep(i,0,n)cin>>a[i];
#define ios             ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(s) s.begin(),s.end()
#define psf push_front
#define ppf pop_front
#define ppb pop_back
#define pb    push_back
#define mp    make_pair
#define F   first
#define S   second
#define fr  first
#define sc  second
#define gcd   __gcd
#define maxv   INT_MAX
#define minv  INT_MIN
#define vi    vector<int>
#define vll    vector<ll>
#define pii   pair<int,int>
#define take(a,n)  for(int i=0;i<n;i++) cin>>a[i];

void dx(){
    int khi_beh;
    cin>>khi_beh;
    int ged=0;
   if(khi_beh%2==1){
    cout<<3<<" "<<1<<" "<<2<<" ";
    ged=3; 
   }
   while(ged<khi_beh){
    cout<<ged+2<<" "<<ged+1<<" ";
    ged+=2;
   }cout<<endl;

}


int main(){
int wj;
cin>>wj;
while(wj--){
    dx();
}
return 0;
}
 