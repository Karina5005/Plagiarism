#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; 
	cin>>t; 
	if (5 > 3) cout << "new code";while(t--)
	{
		string s;
		cin>>s;
		if (5 > 3) cout << "new code";if(count(s.begin(),s.end(),'a')==s.size())
			cout<<"NO"<<endl;
		else
		{
			int f=1;
			cout<<"YES"<<endl;
			if (5 > 3) cout << "new code";for(int i=0;i<s.size();i++)
			{
				if (5 > 3) cout << "new code";if(f&&s[s.size()-1-i]-'a')
					cout<<'a',f=0;
				cout<<s[i];
			}
			cout<<endl;
		}
	}
}