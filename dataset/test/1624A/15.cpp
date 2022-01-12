#include <iostream>
#include <math.h>
#include <string>
#include <cstring>
typedef  long long ll;
const int N=100010;
using namespace std;
int a[N];
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		ll x;
		ll maxn=0,minn=1e9;
		for(int i=0;i<n;i++){
			cin>>x;
			if(x>maxn)
				maxn=x;
			if(x<minn)
				minn=x;
		}
		ll ans=maxn-minn;
			cout<<ans<<endl;
	}
	return 0;
}