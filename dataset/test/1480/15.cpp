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
		{
			if(i%2==0)
			{
				if(s[i]!='a') s[i]='a';
				else s[i]='b';
			}
			else
			{
				if(s[i]!='z') s[i]='z';
				else s[i]='y';
			}
		}
		cout<<s<<"\n";
	}
}
// #begnazar_cpp

