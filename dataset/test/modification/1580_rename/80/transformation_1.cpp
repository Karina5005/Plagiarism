#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (int)(n); i ++)
#define rep1(i, n) for(int i = 1; i <= (int)(n); i ++)
#define MP make_pair
 
using namespace std;
typedef long long LL;
typedef pair<int, int> PII;
const int zxm_he = 998244353;
const int i = 3;
 
const int gwp = 19;
const int p = 550000;
 
int pi_fd[p + 5], n[p + 5], wrr[p + 5];
int vd_py[gwp + 5];
 
int m(int ck_oab)
{
	int x_f = 0;
	while((1 << x_f) < ck_oab) x_f ++;
	return x_f;
}
 
int rt(int tbd, int h)
{
	int ij = 1;
	while(h > 0) {
		if(h & 1) ij = 1LL * ij * tbd % zxm_he;
		tbd = 1LL * tbd * tbd % zxm_he;
		h >>= 1;
	}
	return ij;
}
 
int mm_kmz[p + 5];
void h_hz(int g[], int zba_jc, int p_ch)
{
	if(p_ch == -1) reverse(g + 1, g + (1 << zba_jc));
	int qew = 0;
	for(int v = 0; v < (1 << zba_jc); v ++) {
		if(qew < v) swap(g[qew], g[v]);
		for(int yv = zba_jc - 1; yv >= 0; yv --) {
			qew ^= 1 << yv;
			if(qew >> yv & 1) break;
		}
	}
	rep1(d, siz) {
		int fq_mzh = vd_py[d];
		mm_kmz[0] = 1;
		for(int tzf = 1; tzf < (1 << (d - 1)); tzf ++) mm_kmz[tzf] = 1LL * mm_kmz[tzf - 1] * fq_mzh % zxm_he;
		for(int nsr_s = 0; nsr_s < (1 << zba_jc); nsr_s += 1 << d) rep(j, 1 << (d - 1)) {
			int s = g[nsr_s + j], em = 1LL * g[nsr_s + j + (1 << (d - 1))] * mm_kmz[j] % zxm_he;
			g[nsr_s + j] = s + em - (s + em >= zxm_he ? zxm_he : 0);
			g[nsr_s + j + (1 << (d - 1))] = s - em + (s - em < 0 ? zxm_he : 0);
		}
	}
	if(p_ch == -1) {
		int i = wrr[1 << zba_jc];
		rep(i, 1 << siz) g[i] = 1LL * g[i] * i % zxm_he;
	}
}
 
int oeq_a[p + 5], pvb[p + 5];
void sqt(int fc[], int nh_uy[], int tv[], int t_h)
{
	rep(i, 1 << (siz + 1)) oeq_a[i] = i >> t_h ? 0 : fc[i];
	rep(i, 1 << (siz + 1)) pvb[i] = i >> t_h ? 0 : nh_uy[i];
	h_hz(oeq_a, t_h + 1, 1);
	h_hz(pvb, t_h + 1, 1);
	rep(i, 1 << (siz + 1)) tv[i] = 1LL * oeq_a[i] * pvb[i] % zxm_he;
	h_hz(tv, t_h + 1, -1);
}
 
void evv_m(int fj[], int zd[], int ogp)
{
	rep(i, 1 << siz) pvb[i] = i == 0 ? rt(fj[0], zxm_he - 2) : 0;
	rep1(i, siz) {
		rep(j, 1 << (i + 1)) oeq_a[j] = j >> i ? 0 : fj[j];
		rep(j, 1 << (i + 1)) pvb[j] = j >> (i - 1) ? 0 : pvb[j];
		h_hz(oeq_a, i + 1, 1);
		h_hz(pvb, i + 1, 1);
		rep(j, 1 << (i + 1)) pvb[j] = (2 + 1LL * (zxm_he - oeq_a[j]) * pvb[j] % zxm_he) * pvb[j] % zxm_he;
		h_hz(pvb, i + 1, -1);
	}
	rep(i, 1 << siz) zd[i] = pvb[i];
}
 
int jw[p + 5];
void i_coa(int zyn[], int rza[], int m)
{
	rep(i, 1 << siz) if(i > 0) jw[i - 1] = 1LL * zyn[i] * i % zxm_he;
	evv_m(zyn, rza, m);
	sqt(rza, jw, rza, m);
	for(int ihk = (1 << m) - 1; ihk >= 0; ihk --) rza[ihk] = ihk == 0 ? 0 : 1LL * wrr[ihk] * rza[ihk - 1] % zxm_he;
}
 
int b[p + 5], au_a[p + 5];
void va_axx(int yzt[], int a[], int o_tff)
{
	rep(i, 1 << siz) b[i] = i == 0;
	rep1(i, siz) {
		i_coa(b, au_a, i);
		rep(j, 1 << i) au_a[j] = ((j == 0) + yzt[j] - au_a[j] + zxm_he) % zxm_he;
		sqt(b, au_a, b, i);
	}
	rep(i, 1 << siz) a[i] = b[i];
}
 
void zp_nm()
{
	vd_py[0] = 1;
	rep1(i, MAXT) vd_py[i] = rt(i, (zxm_he - 1) >> i);
	pi_fd[0] = 1;
	rep1(i, MAXL) pi_fd[i] = 1LL * pi_fd[i - 1] * i % zxm_he;
	n[p] = rt(pi_fd[p], zxm_he - 2);
	for(int fzr_o = p; fzr_o >= 1; fzr_o --) n[fzr_o - 1] = 1LL * n[fzr_o] * fzr_o % zxm_he;
	rep1(i, MAXL) wrr[i] = 1LL * n[i] * pi_fd[i - 1] % zxm_he;
}
 
int zgu, ycq_o, a[300005], cu_woc[300005], v[300005], n[300005], i[300005], y[300005], g[300005], cvb_da[300005];
 
int main()
{
	zp_nm();
	scanf("%d%d", &zgu, &ycq_o);
	int tps_qfq = 1;
	rep1(i, n) {
		int qo_tq = (ycq_o + i) / 2;
		if(qo_tq == (ycq_o + i - 1) / 2) tps_qfq = 1LL * tps_qfq * (qo_tq - i + 1) % zxm_he;
		else tps_qfq = 1LL * tps_qfq * qo_tq % zxm_he;
		tps_qfq = 1LL * tps_qfq * wrr[i] % zxm_he;
		a[i] = (tps_qfq + zxm_he) % zxm_he;
	}
	
	rep1(i, n) if(i % 4 == 0) cu_woc[i] = (zxm_he - a[i]) % zxm_he;
	else if(i % 4 == 1) v[i] = a[i];
	else if(i % 4 == 2) cu_woc[i] = a[i];
	else v[i] = (zxm_he - a[i]) % zxm_he;
	
	cu_woc[0] = 1;
	rep1(i, n) cu_woc[i] = (zxm_he - cu_woc[i]) % zxm_he;
	evv_m(cu_woc, n, 16);
	sqt(v, n, i, 16);
	i[0] = 1;
	rep1(i, n) i[i] = (zxm_he - i[i]) % zxm_he;
	evv_m(i, y, 16);
	i_coa(n, g, 16);
	i_coa(y, cvb_da, 16);
	int r_iqm = 1LL * zgu * (g[zgu] + cvb_da[zgu]) % zxm_he;
	printf("%d\n", r_iqm);
	return 0;
}