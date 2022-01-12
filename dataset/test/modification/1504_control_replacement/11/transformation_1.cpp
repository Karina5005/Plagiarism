#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; 
	cin>>t; 
	while(t--)
	{
		string s;
		cin>>s;
		if(!(count(s.begin(),s.end(),'a')==s.size()))
			{
			int f=1;
			cout<<"YES"<<endl;
			{
			int i=0;
			while (i<s.size()) {
				if(f&&s[s.size()-1-i]-'a')
					cout<<'a',f=0;
				cout<<s[i];
				i++; 
			
			}}
			cout<<endl;
		}
		else
		cout<<"NO"<<endl;
	}
}