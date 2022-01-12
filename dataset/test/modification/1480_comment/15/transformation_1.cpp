#include<bits/stdc++.h>
using namespace std;
long long t,i;
int main()
{
	string s;
	cin>>t;
	while(t--)
	{
		cin>>s;
		for(i=0;i<s.size();i++)
		/* 'for' inside */
		{
			/* 'if' begin */
			if(i%2==0)
			/* 'if' inside */
			{
				/* 'if' begin */
				if(s[i]!='a') /* 'if' inside */
				s[i]='a';
				else s[i]='b';
			}
			else
			{
				/* 'if' begin */
				if(s[i]!='z') /* 'if' inside */
				s[i]='z';
				else s[i]='y';
			}
		}
		cout<<s<<"\n";
	}
}


