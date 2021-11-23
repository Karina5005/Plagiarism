#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (int)(n); i ++)
#define rep1(i, n) for(int i = 1; i <= (int)(n); i ++)
#define MP make_pair
 
using namespace std;
typedef long long LL;
typedef pair<int, int> PII;
const int de = 998244353;
const int to_cij = 3;
 
const int m_rzm = 19;
const int wv = 550000;
 
int kaw[wv + 5], ig[wv + 5], h_ds[wv + 5];
int vvx_e[m_rzm + 5];
 
int dl_xzv(int wqv_pyn)
{
	int gpc = 0;
	while((1 << gpc) < wqv_pyn) gpc ++;
	return gpc;
}
 
int b_wq(int le, int x)
{
	int y_k = 1;
	while(x > 0) {
		if(x & 1) y_k = 1LL * y_k * le % de;
		le = 1LL * le * le % de;
		x >>= 1;
	}
	return y_k;
}
 
int t_fe[wv + 5];
void uud(int cun[], int c_pp, int qy_x)
{
	if(qy_x == -1) reverse(cun + 1, cun + (1 << c_pp));
	int ij_cbh = 0;
	for(int fje = 0; fje < (1 << c_pp); fje ++) {
		if(ij_cbh < fje) swap(cun[ij_cbh], cun[fje]);
		for(int mng_hk = c_pp - 1; mng_hk >= 0; mng_hk --) {
			ij_cbh ^= 1 << mng_hk;
			if(ij_cbh >> mng_hk & 1) break;
		}
	}
	rep1(d, siz) {
		int l_qy = vvx_e[d];
		t_fe[0] = 1;
		for(int idx = 1; idx < (1 << (d - 1)); idx ++) t_fe[idx] = 1LL * t_fe[idx - 1] * l_qy % de;
		for(int du = 0; du < (1 << c_pp); du += 1 << d) rep(j, 1 << (d - 1)) {
			int x_ugg = cun[du + j], x = 1LL * cun[du + j + (1 << (d - 1))] * t_fe[j] % de;
			cun[du + j] = x_ugg + x - (x_ugg + x >= de ? de : 0);
			cun[du + j + (1 << (d - 1))] = x_ugg - x + (x_ugg - x < 0 ? de : 0);
		}
	}
	if(qy_x == -1) {
		int q = h_ds[1 << c_pp];
		rep(i, 1 << siz) cun[i] = 1LL * cun[i] * q % de;
	}
}
 
int f_w[wv + 5], il[wv + 5];
void dx_rv(int cae[], int zab_v[], int hy_hm[], int v)
{
	rep(i, 1 << (siz + 1)) f_w[i] = i >> v ? 0 : cae[i];
	rep(i, 1 << (siz + 1)) il[i] = i >> v ? 0 : zab_v[i];
	uud(f_w, v + 1, 1);
	uud(il, v + 1, 1);
	rep(i, 1 << (siz + 1)) hy_hm[i] = 1LL * f_w[i] * il[i] % de;
	uud(hy_hm, v + 1, -1);
}
 
void eu(int vd[], int exc[], int q_gl)
{
	rep(i, 1 << siz) il[i] = i == 0 ? b_wq(vd[0], de - 2) : 0;
	rep1(i, siz) {
		rep(j, 1 << (i + 1)) f_w[j] = j >> i ? 0 : vd[j];
		rep(j, 1 << (i + 1)) il[j] = j >> (i - 1) ? 0 : il[j];
		uud(f_w, i + 1, 1);
		uud(il, i + 1, 1);
		rep(j, 1 << (i + 1)) il[j] = (2 + 1LL * (de - f_w[j]) * il[j] % de) * il[j] % de;
		uud(il, i + 1, -1);
	}
	rep(i, 1 << siz) exc[i] = il[i];
}
 
int d[wv + 5];
void a_gtb(int in_fr[], int q[], int yf_xor)
{
	rep(i, 1 << siz) if(i > 0) d[i - 1] = 1LL * in_fr[i] * i % de;
	eu(in_fr, q, yf_xor);
	dx_rv(q, d, q, yf_xor);
	for(int sdr = (1 << yf_xor) - 1; sdr >= 0; sdr --) q[sdr] = sdr == 0 ? 0 : 1LL * h_ds[sdr] * q[sdr - 1] % de;
}
 
int lf_nb[wv + 5], hgq[wv + 5];
void jsq_gn(int xn_h[], int qit[], int isn_qz)
{
	rep(i, 1 << siz) lf_nb[i] = i == 0;
	rep1(i, siz) {
		a_gtb(lf_nb, hgq, i);
		rep(j, 1 << i) hgq[j] = ((j == 0) + xn_h[j] - hgq[j] + de) % de;
		dx_rv(lf_nb, hgq, lf_nb, i);
	}
	rep(i, 1 << siz) qit[i] = lf_nb[i];
}
 
void vw()
{
	vvx_e[0] = 1;
	rep1(i, MAXT) vvx_e[i] = b_wq(to_cij, (de - 1) >> i);
	kaw[0] = 1;
	rep1(i, MAXL) kaw[i] = 1LL * kaw[i - 1] * i % de;
	ig[wv] = b_wq(kaw[wv], de - 2);
	for(int k = wv; k >= 1; k --) ig[k - 1] = 1LL * ig[k] * k % de;
	rep1(i, MAXL) h_ds[i] = 1LL * ig[i] * kaw[i - 1] % de;
}
 
int kzo, nay, u_nj[300005], t[300005], dr_i[300005], rcl_kwg[300005], kh[300005], cgu[300005], zx[300005], yw_ag[300005];
 
int main()
{
	vw();
	scanf("%d%d", &kzo, &nay);
	int z = 1;
	rep1(i, n) {
		int gc = (nay + i) / 2;
		if(gc == (nay + i - 1) / 2) z = 1LL * z * (gc - i + 1) % de;
		else z = 1LL * z * gc % de;
		z = 1LL * z * h_ds[i] % de;
		u_nj[i] = (z + de) % de;
	}
	
	rep1(i, n) if(i % 4 == 0) t[i] = (de - u_nj[i]) % de;
	else if(i % 4 == 1) dr_i[i] = u_nj[i];
	else if(i % 4 == 2) t[i] = u_nj[i];
	else dr_i[i] = (de - u_nj[i]) % de;
	
	t[0] = 1;
	rep1(i, n) t[i] = (de - t[i]) % de;
	eu(t, rcl_kwg, 16);
	dx_rv(dr_i, rcl_kwg, kh, 16);
	kh[0] = 1;
	rep1(i, n) kh[i] = (de - kh[i]) % de;
	eu(kh, cgu, 16);
	a_gtb(rcl_kwg, zx, 16);
	a_gtb(cgu, yw_ag, 16);
	int uoc_pva = 1LL * kzo * (zx[kzo] + yw_ag[kzo]) % de;
	printf("%d\n", uoc_pva);
	return 0;
}