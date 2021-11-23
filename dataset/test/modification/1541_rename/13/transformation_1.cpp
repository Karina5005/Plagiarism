#include<bits/stdc++.h>
using namespace std;
int swx[105];
int main(){
	int t;
	cin>>t;
	while(t--){
		int g_f;
		cin>>g_f;
		for(int t=1;t<=g_f;t++)
		swx[t]=t;
		for(int kx=1;kx<g_f;kx+=2)
		swap(swx[kx],swx[kx+1]);
		if(g_f%2==1)
		{
			swap(swx[g_f],swx[g_f-1]);
		}
		for(int aw=1;aw<=g_f;aw++)
		cout<<swx[aw]<<' ';
		cout<<endl;
	}
	return 0;
}
		 		 				 			  		 	 		 			