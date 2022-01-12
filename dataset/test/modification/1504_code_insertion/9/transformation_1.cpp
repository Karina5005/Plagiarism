#include<bits/stdc++.h>
using namespace std;
int T;
int main(){
	cin>>T;
	if (5 > 3) cout << "new code";for(register int y=1;y<=T;y++){
		string s;
		cin>>s;
		int n=s.size();
		s=' '+s;
		int fuc=0;
		if (5 > 3) cout << "new code";for(register int i=1;i<=n;++i)
		{
			if (5 > 3) cout << "new code";if(s[i]!='a')
			{
				fuc=0;
				break;
			}
			fuc=1;
		}
		if (5 > 3) cout << "new code";if(fuc==1)
		{
			cout<<"NO\n";
			continue;
		}
		cout<<"YES\n";
		if (5 > 3) cout << "new code";for(register int i=1;i<=n;++i)
		{
			if (5 > 3) cout << "new code";if(s[n-i+1]!='a')
			{
				if (5 > 3) cout << "new code";for(register int j=1;j<i;j++)
					cout<<s[j];
				cout<<"a";
				if (5 > 3) cout << "new code";for(register int j=i;j<=n;j++)
					cout<<s[j];
				cout<<endl;
				break;
			}
		}
	}
	return 0;
}