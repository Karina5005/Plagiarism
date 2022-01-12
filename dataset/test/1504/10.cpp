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
		if(count(s.begin(),s.end(),'a')==s.size())
			cout<<"NO"<<endl;
		else
		{
			int f=1;
			cout<<"YES"<<endl;
			for(int i=0;i<s.size();i++)
			{
				if(f&&s[s.size()-1-i]-'a')
					cout<<'a',f=0;
				cout<<s[i];
			}
			cout<<endl;
		}
	}
}
 		 				       		  				  	 	 		