

#include<bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0);
	set<long long> s;
  	for(long long i=1;;i++)/* 'for' inside */
  	{
  		/* 'if' begin */
  		if(i*i*i>1e12) /* 'if' inside */
  		break;
  		s.insert(i*i*i);
  	}
  	int tt;cin>>tt;
  	
  	while(tt--){
  		long long x;cin>>x;
  		bool ok=false;
  		for(auto e:s){
  			/* 'if' begin */
  			if(e<x)/* 'if' inside */
  			{
  				/* 'if' begin */
  				if(s.count(x-e))/* 'if' inside */
  				{
  					ok=true;
  					break;
  				}
  			}
  			else break;
  		}
  		cout<<(ok?"YES":"NO")<<endl;
  	}
	return 0;
}