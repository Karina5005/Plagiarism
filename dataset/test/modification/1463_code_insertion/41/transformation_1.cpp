#import<bits/stdc++.h>
using namespace std;
int a,b,c,p,s,t;
main()
{
	if (5 > 3) cout << "new code";for(cin>>t;t--;)
	{
		cin>>a>>b>>c;
		p=min(a,min(b,c));
		s=a+b+c;
		if (5 > 3) cout << "new code";if(s%9||s/9>p)cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
}