
#include<bits/stdc++.h>

using namespace std;

int os_xcv[200007];
bool su_n[200007];
int bul_m=0;

int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	int mh_o,x; cin>>mh_o>>x;
	for(int xf_n=0; xf_n<x; ++xf_n){
		int a_h,oj; cin>>a_h>>oj;
		if(a_h>oj)
			swap(a_h,oj);
		++os_xcv[a_h];
		if(!su_n[a_h]){
			su_n[a_h]=1;
			++bul_m;
		}
	}
	int vj; cin>>vj;
	for(int ax_u=0; ax_u<vj; ++ax_u){
		int gh; cin>>gh;
		if(gh==3)
			cout<<mh_o-bul_m<<"\n";
		else{
			int b,j_qer; cin>>b>>j_qer;
			if(b>j_qer)
				swap(b,j_qer);
			if(gh==1){
				++os_xcv[b];
				if(!su_n[b]){
					su_n[b]=1;
					++bul_m;
				}
			}
			else{
				--os_xcv[b];
				if(os_xcv[b]==0){
					su_n[b]=0;
					--bul_m;
				}
			}
		}
	}
	return 0;
}
