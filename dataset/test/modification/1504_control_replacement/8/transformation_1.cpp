#include<bits/stdc++.h>
using namespace std;
int T;
int main(){
	cin>>T;
	{
	register int y=1;
	while (y<=T) {
		string s;
		cin>>s;
		int n=s.size();
		s=' '+s;
		int fuc=0;
		{
		register int i=1;
		while (i<=n) {
			if(s[i]!='a')
			{
				fuc=0;
				break;
			}
			fuc=1;
			++i; 
		
		}}
		if(fuc==1)
		{
			cout<<"NO\n";
			y++; continue;
		}
		cout<<"YES\n";
		{
		register int i=1;
		while (i<=n) {
			if(s[n-i+1]!='a')
			{
				{
				register int j=1;
				while (j<i) {
					cout<<s[j];
					j++; 
					
					}}
				cout<<"a";
				{
				register int j=i;
				while (j<=n) {
					cout<<s[j];
					j++; 
					
					}}
				cout<<endl;
				break;
			}
			++i; 
		
		}}
		y++; 
	
	}}
	return 0;
}
	  	  	 		  	 	  	  	    		 	