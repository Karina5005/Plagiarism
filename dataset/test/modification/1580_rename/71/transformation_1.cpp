#include<bits/stdc++.h>
using namespace std;
int whs,q_rip,gpy[410][410];
int bxm_n(int jsr_y,int g,int gh_vec,int m){
	return gpy[gh_vec][m]-gpy[jsr_y-1][m]-gpy[gh_vec][g-1]+gpy[jsr_y-1][g-1];
}
int ev_ij(int vww,int sxg,int xqi,int ie){
	return (xqi-vww+1)*(ie-sxg+1)-bxm_n(vww,sxg,xqi,ie);
}


int main(){
	int g_s;
	cin>>g_s;
	while(g_s--){
		cin>>whs>>q_rip;
		for(int f=1;f<=whs;f++){
			for(int pm_em=1;pm_em<=q_rip;pm_em++){
				char mpf_h=0;
				while(!isdigit(mpf_h))mpf_h=getchar();
				gpy[f][pm_em]=mpf_h-'0';
			}
		}
		int ge=0x7fffffff;
		for(int f_p=1;f_p<=whs;f_p++){
			for(int w_gh=1;w_gh<=q_rip;w_gh++){
				gpy[f_p][w_gh]+=gpy[f_p-1][w_gh]+gpy[f_p][w_gh-1]-gpy[f_p-1][w_gh-1];
			}
		}
		for(int lxy_i=1;lxy_i<=whs;lxy_i++){
			for(int xz=1;xz<=q_rip;xz++){
				for(int ini_rbt=lxy_i+4;ini_rbt<=whs;ini_rbt++){
					for(int m_vfn=xz+3;m_vfn<=q_rip;m_vfn++){
						int y=ev_ij(lxy_i,xz+1,lxy_i,m_vfn-1)+ev_ij(lxy_i+1,xz,ini_rbt-1,xz);
						int ci_bi=ev_ij(lxy_i+1,m_vfn,ini_rbt-1,m_vfn)+ev_ij(ini_rbt,xz+1,ini_rbt,m_vfn-1);
						int q_z=bxm_n(lxy_i+1,xz+1,ini_rbt-1,m_vfn-1);
						if(ge<y+q_z)break;
						ge=min(ge,y+ci_bi+q_z);
					}
				}
			}
		}
		cout<<ge<<endl;
	}
	
	
	return 0;
} 