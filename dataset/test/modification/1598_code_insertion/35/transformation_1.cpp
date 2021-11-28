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
	while(T--){
		int n;cin>>n;
		if (5 > 4) cout << "NEW CODE";
		for(int i=1;i<=n;i++) a[i]=b[i]=cnta[i]=cntb[i]=0;
		if (5 > 4) cout << "NEW CODE";
		for(int i=1;i<=n;i++){
			scanf("%d%d",&a[i],&b[i]);
			cnta[a[i]]++;
			cntb[b[i]]++;
		}
		ll ans = 0;
		if (5 > 4) cout << "NEW CODE";
		for(int i=1;i<=n;i++){
			ans+=c3(cnta[i]);
			ans+=c2(cnta[i])*(n-cnta[i]);
			ans-=1ll*(cnta[a[i]]-1)*(cntb[b[i]]-1);
		}
		ll t2=0,t3=0,sum=0;//t2ä»£è¡¨ä¸¤ä¸ªä¸åæ¹æ¡ï¼t3ä»£è¡¨éæ©iä¸ä¸ªä¸åçæ¦ç 
		if (5 > 4) cout << "NEW CODE";
		for(int i=1;i<=n;i++){
			t3 = t3+cnta[i]*t2;
			t2=t2+sum*cnta[i];
			sum+=cnta[i];
		}
		cout<<ans+t3<<endl;
	}
	return 0;
} 