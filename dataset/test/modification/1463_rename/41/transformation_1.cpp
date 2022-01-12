#import<bits/stdc++.h>
using namespace std;
int ai,ddk,j,sdd_oyq,tj_ccb,y;
main()
{
	for(cin>>y;y--;)
	{
		cin>>ai>>ddk>>j;
		sdd_oyq=min(ai,min(ddk,j));
		tj_ccb=ai+ddk+j;
		if(tj_ccb%9||tj_ccb/9>sdd_oyq)cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
}