#include<bits/stdc++.h>
using namespace std;
int T;
int main(){
	cin>>T;
	for(register int y=1;y<=T;y++)/* 'for' inside */
	{
		string s;
		cin>>s;
		int n=s.size();
		s=' '+s;
		int fuc=0;
		for(register int i=1;i<=n;++i)
		/* 'for' inside */
		{
			/* 'if' begin */
			if(s[i]!='a')
			/* 'if' inside */
			{
				fuc=0;
				break;
			}
			fuc=1;
		}
		/* 'if' begin */
		if(fuc==1)
		/* 'if' inside */
		{
			cout<<"NO\n";
			continue;
		}
		cout<<"YES\n";
		for(register int i=1;i<=n;++i)
		/* 'for' inside */
		{
			/* 'if' begin */
			if(s[n-i+1]!='a')
			/* 'if' inside */
			{
				for(register int j=1;j<i;j++)
					/* 'for' inside */
					cout<<s[j];
				cout<<"a";
				for(register int j=i;j<=n;j++)
					/* 'for' inside */
					cout<<s[j];
				cout<<endl;
				break;
			}
		}
	}
	return 0;
}
	  	  	 		  	 	  	  	    		 	