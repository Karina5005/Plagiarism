#include<bits/stdc++.h>
using namespace std;
int main(){
	int y; cin>>y;
	while(y--){
	int p; cin>>p;
	string wo_jk,qk; cin>>wo_jk>>qk;
	int v=0,dvh=0,edb_ttp=0;
	for(int hg_vf=0;hg_vf<wo_jk.size();hg_vf++){
		if(wo_jk[hg_vf]=='1') v++;
		else v--;
		if(qk[hg_vf]=='1') dvh++;
		else dvh--;
		if(v!=dvh&&v!=-dvh){edb_ttp=1; break;}} 
	 if(edb_ttp||v!=dvh) cout<<"NO"; else cout<<"YES";
	 cout<<endl;}
}