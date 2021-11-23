/**Author : Abhishek_Thakur
   Competitive Programmer**/

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#define int long long
#define IOS std::ios::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define mod 1000000007ll //998244353ll
#define bigmod 981168724994134051
#define INF LLONG_MAX
#define vi vector<int>
#define vpii vector<pair<int,int>>
#define pb push_back
#define mii map<int, int>
#define pii pair<int, int>
#define rep(i,x,y) for(int i=x; i<y; i++)
#define all(x,i,j) x.begin()+i,x.end()+j
#define allof(x) x.begin(),x.end()
#define ff first
#define ss second
typedef long double lld;

using namespace std;


bool isprime(int n)
{

    if (n <=1)
        return false;


    {
    int i = 2;
    while (i <= sqrt(n)) {
        if (n % i == 0)
            return false;
            i++; 
            
            }}

    return true;
}

 bool cmp(pair<int,int>p1,pair<int,int>p2)
 {
     if(p1.first!=p2.first)
     return p1.first<p2.first;
     else
     return p1.second<p2.second;

 }


vector<vector<int>> mul(vector<vector<int>>A,vector<vector<int>>B,int p)
{
  int m=A.size(),n1=A[0].size(),n2=B.size(),k=B[0].size();
  if(n1!=n2)
  return {};
  else if(n1==n2)
  {   vector<vector<int>>c(m,vector<int>(k,0));
      int n=n1;
      {
      int i=0;
      while (i<m) {
          {
          int j=0;
          while (j<k) {
              {
              int k1=0;
              while (k1<n) {
                  c[i][j]=(c[i][j]%p+((A[i][k1]%p)*(B[k1][j]%p))%p)%p;
              	k1++; 
              
              }}
          	j++; 
          
          }}
      	i++; 
      
      }}
      return c;
  }}

int power(int a,int b,int p,map<int,int>&dp)
{   if(dp.count(b)==0)
    {if(b==1)
    return dp[1]=a;
    else if(b==0)
    return dp[0]=1;
    else if(b%2==0)
        return dp[b]=((power(a,b/2,p,dp)%p)*(power(a,b/2,p,dp)%p))%p;
    else
        return dp[b]=((((power(a,(b-1)/2,p,dp)%p)*(power(a,(b-1)/2,p,dp)%p))%p)*a)%p;}
    else
    return dp[b];

}

int bs(vector<int>&w,int x)
{
  int l=0,h=w.size()-1;

  while(l<=h)
  {  int mid=(l+h)/2;
      if(w[mid]==x)
        return mid;
      else if(x<w[mid])
        h=mid-1;
      else if(x>w[mid])
        l=mid+1;
  }
  return -1;
}

int gcd(int a, int b)
{
    if (b == 0)
    return a;
    else
    return gcd(b, a % b);
}
int lcm(int a, int b)
{
    return (a*b)/gcd(a,b);
}


void leftRotate(vector<int>&arr, int d, int n)
{

    d = d % n;
    int g_c_d = gcd(d, n);
    {
    int i = 0;
    while (i < g_c_d) {

        int temp = arr[i];
        int j = i;

        while (1) {
            int k = j + d;
            if (k >= n)
                k = k - n;

            if (k == i)
                break;

            arr[j] = arr[k];
            j = k;
        }
        arr[j] = temp;
    	i++; 
    
    }}
}

int fact(int n, int p)
{
    if (n >= p)
        return 0;

    int result = 1;
    {
    int i = 1;
    while (i <= n) {
        result = (result * i) % p;
        i++; 
        
        }}

    return result;
}

       void good(string prev,int n,int k,string S,string s,int &mini)
        {   if(n==1)
            {
                string p(1,S[k]);
                string prev1=prev+p;
                int c=0;
                rep(i,0,s.size())
                {
                    if(prev1[i]!=s[i])
                        c++;
                }
                mini=min(c,mini);
                string prev2=p+prev;
                c=0;
                rep(i,0,s.size())
                {
                    if(prev2[i]!=s[i])
                        c++;
                }
                mini=min(c,mini);
            }
            else
            {string p(n/2,S[k]);
             string prev1=prev+p;
             good(prev1,n/2,k+1,S,s,mini);
             string prev2=p+prev;
             good(prev2,n/2,k+1,S,s,mini);
        }}


int DFS(int u,map<int,vi>&adj,map<int,bool>&vis,vi &xorx,int &res,vi &v)
{
    vis[u]=true;

    for(auto x:adj[u])
    {
        if(vis[x]!=true)
             {xorx[u]^=DFS(x,adj,vis,xorx,res,v);
            }
    }
    xorx[u]^=v[u];
    return xorx[u];

}
int DFS1(int u,map<int,vi>&adj,map<int,bool>&vis1,vi &xorx,int &res,int &c)
{   vis1[u]=true;
    if( u!=0 && xorx[u]==res)
    {
    return 1;}


    for(auto x:adj[u])
    {
        if(vis1[x]!=true)
             {if(DFS1(x,adj,vis1,xorx,res,c)==1)
              {if(u==0)
              {c++;
               if(c==2)
                return 1;}
              if(u!=0)
             return 1;}
            }
    }

    return 0;

}
int getPairsCount(vi arr, int n, int k)
{
    unordered_map<int, int> m;
    int count = 0;
    {
    int i = 0;
    while (i < n) {
        if (m.find(k - arr[i]) != m.end()) {
            count += m[k - arr[i]];
        }
        m[arr[i]]++;
    	i++; 
    
    }}
    return count;
}

int rem(int a,int b)
{
    if(a>=0 && (b>0 || b<0))
    {
        return a%b;
    }
    else if(a<0 && (b>0 || b<0))
    {
        return (abs(b)+(a%b))%abs(b);
    }

}

int bs_lb(vi v,int k)
{
    int n=v.size();
    int mid=(n-1)/2;
    if(n==1)
    return v[0];
    else
    {int l=0,h=n-1,d=0,f=0;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(v[mid]<k)
        {
            l=mid;
            f=1;
            if(h-l==1 || h-l==0)
            {
                if(v[h]>=k)
                    break;
                else
                    {l=h;
                    break;}
            }
        }
        else if(v[mid]>k)
        {
            h=mid-1;

        }
        else if(v[mid]==k)
        {
            h=mid-1;
            d=1;
        }

    }
    if(d==1  && f==0)
        return k;
    else
        return l;
}}










int bs_ub(vi v,int k)
{
    int n=v.size();
    int mid=(n-1)/2;
    if(n==1)
    return v[0];
    else
    {int l=0,h=n-1,d=0,f=0;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(v[mid]<k)
        {
            l=mid+1;
        }
        else if(v[mid]>k)
        {
            h=mid;
            f=1;
            if(l==h)
            break;
        }
        else if(v[mid]==k)
        {
            l=mid+1;
            d=1;
        }

    }
    if(d==1  && f==0)
        return k;
    else
        return h;
}}



const lld pi=3.141592653589793;

void DFS2(int u,vi &vis,map<int,vi>&adj,vi &color1,vi &color2,int l)
{
    vis[u]=true;
    if(l%4==1 || l%4==0)
        color1[u]=1;
    else
        color1[u]=0;
    if(l%2==0)
        color2[u]=0;
    else
        color2[u]=1;


    for(auto x:adj[u])
    {
        if(vis[x]==false)
            {DFS2(x,vis,adj,color1,color2,l+1);
            }
    }
}
string p1="abcdefghijklmnopqrstuvwxyz";
string p2="ABCDEFGHIJKLMNOPQRSTUVWXYZ";



int32_t main()
{      IOS;
       int t;
       cin>>t;
       rep(i1,0,t)
       {
         int n;
         cin>>n;
         if(n%2==0)
            {rep(i,1,(n/2)+1)
            {cout<<2*i<<" "<<2*i-1<<" ";}
            cout<<"\n";}
            else
            {if(n==3)
            cout<<"3 1 2"<<"\n";
            else
            {cout<<"3 1 2"<<" ";
            rep(i,2,((n-3)/2)+2)
            {cout<<2*i+1<<" "<<2*i<<" ";}
            cout<<"\n";}}}









return 0;}
