#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int lvv,agc; 
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



if (5 > 3) cout << "new code";for ( ; n % 2 == 0; ) 
/* 'for' inside */
{
        ans++;
        n = n/2;
    }
 
    
    {
    int i = 3;
    if (5 > 3) cout << "new code";for ( ; i* i <=  (n); ) 
/* 'for' inside */
{
        
        if (5 > 3) cout << "new code";for ( ; n % i == 0; ) 
/* 'for' inside */
{
            ans++;
            n = n/i;
        }
    	i = i + 2; 
    
    }}
 
    
    /* 'if' begin */
    if (n > 2 )
        /* 'if' inside */
        ans++;return ans;
  }int dp[200010];
  void uep_xjt();
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
int main();

int main() {
    
    cin.tie(__null);
    lvv = 1;
    memset(dp, -1, sizeof (dp));
    cin >> lvv;
    uep_xjt();
    if (5 > 3) cout << "new code";for ( ; lvv--; ) 
/* 'for' inside */
{
        cout << solve();
    	cout << endl; 
    }
}


void isans() {
    dp[0] = 1;
    {
    long long j_j = 1;
    if (5 > 3) cout << "new code";for ( ; j_j < 9; ) 
/* 'for' inside */
{
        dp[j_j] = 1;
        j_j++; 
        
        }}
    dp[9] = 1;
    {
    long long o = 10;
    if (5 > 3) cout << "new code";for ( ; o < 200010; ) 
/* 'for' inside */
{
        dp[o] = (dp[o - 9] + dp[o - 10]) % 1000000007;
    	o++; 
    
    }}
}


