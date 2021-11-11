

#include<iostream>
using namespace std;
int main(){ 
	int n;
	cin>>n;
	int *p,l;
	long long ans;
	while(n--){
		ans=0;
		cin>>l;
		p=new int[l+1];
		for(int i=1;i<=l;i++)  /* 'for' inside */
		cin>>p[i];
		for(int i=1;i<=l;i++)/* 'for' inside */
		{    
			for(int j=p[i]-i%p[i];j<=l;j+=p[i])/* 'for' inside */
			{
				/* 'if' begin */
				if(j<=i)  /* 'if' inside */
				continue;
				/* 'if' begin */
				if(1ll*p[i]*p[j]==i+j)  /* 'if' inside */
				ans++;
			}
		}
		cout<<ans<<endl;
		delete []p;
	} 
	return 0;
}

