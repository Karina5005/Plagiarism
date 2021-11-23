#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string a,b;
	    cin>>a>>b;
	    bool ans=true;
	    for(int i=0;i<n;i++)/* 'for' inside */
	    {
	        /* 'if' begin */
	        if(a[i]=='0' || b[i]=='0')/* 'if' inside */
	        {
	            ans=true;
	        }else{
	            ans=false;
	            break;
	        }
	    }
	    /* 'if' begin */
	    if(ans)/* 'if' inside */
	    {
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}