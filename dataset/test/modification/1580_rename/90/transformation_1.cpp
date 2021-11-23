// Hydro submission #6183c6ac4d64c9b7688ef010@1636087435973
#include<bits/stdc++.h>
using namespace std;
const int ci=409;
char x[ci][ci];
int t[ci][ci];
int main(){ios::sync_with_stdio(0),cin.tie(0);
	int x,ynp_xpm,y_bm,z_ml,ptl_bpy,cl_q,w_pqn,ok,x,g_kb;
	cin>>x;
	while(x--){
		cin>>ynp_xpm>>y_bm,ok=20;
		for(z_ml=1;z_ml<=ynp_xpm;++z_ml)cin>>(x[z_ml]+1);
		for(z_ml=1;z_ml<=ynp_xpm;++z_ml)for(ptl_bpy=1;ptl_bpy<=y_bm;++ptl_bpy)t[z_ml][ptl_bpy]=t[z_ml][ptl_bpy-1]+(x[z_ml][ptl_bpy]=='1');
		for(z_ml=1;z_ml<=ynp_xpm;++z_ml)for(ptl_bpy=1;ptl_bpy<=y_bm;++ptl_bpy){
			g_kb=0;
			for(cl_q=ptl_bpy+1;cl_q<y_bm;++cl_q){
				g_kb+=(x[z_ml][cl_q]=='0');
				if(g_kb>=ok)break;
				if(cl_q>=ptl_bpy+2){
					x=g_kb;
					for(w_pqn=z_ml+1;w_pqn<ynp_xpm;++w_pqn){
						x+=t[w_pqn][cl_q]-t[w_pqn][ptl_bpy]+(x[w_pqn][ptl_bpy]=='0')+(x[w_pqn][cl_q+1]=='0');
					if(x>=ok)break;
					if(w_pqn>=z_ml+3)ok=min(ok,x+cl_q-ptl_bpy-t[w_pqn+1][cl_q]+t[w_pqn+1][ptl_bpy]);
					}
				}
			}
		}
		cout<<ok<<'\n';
	}
	return 0;
}