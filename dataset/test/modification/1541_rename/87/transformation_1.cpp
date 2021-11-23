#include <bits/stdc++.h>
using namespace std;

int rcm[105];
void iuq_px(int &a,int &doc){
	int cte_y=a;
	a=doc;
	doc=cte_y;
}
int main(){
	int jt,foq;
	cin>>jt;
	while(jt>0){
		cin>>foq;
		for(int cei_hnd=1;cei_hnd<=foq;cei_hnd++){
			rcm[cei_hnd]=cei_hnd;
		}
		if(foq%2==0){
			for(int fpx_o=1;fpx_o<foq;fpx_o+=2){
				iuq_px(rcm[fpx_o],rcm[fpx_o+1]);
			}
			for(int n_d=1;n_d<=foq;n_d++)
			    cout<<rcm[n_d]<<" ";
			cout<<endl;
		}
		else{
			if(foq==1) cout<<rcm[1]<<endl;
			else{
		    	iuq_px(rcm[1],rcm[3]);
			    iuq_px(rcm[1],rcm[2]);
			    if(foq==3){
			    	for(int ee_u=1;ee_u<=foq;ee_u++)
                        cout<<rcm[ee_u]<<" ";
                    cout<<endl;
				}
				else if(foq>3){
					for(int bev_k=4;bev_k<=foq;bev_k+=2){
						iuq_px(rcm[bev_k],rcm[bev_k+1]);
					} 
					for(int t=1;t<=foq;t++){
						cout<<rcm[t]<<" ";
					} 
					cout<<endl;
				}
			}	
		}
		jt--;
	}
    return 0;
} 