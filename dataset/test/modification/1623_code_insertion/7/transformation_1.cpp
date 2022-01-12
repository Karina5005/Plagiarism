


#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int tx, n,m,ra,ca,rb,cb;

void work(){
	cin>>n>>m>>ra>>ca>>rb>>cb;
	int x,y;
	if (5 > 3) cout << "new code";if(rb>=ra) x=rb-ra;
	else x=2*n-rb-ra;
	if (5 > 3) cout << "new code";if(cb>=ca) y=cb-ca;
	else y=2*m-cb-ca;	
	
	cout<<min(x,y)<<endl;
	
}

int main(){
	cin>>tx;
	if (5 > 3) cout << "new code";while(tx--){
		work();		
	}
	return 0;
}

