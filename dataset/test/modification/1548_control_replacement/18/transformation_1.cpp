#include<bits/stdc++.h>
using namespace std;
const int N=200010;
int c[N],n,m,q,sum;
int main(){
	scanf("%d%d",&n,&m);
	{
	int i=1;
	while (i<=m) {
		int u,v;
		scanf("%d%d",&u,&v);
		c[min(u,v)]++;
		i++; 
	
	}}
	{
	int i=1;
	while (i<=n) {
		if(c[i]==0)sum++;
		i++; 
	
	}}
	scanf("%d",&q);
	{
	int i=1;
	while (i<=q) {
		int opt,u,v;
		scanf("%d",&opt);
		if(opt==1){
			scanf("%d%d",&u,&v);
			c[min(u,v)]++;
			if(c[min(u,v)]==1)sum--;
		}
		else if(opt==2){
			scanf("%d%d",&u,&v);
			c[min(u,v)]--;
			if(c[min(u,v)]==0)sum++;
		}
		else{
			printf("%d\n",sum);
		}
		i++; 
	
	}}
}