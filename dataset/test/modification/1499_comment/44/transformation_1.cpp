#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1e9+7 
typedef pair<int,int>p;
bool isprime(ll n)
{for(ll i=2;i*i<=n;i++)
  /* 'for' inside */
  {
/* 'if' begin */
if(n%i==0)
/* 'if' inside */
{
  return 0;
}
  }
  return 1;
  }
bool cmp(pair<int,int>a,pair<int,int>b)
{
  return a.second>b.second;
}
bool ispalidrome(string s,int i,int n)
{
  int j=i;
  while(j<=n)
  {
    
    /* 'if' begin */
    if(s[j++]!=s[n--])
 /* 'if' inside */
 {     return false;

 }
}
return true;
}
long long gcd(int a,  int b)
{
  /* 'if' begin */
  if (b == 0)
    /* 'if' inside */
    return a;
  return gcd(b, a % b);
}
 

long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}



void soln()
{
  string s;
  cin>>s;
  int f=-1,f1=-1;
  f=s.find("11");
  f1=s.rfind("00");
/* 'if' begin */
if(f!=-1&&f1!=-1&&f<f1)
/* 'if' inside */
cout<<"NO"<<endl;
else
cout<<"YES"<<endl;
}
int main()
{
 
int t=1;
 cin>>t;
 while(t--)
  {
soln();
}
  }
