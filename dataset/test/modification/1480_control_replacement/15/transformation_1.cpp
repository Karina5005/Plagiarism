#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
long long t,i;
int main()
{
	string s;
	cin>>t;
	for ( ; t--; ) 
{
		cin>>s;
		{
		i=0;
		for ( ; i<s.size(); ) 
{
			if(!(i%2==0))
			{
				if(s[i]!='z') s[i]='z';
				else s[i]='y';
			}
			else
			{
				if(s[i]!='a') s[i]='a';
				else s[i]='b';
			}
			i++; 
		
		}}
		cout<<s<<"\n";
	}
}
// #begnazar_cpp

