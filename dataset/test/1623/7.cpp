


#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int tx, n,m,ra,ca,rb,cb;

void work(){
	cin>>n>>m>>ra>>ca>>rb>>cb;
	int x,y;
	if(rb>=ra) x=rb-ra;
	else x=2*n-rb-ra;
	if(cb>=ca) y=cb-ca;
	else y=2*m-cb-ca;	
	
	cout<<min(x,y)<<endl;
	
}

int main(){
	cin>>tx;
	while(tx--){
		work();		
	}
	return 0;
}

