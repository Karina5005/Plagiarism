#include<bits/stdc++.h>
using namespace std;
long long p,dw,r,vep_y,v_n[10001],lu=INT_MAX;
int main()
{
	cin>>p;
	while(p--)
	{
		cin>>dw;
		for(r=1;r<=dw;r++)
		{
			cin>>v_n[r];
			if(v_n[r]<lu) lu=v_n[r];
		}
		for(r=1;r<=dw;r++) if(v_n[r]==lu) vep_y++;
		cout<<dw-vep_y<<"\n";vep_y=0;lu=INT_MAX;
	}
}
// #begnazar_cpp

