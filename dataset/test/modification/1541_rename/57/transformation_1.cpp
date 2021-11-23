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


bool a_cq(int n)
{

    if (n <=1)
        return false;


    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;

    return true;
}

 bool b_fcl(pair<int,int>os,pair<int,int>m)
 {
     if(os.first!=m.first)
     return os.first<m.first;
     else
     return os.second<m.second;

 }


vector<vector<int>> hs_ftf(vector<vector<int>>k_r,vector<vector<int>>ge,int p)
{
  int m=k_r.size(),n1=k_r[0].size(),n2=ge.size(),k=ge[0].size();
  if(n1!=n2)
  return {};
  else if(n1==n2)
  {   vector<vector<int>>h_rc(m,vector<int>(k,0));
      int n=n1;
      for(int i=0;i<m;i++)
      {
          for(int j=0;j<k;j++)
          {
              for(int k1=0;k1<n;k1++)
              {
                  h_rc[i][j]=(h_rc[i][j]%p+((k_r[i][k1]%p)*(ge[k1][j]%p))%p)%p;
              }
          }
      }
      return h_rc;
  }}

int power(int a,int b,int p,map<int,int>&xfi_e)
{   if(xfi_e.count(b)==0)
    {if(b==1)
    return xfi_e[1]=a;
    else if(b==0)
    return xfi_e[0]=1;
    else if(b%2==0)
        return xfi_e[b]=((power(a,b/2,p,xfi_e)%p)*(power(a,b/2,p,xfi_e)%p))%p;
    else
        return xfi_e[b]=((((power(a,(b-1)/2,p,xfi_e)%p)*(power(a,(b-1)/2,p,xfi_e)%p))%p)*a)%p;}
    else
    return xfi_e[b];

}

int bs(vector<int>&st_puc,int x)
{
  int l=0,h=st_puc.size()-1;

  while(l<=h)
  {  int mid=(l+h)/2;
      if(st_puc[mid]==x)
        return mid;
      else if(x<st_puc[mid])
        h=mid-1;
      else if(x>st_puc[mid])
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


void wk_nh(vector<int>&wi, int d, int n)
{

    d = d % n;
    int g_c_d = gcd(d, n);
    for (int i = 0; i < g_c_d; i++) {

        int temp = wi[i];
        int j = i;

        while (1) {
            int k = j + d;
            if (k >= n)
                k = k - n;

            if (k == i)
                break;

            wi[j] = wi[k];
            j = k;
        }
        wi[j] = temp;
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

       void owi(string zd_ckh,int n,int k,string tvq,string d_mk,int &mini)
        {   if(n==1)
            {
                string e(1,tvq[k]);
                string t_rf=zd_ckh+e;
                int c=0;
                rep(i,0,s.size())
                {
                    if(t_rf[i]!=d_mk[i])
                        c++;
                }
                mini=min(c,mini);
                string dor_tkw=e+zd_ckh;
                c=0;
                rep(i,0,s.size())
                {
                    if(dor_tkw[i]!=d_mk[i])
                        c++;
                }
                mini=min(c,mini);
            }
            else
            {string z_w(n/2,tvq[k]);
             string wwk_ras=zd_ckh+z_w;
             owi(wwk_ras,n/2,k+1,tvq,d_mk,mini);
             string du_v=z_w+zd_ckh;
             owi(du_v,n/2,k+1,tvq,d_mk,mini);
        }}


int DFS(int u,map<int,vi>&s,map<int,bool>&kz,vi &xorx,int &res,vi &v)
{
    kz[u]=true;

    for(auto pm:s[u])
    {
        if(kz[pm]!=true)
             {xorx[u]^=DFS(pm,s,kz,xorx,res,v);
            }
    }
    xorx[u]^=v[u];
    return xorx[u];

}
int DFS1(int u,map<int,vi>&r,map<int,bool>&lr,vi &xorx,int &res,int &c)
{   lr[u]=true;
    if( u!=0 && xorx[u]==res)
    {
    return 1;}


    for(auto gt:r[u])
    {
        if(lr[gt]!=true)
             {if(DFS1(gt,r,lr,xorx,res,c)==1)
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
    unordered_map<int, int> bim;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (bim.find(k - arr[i]) != bim.end()) {
            count += bim[k - arr[i]];
        }
        bim[arr[i]]++;
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



const lld kzz_za=3.141592653589793;

void za_c(int u,vi &vis,map<int,vi>&ew_tgu,vi &color1,vi &color2,int l)
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


    for(auto rx:ew_tgu[u])
    {
        if(vis[rx]==false)
            {za_c(rx,vis,ew_tgu,color1,color2,l+1);
            }
    }
}
string dvl_y="abcdefghijklmnopqrstuvwxyz";
string m="ABCDEFGHIJKLMNOPQRSTUVWXYZ";



int32_t main()
{      IOS;
       int t;
       cin>>t;
       rep(i1,0,t)
       {
         int n;
         cin>>n;
         vi v(n);
         rep(i,0,n)
         cin>>v[i];
         int c=0;
         for(int i=1;i<=n-1;i++)
         {
             int r=(i)%v[i-1];
             for(int j=(v[i-1]-r);j<=n;j+=v[i-1])
             {if(i<j && v[i-1]*v[j-1]==i+j)
                c++;}
         }
         cout<<c<<"\n";}









return 0;}
