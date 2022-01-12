


#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int tx, n,m,ra,ca,rb,cb;

void work(){
	cin>>n>>m>>ra>>ca>>rb>>cb;
	int x,y;
	/* 'if' begin */
	if(rb>=ra) /* 'if' inside */
	x=rb-ra;
	else x=2*n-rb-ra;
	/* 'if' begin */
	if(cb>=ca) /* 'if' inside */
	y=cb-ca;
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

