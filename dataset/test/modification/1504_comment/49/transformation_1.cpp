#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
	int n; cin>>n;
	string s1,s2; cin>>s1>>s2;
	int x=0,y=0,k=0;
	for(int i=0;i<s1.size();i++)/* 'for' inside */
	{
		/* 'if' begin */
		if(s1[i]=='1') /* 'if' inside */
		x++;
		else x--;
		/* 'if' begin */
		if(s2[i]=='1') /* 'if' inside */
		y++;
		else y--;
		/* 'if' begin */
		if(x!=y&&x!=-y)/* 'if' inside */
		{k=1; break;}} 
	 /* 'if' begin */
	 if(k||x!=y) /* 'if' inside */
	 cout<<"NO"; else cout<<"YES";
	 cout<<endl;}
}