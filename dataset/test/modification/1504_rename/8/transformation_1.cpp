#include<bits/stdc++.h>
using namespace std;
int mmd;
int main(){
	cin>>mmd;
	for(register int ue_mfc=1;ue_mfc<=mmd;ue_mfc++){
		string kp;
		cin>>kp;
		int is=kp.size();
		kp=' '+kp;
		int ef=0;
		for(register int ang_cvn=1;ang_cvn<=is;++ang_cvn)
		{
			if(kp[ang_cvn]!='a')
			{
				ef=0;
				break;
			}
			ef=1;
		}
		if(ef==1)
		{
			cout<<"NO\n";
			continue;
		}
		cout<<"YES\n";
		for(register int lc=1;lc<=is;++lc)
		{
			if(kp[is-lc+1]!='a')
			{
				for(register int v=1;v<lc;v++)
					cout<<kp[v];
				cout<<"a";
				for(register int ihd=lc;ihd<=is;ihd++)
					cout<<kp[ihd];
				cout<<endl;
				break;
			}
		}
	}
	return 0;
}
	  	  	 		  	 	  	  	    		 	