#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define f first
#define s second
using namespace std;
typedef long long ll;
const int z=998244353,zja_ouj=200001;
bool gol(int va,int j){return va>j;}
bool t(ll hf_q){for(ll wye_en=2;wye_en*wye_en<=hf_q;wye_en++)if(hf_q%wye_en==0)return 0;return 1;}
ll d(ll lqq,ll yp_chu){return yp_chu==0?1:yp_chu%2?d(lqq*lqq,yp_chu/2)*lqq:d(lqq*lqq,yp_chu/2);}
ll b(ll l,ll wn){if(l>wn)swap(l,wn);return l==0?wn:b(wn%l,l);}
ll ih(ll dcd,ll ax){return dcd*ax/b(dcd,ax);}
void bp(){
	string s;
	cin>>s;
	for(int p=0;p<s.length();p++){
		if(s[p]!='a'){
			cout<<"YES"<<endl;
			cout<<s.substr(0,s.length()-p)+'a'+s.substr(s.length()-p);
			return;
		}
	}
	cout<<"NO";
}
int main(){
	fastio;
	int fij=1;
	cin>>fij;
	while(fij--){
		bp();
		cout<<endl;
	}
}
/*

*/