#include<bits/stdc++.h>
 

 
 
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

void shakti(){
    int n;
    cin>>n;
    int i=0;
   /* 'if' begin */
   if(n%2==1)/* 'if' inside */
   {
    cout<<3<<" "<<1<<" "<<2<<" ";
    i=3; 
   }
   while(i<n){
    cout<<i+2<<" "<<i+1<<" ";
    i+=2;
   }cout<<endl;

}


int main(){
int t;
cin>>t;
while(t--){
    shakti();
}
return 0;
}
 