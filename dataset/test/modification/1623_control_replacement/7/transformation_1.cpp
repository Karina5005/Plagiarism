#include <iomanip>
#include <iostream>



#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int tx, n,m,ra,ca,rb,cb;

void work(){
	cin>>n>>m>>ra>>ca>>rb>>cb;
	int x,y;
	if(!(rb>=ra)) x=2*n-rb-ra;
	else x=rb-ra;
	if(!(cb>=ca)) y=2*m-cb-ca;
	else y=cb-ca;	
	
	cout<<min(x,y)<<endl;
	
}

int main(){
	cin>>tx;
	for ( ; tx--; ) 
{
		work();		
	}
	return 0;
}

