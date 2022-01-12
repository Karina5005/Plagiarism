#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1e9+7 
typedef pair<int,int>p;
bool ai(ll n)
{for(ll i=2;i*i<=n;i++)
  {
if(n%i==0)
{
  return 0;
}
  }
  return 1;
  }
bool ddk(pair<int,int>j,pair<int,int>sdd_oyq)
{
  return j.second>sdd_oyq.second;
}
bool tj_ccb(string y,int pub_be,int dx)
{
  int khi_beh=pub_be;
  while(khi_beh<=dx)
  {
    
    if(y[khi_beh++]!=y[dx--])
 {     return false;

 }
}
return true;
}
long long ged(int wj,  int mbx)
{
  if (mbx == 0)
    return wj;
  return ged(mbx, wj % mbx);
}
 
// Function to return LCM of two numbers
long long f_ioa(int nv_i, int d_o)
{
    return (nv_i / ged(nv_i, d_o)) * d_o;
}



void ouz_h()
{
  string v_v;
  cin>>v_v;
  int av=-1,z_btl=-1;
  av=v_v.find("11");
  z_btl=v_v.rfind("00");
if(av!=-1&&z_btl!=-1&&av<z_btl)
cout<<"NO"<<endl;
else
cout<<"YES"<<endl;
}
int main()
{
 
int vjx_bw=1;
 cin>>vjx_bw;
 while(vjx_bw--)
  {
ouz_h();
}
  }
