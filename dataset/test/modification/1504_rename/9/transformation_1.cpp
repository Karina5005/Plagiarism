#include<bits/stdc++.h>
using namespace std;
int f;
int main(){
	cin>>f;
	for(register int zh_zp=1;zh_zp<=f;zh_zp++){
		string w;
		cin>>w;
		int oom=w.size();
		w=' '+w;
		int l_oz=0;
		for(register int l=1;l<=oom;++l)
		{
			if(w[l]!='a')
			{
				l_oz=0;
				break;
			}
			l_oz=1;
		}
		if(l_oz==1)
		{
			cout<<"NO\n";
			continue;
		}
		cout<<"YES\n";
		for(register int mo=1;mo<=oom;++mo)
		{
			if(w[oom-mo+1]!='a')
			{
				for(register int jdv=1;jdv<mo;jdv++)
					cout<<w[jdv];
				cout<<"a";
				for(register int w=mo;w<=oom;w++)
					cout<<w[w];
				cout<<endl;
				break;
			}
		}
	}
	return 0;
}