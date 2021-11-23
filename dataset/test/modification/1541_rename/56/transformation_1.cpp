#include<bits/stdc++.h>
using namespace std;
int main(){
	int lo_ym;
	cin>>lo_ym;
	while(lo_ym--){
		int j;
		cin>>j;
		if(j%2==0){
			for(int hc_q=1;hc_q<j;hc_q=hc_q+2){
				cout<<hc_q+1<<" "<<hc_q<<" ";
			}
			cout<<endl;
		}
		else{
			int rul_bd[j];
			for(int be_b=1;be_b<j-2;be_b=be_b+2){
				cout<<be_b+1<<" "<<be_b<<" ";
			}
			cout<<j<<" "<<j-2<<" "<<j-1<<endl;
		}
	}
}