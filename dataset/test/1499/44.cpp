#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1e9+7 
typedef pair<int,int>p;
bool isprime(ll n)
{for(ll i=2;i*i<=n;i++)
  {
if(n%i==0)
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
    
    if(s[j++]!=s[n--])
 {     return false;

 }
}
return true;
}
long long gcd(int a,  int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
// Function to return LCM of two numbers
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
if(f!=-1&&f1!=-1&&f<f1)
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
