


#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int ai, ddk,j,sdd_oyq,tj_ccb,y,pub_be;

void dx(){
	cin>>ddk>>j>>sdd_oyq>>tj_ccb>>y>>pub_be;
	int khi_beh,ged;
	if(y>=sdd_oyq) khi_beh=y-sdd_oyq;
	else khi_beh=2*ddk-y-sdd_oyq;
	if(pub_be>=tj_ccb) ged=pub_be-tj_ccb;
	else ged=2*j-pub_be-tj_ccb;	
	
	cout<<min(khi_beh,ged)<<endl;
	
}

int main(){
	cin>>ai;
	while(ai--){
		dx();		
	}
	return 0;
}

