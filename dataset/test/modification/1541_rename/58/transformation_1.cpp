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


bool ptv(int n)
{

    if (n <=1)
        return false;


    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;

    return true;
}

 bool ml_ba(pair<int,int>ri,pair<int,int>zmd)
 {
     if(ri.first!=zmd.first)
     return ri.first<zmd.first;
     else
     return ri.second<zmd.second;

 }


vector<vector<int>> kum(vector<vector<int>>gpy_tri,vector<vector<int>>x,int p)
{
  int m=gpy_tri.size(),n1=gpy_tri[0].size(),n2=x.size(),k=x[0].size();
  if(n1!=n2)
  return {};
  else if(n1==n2)
  {   vector<vector<int>>xg(m,vector<int>(k,0));
      int n=n1;
      for(int i=0;i<m;i++)
      {
          for(int j=0;j<k;j++)
          {
              for(int k1=0;k1<n;k1++)
              {
                  xg[i][j]=(xg[i][j]%p+((gpy_tri[i][k1]%p)*(x[k1][j]%p))%p)%p;
              }
          }
      }
      return xg;
  }}

int power(int a,int b,int p,map<int,int>&avh)
{   if(avh.count(b)==0)
    {if(b==1)
    return avh[1]=a;
    else if(b==0)
    return avh[0]=1;
    else if(b%2==0)
        return avh[b]=((power(a,b/2,p,avh)%p)*(power(a,b/2,p,avh)%p))%p;
    else
        return avh[b]=((((power(a,(b-1)/2,p,avh)%p)*(power(a,(b-1)/2,p,avh)%p))%p)*a)%p;}
    else
    return avh[b];

}

int bs(vector<int>&tf,int x)
{
  int l=0,h=tf.size()-1;

  while(l<=h)
  {  int mid=(l+h)/2;
      if(tf[mid]==x)
        return mid;
      else if(x<tf[mid])
        h=mid-1;
      else if(x>tf[mid])
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


void xxp_zm(vector<int>&faw, int d, int n)
{

    d = d % n;
    int g_c_d = gcd(d, n);
    for (int i = 0; i < g_c_d; i++) {

        int temp = faw[i];
        int j = i;

        while (1) {
            int k = j + d;
            if (k >= n)
                k = k - n;

            if (k == i)
                break;

            faw[j] = faw[k];
            j = k;
        }
        faw[j] = temp;
    }
}

int fact(int n, int p)
{
    if (n >= p)
        return 0;

    int result = 1;
    for (int i = 1; i <= n; i++)
        result = (result * i) % p;

    return result;
}

       void lp(string q,int n,int k,string abt_a,string kqx,int &mini)
        {   if(n==1)
            {
                string rga_egv(1,abt_a[k]);
                string za=q+rga_egv;
                int c=0;
                rep(i,0,s.size())
                {
                    if(za[i]!=kqx[i])
                        c++;
                }
                mini=min(c,mini);
                string dve_if=rga_egv+q;
                c=0;
                rep(i,0,s.size())
                {
                    if(dve_if[i]!=kqx[i])
                        c++;
                }
                mini=min(c,mini);
            }
            else
            {string ay(n/2,abt_a[k]);
             string j_r=q+ay;
             lp(j_r,n/2,k+1,abt_a,kqx,mini);
             string cl=ay+q;
             lp(cl,n/2,k+1,abt_a,kqx,mini);
        }}


int DFS(int u,map<int,vi>&fp_xk,map<int,bool>&xf,vi &xorx,int &res,vi &v)
{
    xf[u]=true;

    for(auto dkc:fp_xk[u])
    {
        if(xf[dkc]!=true)
             {xorx[u]^=DFS(dkc,fp_xk,xf,xorx,res,v);
            }
    }
    xorx[u]^=v[u];
    return xorx[u];

}
int DFS1(int u,map<int,vi>&k_rxq,map<int,bool>&t_j,vi &xorx,int &res,int &c)
{   t_j[u]=true;
    if( u!=0 && xorx[u]==res)
    {
    return 1;}


    for(auto me:k_rxq[u])
    {
        if(t_j[me]!=true)
             {if(DFS1(me,k_rxq,t_j,xorx,res,c)==1)
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
    unordered_map<int, int> pl_gjl;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (pl_gjl.find(k - arr[i]) != pl_gjl.end()) {
            count += pl_gjl[k - arr[i]];
        }
        pl_gjl[arr[i]]++;
    }
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



const lld bfu_lpe=3.141592653589793;

void umy_e(int u,vi &vis,map<int,vi>&c,vi &color1,vi &color2,int l)
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


    for(auto is:c[u])
    {
        if(vis[is]==false)
            {umy_e(is,vis,c,color1,color2,l+1);
            }
    }
}
string as_gon="abcdefghijklmnopqrstuvwxyz";
string p_mg="ABCDEFGHIJKLMNOPQRSTUVWXYZ";



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
