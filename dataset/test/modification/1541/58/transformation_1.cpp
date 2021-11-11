

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#define int long long
#define IOS std::ios::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define mod 1000000007ll 
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

    /* 'if' begin */
    if (n <=1)
        /* 'if' inside */
        return false;


    for (int i = 2; i <= sqrt(n); i++)
        /* 'for' inside */
        /* 'if' begin */
        if (n % i == 0)
            /* 'if' inside */
            return false;

    return true;
}

 bool cmp(pair<int,int>p1,pair<int,int>p2)
 {
     /* 'if' begin */
     if(p1.first!=p2.first)
     /* 'if' inside */
     return p1.first<p2.first;
     else
     return p1.second<p2.second;

 }


vector<vector<int>> mul(vector<vector<int>>A,vector<vector<int>>B,int p)
{
  int m=A.size(),n1=A[0].size(),n2=B.size(),k=B[0].size();
  /* 'if' begin */
  if(n1!=n2)
  /* 'if' inside */
  return {};
  else /* 'if' begin */
  if(n1==n2)
  /* 'if' inside */
  {   vector<vector<int>>c(m,vector<int>(k,0));
      int n=n1;
      for(int i=0;i<m;i++)
      /* 'for' inside */
      {
          for(int j=0;j<k;j++)
          /* 'for' inside */
          {
              for(int k1=0;k1<n;k1++)
              /* 'for' inside */
              {
                  c[i][j]=(c[i][j]%p+((A[i][k1]%p)*(B[k1][j]%p))%p)%p;
              }
          }
      }
      return c;
  }}

int power(int a,int b,int p,map<int,int>&dp)
{   /* 'if' begin */
if(dp.count(b)==0)
    /* 'if' inside */
    {/* 'if' begin */
    if(b==1)
    /* 'if' inside */
    return dp[1]=a;
    else /* 'if' begin */
    if(b==0)
    /* 'if' inside */
    return dp[0]=1;
    else /* 'if' begin */
    if(b%2==0)
        /* 'if' inside */
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
      /* 'if' begin */
      if(w[mid]==x)
        /* 'if' inside */
        return mid;
      else /* 'if' begin */
      if(x<w[mid])
        /* 'if' inside */
        h=mid-1;
      else /* 'if' begin */
      if(x>w[mid])
        /* 'if' inside */
        l=mid+1;
  }
  return -1;
}

int gcd(int a, int b)
{
    /* 'if' begin */
    if (b == 0)
    /* 'if' inside */
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
    for (int i = 0; i < g_c_d; i++) /* 'for' inside */
    {

        int temp = arr[i];
        int j = i;

        while (1) {
            int k = j + d;
            /* 'if' begin */
            if (k >= n)
                /* 'if' inside */
                k = k - n;

            /* 'if' begin */
            if (k == i)
                /* 'if' inside */
                break;

            arr[j] = arr[k];
            j = k;
        }
        arr[j] = temp;
    }
}

int fact(int n, int p)
{
    /* 'if' begin */
    if (n >= p)
        /* 'if' inside */
        return 0;

    int result = 1;
    for (int i = 1; i <= n; i++)
        /* 'for' inside */
        result = (result * i) % p;

    return result;
}

       void good(string prev,int n,int k,string S,string s,int &mini)
        {   /* 'if' begin */
        if(n==1)
            /* 'if' inside */
            {
                string p(1,S[k]);
                string prev1=prev+p;
                int c=0;
                rep(i,0,s.size())
                {
                    /* 'if' begin */
                    if(prev1[i]!=s[i])
                        /* 'if' inside */
                        c++;
                }
                mini=min(c,mini);
                string prev2=p+prev;
                c=0;
                rep(i,0,s.size())
                {
                    /* 'if' begin */
                    if(prev2[i]!=s[i])
                        /* 'if' inside */
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
        /* 'if' begin */
        if(vis[x]!=true)
             /* 'if' inside */
             {xorx[u]^=DFS(x,adj,vis,xorx,res,v);
            }
    }
    xorx[u]^=v[u];
    return xorx[u];

}
int DFS1(int u,map<int,vi>&adj,map<int,bool>&vis1,vi &xorx,int &res,int &c)
{   vis1[u]=true;
    /* 'if' begin */
    if( u!=0 && xorx[u]==res)
    /* 'if' inside */
    {
    return 1;}


    for(auto x:adj[u])
    {
        /* 'if' begin */
        if(vis1[x]!=true)
             /* 'if' inside */
             {/* 'if' begin */
             if(DFS1(x,adj,vis1,xorx,res,c)==1)
              /* 'if' inside */
              {/* 'if' begin */
              if(u==0)
              /* 'if' inside */
              {c++;
               /* 'if' begin */
               if(c==2)
                /* 'if' inside */
                return 1;}
              /* 'if' begin */
              if(u!=0)
             /* 'if' inside */
             return 1;}
            }
    }

    return 0;

}
int getPairsCount(vi arr, int n, int k)
{
    unordered_map<int, int> m;
    int count = 0;
    for (int i = 0; i < n; i++) /* 'for' inside */
    {
        /* 'if' begin */
        if (m.find(k - arr[i]) != m.end()) /* 'if' inside */
        {
            count += m[k - arr[i]];
        }
        m[arr[i]]++;
    }
    return count;
}

int rem(int a,int b)
{
    /* 'if' begin */
    if(a>=0 && (b>0 || b<0))
    /* 'if' inside */
    {
        return a%b;
    }
    else /* 'if' begin */
    if(a<0 && (b>0 || b<0))
    /* 'if' inside */
    {
        return (abs(b)+(a%b))%abs(b);
    }

}

int bs_lb(vi v,int k)
{
    int n=v.size();
    int mid=(n-1)/2;
    /* 'if' begin */
    if(n==1)
    /* 'if' inside */
    return v[0];
    else
    {int l=0,h=n-1,d=0,f=0;
    while(l<=h)
    {
        mid=(l+h)/2;
        /* 'if' begin */
        if(v[mid]<k)
        /* 'if' inside */
        {
            l=mid;
            f=1;
            /* 'if' begin */
            if(h-l==1 || h-l==0)
            /* 'if' inside */
            {
                /* 'if' begin */
                if(v[h]>=k)
                    /* 'if' inside */
                    break;
                else
                    {l=h;
                    break;}
            }
        }
        else /* 'if' begin */
        if(v[mid]>k)
        /* 'if' inside */
        {
            h=mid-1;

        }
        else /* 'if' begin */
        if(v[mid]==k)
        /* 'if' inside */
        {
            h=mid-1;
            d=1;
        }

    }
    /* 'if' begin */
    if(d==1  && f==0)
        /* 'if' inside */
        return k;
    else
        return l;
}}










int bs_ub(vi v,int k)
{
    int n=v.size();
    int mid=(n-1)/2;
    /* 'if' begin */
    if(n==1)
    /* 'if' inside */
    return v[0];
    else
    {int l=0,h=n-1,d=0,f=0;
    while(l<=h)
    {
        mid=(l+h)/2;
        /* 'if' begin */
        if(v[mid]<k)
        /* 'if' inside */
        {
            l=mid+1;
        }
        else /* 'if' begin */
        if(v[mid]>k)
        /* 'if' inside */
        {
            h=mid;
            f=1;
            /* 'if' begin */
            if(l==h)
            /* 'if' inside */
            break;
        }
        else /* 'if' begin */
        if(v[mid]==k)
        /* 'if' inside */
        {
            l=mid+1;
            d=1;
        }

    }
    /* 'if' begin */
    if(d==1  && f==0)
        /* 'if' inside */
        return k;
    else
        return h;
}}



const lld pi=3.141592653589793;

void DFS2(int u,vi &vis,map<int,vi>&adj,vi &color1,vi &color2,int l)
{
    vis[u]=true;
    /* 'if' begin */
    if(l%4==1 || l%4==0)
        /* 'if' inside */
        color1[u]=1;
    else
        color1[u]=0;
    /* 'if' begin */
    if(l%2==0)
        /* 'if' inside */
        color2[u]=0;
    else
        color2[u]=1;


    for(auto x:adj[u])
    {
        /* 'if' begin */
        if(vis[x]==false)
            /* 'if' inside */
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
         /* 'if' begin */
         if(n%2==0)
            /* 'if' inside */
            {rep(i,1,(n/2)+1)
            {cout<<2*i<<" "<<2*i-1<<" ";}
            cout<<"\n";}
            else
            {/* 'if' begin */
            if(n==3)
            /* 'if' inside */
            cout<<"3 1 2"<<"\n";
            else
            {cout<<"3 1 2"<<" ";
            rep(i,2,((n-3)/2)+2)
            {cout<<2*i+1<<" "<<2*i<<" ";}
            cout<<"\n";}}}









return 0;}
