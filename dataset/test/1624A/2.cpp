#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int Max=1e9+5;
int main(){
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		ll mina=Max,maxa=0;
		for(int i=0;i<n;i++){
			ll k;cin>>k;
			mina=min(mina,k);
			maxa=max(maxa,k);
		}
		cout<<maxa-mina<<endl;
	}
}
