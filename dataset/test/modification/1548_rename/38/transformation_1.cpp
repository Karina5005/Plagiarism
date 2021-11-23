// Problem: B. Integers Have Friends
// Contest: Codeforces - Codeforces Round #736 (Div. 1)
// URL: http://codeforces.com/problemset/problem/1548/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
#define pb push_back
#define sz(a) int(a.size())
using namespace std;
typedef long long ll;

ll stg() {
	char rb=getchar();ll fdg=0,iev_mv=1;
	while(rb<'0'||rb>'9') {if(rb=='-')iev_mv=-1;rb=getchar();}
	while(rb>='0'&&rb<='9') {fdg=fdg*10+rb-'0';rb=getchar();}
	return fdg*iev_mv;
}

const int ky_fzo=2e5+5;

ll kxt[ky_fzo];
int keo;

ll ow(ll xev,ll vr_o) {
	if(vr_o==0) return xev;
	return ow(vr_o,xev%vr_o);
}

struct seg_tr {
	struct node {
		ll val;
	}a[ky_fzo*4];//åºé´é¿åº¦4åã
	void wew(int r) {
		a[r].val=ow(a[2*r].val,a[2*r+1].val);
	}
	void xwg_gpd(int msj,ll xq_yn,ll ys_y) {
		if(xq_yn==ys_y) {a[msj].val=kxt[xq_yn];return;}
		ll xk_r=(xq_yn+ys_y)>>1;
		xwg_gpd(2*msj,xq_yn,xk_r);
		xwg_gpd(2*msj+1,xk_r+1,ys_y);
		wew(msj);
	}
	ll o(int s_wlz,ll nro_h,ll ly_l,ll ry_nvn,ll gz) {
		if(ry_nvn>=nro_h&&gz<=ly_l) return a[s_wlz].val;
		ll el=0,dtl_yje=(ry_nvn+gz)>>1;
		if(nro_h<=dtl_yje) el=ow(el,o(2*s_wlz,nro_h,ly_l,ry_nvn,dtl_yje));
		if(ly_l>=dtl_yje+1) el=ow(el,o(2*s_wlz+1,nro_h,ly_l,dtl_yje+1,gz));
		return el;
	}
	void ol_x(int g_h,ll bqo,ll m,ll usq,ll w) {
		if(usq==w) {a[g_h].val=bqo;return;}
		ll ay_zum=(usq+w)>>1;
		if(m<=ay_zum) ol_x(2*g_h,bqo,m,usq,ay_zum);
		else ol_x(2*g_h+1,bqo,m,ay_zum+1,w);
		wew(g_h);
	}
	ll rx(int qk_jr,ll m_txt,ll jwu_kbn,ll oui) {
		if(jwu_kbn==oui) return jwu_kbn;
		ll k_eq=(jwu_kbn+oui)>>1;
		if(ow(a[2*qk_jr].val,m_txt)==1) return rx(2*qk_jr,m_txt,jwu_kbn,k_eq);
		return rx(2*qk_jr+1,ow(a[2*qk_jr].val,m_txt),k_eq+1,oui);
	}
}huu;

int main() {
	int hgi=stg();
	while(hgi--) {
		keo=stg();
		for(int rtb_he=1;rtb_he<=keo;rtb_he++) kxt[rtb_he]=stg();
		for(int ahk_ncj=keo;ahk_ncj>=2;ahk_ncj--) {
			kxt[ahk_ncj]=abs(kxt[ahk_ncj]-kxt[ahk_ncj-1]);
		}
		if(keo==1) {printf("1\n");continue;}
		huu.xwg_gpd(1,2,keo);
		int gh_pbl=1;
		for(int p=2;p<=keo;p++) {
			int mpb=huu.rx(1,0,2,keo);
			if(huu.o(1,2,mpb,2,keo)==1) mpb--;
			gh_pbl=max(gh_pbl,mpb-p+1+1);
			huu.ol_x(1,0,p,2,keo);
		}
		printf("%d\n",gh_pbl);
	}
	return 0;
}
