#include<bits/stdc++.h>
using namespace std;
int T;
int main(){
	cin>>T;
	for(register int y=1;y<=T;y++){
		string s;
		cin>>s;
		int n=s.size();
		s=' '+s;
		int fuc=0;
		for(register int i=1;i<=n;++i)
		{
			if(s[i]!='a')
			{
				fuc=0;
				break;
			}
			fuc=1;
		}
		if(fuc==1)
		{
			cout<<"NO\n";
			continue;
		}
		cout<<"YES\n";
		for(register int i=1;i<=n;++i)
		{
			if(s[n-i+1]!='a')
			{
				for(register int j=1;j<i;j++)
					cout<<s[j];
				cout<<"a";
				for(register int j=i;j<=n;j++)
					cout<<s[j];
				cout<<endl;
				break;
			}
		}
	}
	return 0;
}