#include<bits/stdc++.h>
using namespace std;
int t,k; 
#define int   long long
#define ll long long
#define p push 
#define pb push_back
#define pp pair<int,int>
#define  mod 1000000007
#define ffd(i,n,m) for(int i=n;i<m;i++)
#define vi  vector<int>
#define vvi  vector<vector<int>>
#define pq priority_queue
#define peak(a,i)    ( a[i-1]<a[i]&&a[i]>a[i+1])
#define arr(a,n)  vi a(n);ffd(i,0,n)cin>>a[i]; 
#define sort(a)  sort(a.begin(),a.end()); 
#define f    first
#define s second
 
 int gcd(int a, int b)
{
    /* 'if' begin */
    if (b == 0)
        /* 'if' inside */
        return a;
    return gcd(b, a % b);
     
}
















   int factor(int n){int nik=n;
    int ans=0;int i; 



while (n % 2 == 0)
    {
        ans++;
        n = n/2;
    }
 
    
    for (int i = 3;i* i <=  (n); i = i + 2)
    /* 'for' inside */
    {
        
        while (n % i == 0)
        {
            ans++;
            n = n/i;
        }
    }
 
    
    /* 'if' begin */
    if (n > 2 )
        /* 'if' inside */
        ans++;return ans;
  }int dp[200010];
  void isans( ){
  
  dp[0]=1;
  ffd(i,1,9)dp[i]=1;dp[9]=1;
  for(int i=10;i<200010;i++)/* 'for' inside */
  {
    dp[i]=(dp[i-9]+dp[i-10])%mod;
  }
  }
int  solve(){ 
   int n;cin>>n;arr(a,n);
   sort(a);
   vi p;a.pb(0);int c=0;int sum=0,ans=n;
   ffd(i,0,n){
      c++;/* 'if' begin */
      if(a[i]!=a[i+1])/* 'if' inside */
      {
         sum+=c; p.pb(c);c=0;
      }
   }sort(p);
   ffd(i,0,p.size()){
    
     int k=(sum-(p[i]*(p.size()-i)));
     ans=min(ans,k);
   }return ans;

       }                                               
signed main(){
         ios_base::sync_with_stdio(false);
    cin.tie(NULL);  t=1;   memset(dp,-1,sizeof(dp)); 
    cin>>t;  isans();
    for(;t--;cout<<endl )/* 'for' inside */
    {
      
      cout<<solve();
      
    }  
}