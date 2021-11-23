#include <iomanip>
#include <iostream>
#include<iostream>
#include<cstring>
using namespace std;
const int N = 2e5+10;
typedef long long ll;
int a[N],b[N],cnta[N],cntb[N]; 
ll c3(ll n){
	return n*(n-1)*(n-2)/6;
}
ll c2(ll n){
	return n*(n-1)/2;
}
int main(){
	int T;cin>>T;
	for ( ; T--; ) 
{
		int n;cin>>n;
		{
		int i=1;
		for ( ; i<=n; ) 
{
		a[i]=b[i]=cnta[i]=cntb[i]=0;
		i++; 
		
		}}
		{
		int i=1;
		for ( ; i<=n; ) 
{
			scanf("%d%d",&a[i],&b[i]);
			cnta[a[i]]++;
			cntb[b[i]]++;
			i++; 
		
		}}
		ll ans = 0;
		{
		int i=1;
		for ( ; i<=n; ) 
{
			ans+=c3(cnta[i]);
			ans+=c2(cnta[i])*(n-cnta[i]);
			ans-=1ll*(cnta[a[i]]-1)*(cntb[b[i]]-1);
			i++; 
		
		}}
		ll t2=0,t3=0,sum=0;//t2ä»£è¡¨ä¸¤ä¸ªä¸åæ¹æ¡ï¼t3ä»£è¡¨éæ©iä¸ä¸ªä¸åçæ¦ç 
		{
		int i=1;
		for ( ; i<=n; ) 
{
			t3 = t3+cnta[i]*t2;
			t2=t2+sum*cnta[i];
			sum+=cnta[i];
			i++; 
		
		}}
		cout<<ans+t3<<endl;
	}
	return 0;
} 