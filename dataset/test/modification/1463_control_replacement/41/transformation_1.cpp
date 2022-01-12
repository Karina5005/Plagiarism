#include <iomanip>
#include <iostream>
#import<bits/stdc++.h>
using namespace std;
int a,b,c,p,s,t;
main()
{
	{
	cin>>t;
	for ( ; t--; ) 
{
		cin>>a>>b>>c;
		p=min(a,min(b,c));
		s=a+b+c;
		if(!(s%9||s/9>p))cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}