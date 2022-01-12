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
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}




// vector<bool> prime;
//  void SieveOfEratosthenes()
// {int n=2000010;
//       prime.resize(n + 1,1); 
//     for (int p = 2; p * p <= n; p++)
//     { 
//         if (prime[p] == true)
//         { 
//             for (int i = p * p; i <= n; i += p)
//                 prime[i] = false;
//         }
//     }
//   }




// int x[4]={0,0,-1,1};
// int y[4]={-1,1,0,0};





// vi parent,ran;  
// int findparent(int u){
//       if(parent[u]==u)return u;
//       return parent[u]=findparent(parent[u]);
//   }
// void union_ver (int u,int v){
//         int  a=findparent(u),b=findparent(v); 
//         if(a==b){ return ;} 
//         if(ran[b]>ran[a])swap(a,b); 
//         parent[b]=a;ran[a]+=ran[b];ran[b]=1; 
//  }
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
   int factor(int n){int nik=n;
    int ans=0;int i; 
//     for( i=2;i*i<n;i++)ans+=(2*(n%i==0));
//     for(int i=2;i<=n;i++){

//     }
// if(n%i==0)ans++;return ans;
while (n % 2 == 0)
    {
        ans++;
        n = n/2;
    }
 
    // n must be odd at this point. So we can skip
    // one element (Note i = i +2)
    for (int i = 3;i* i <=  (n); i = i + 2)
    {
        // While i divides n, print i and divide n
        while (n % i == 0)
        {
            ans++;
            n = n/i;
        }
    }
 
    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2 )
        ans++;return ans;
  }int dp[200010];
  void isans( ){
  //  if(o<9)return (o>=0);
  //   if(dp[o]!=-1)return dp[o];
  //   return dp[o]=isans(o-9)+isans(o-10);
  dp[0]=1;
  ffd(i,1,9)dp[i]=1;dp[9]=1;
  for(int i=10;i<200010;i++){
    dp[i]=(dp[i-9]+dp[i-10])%mod;
  }
  }
int  solve(){ 
   int n;cin>>n;arr(a,n);
   sort(a);
   vi p;a.pb(0);int c=0;int sum=0,ans=n;
   ffd(i,0,n){
      c++;if(a[i]!=a[i+1]){
         sum+=c; p.pb(c);c=0;
      }
   }sort(p);
   ffd(i,0,p.size()){
    //  cout<<p[i]<<" ";
     int k=(sum-(p[i]*(p.size()-i)));
     ans=min(ans,k);
   }return ans;

       }                                               
signed main(){
         ios_base::sync_with_stdio(false);
    cin.tie(NULL);  t=1;   memset(dp,-1,sizeof(dp)); 
    cin>>t;  isans();
    for(;t--;cout<<endl ){
      // solve(); 
      cout<<solve();
      // cout<<(solve()?"YES":"NO"); 
    }  
}