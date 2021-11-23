#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
const int wye_en = 3e6+7;
const long long d = 1e9+7;
long long lqq[wye_en][3];
long long yp_chu[wye_en];
long long b[wye_en];
long long l(int wn,int ih){
	return yp_chu[wn] * b[ih] % d * b[wn-ih] % d;
}
const long long dcd = 333333336;
void ax(int bp){
	lqq[0][0] = lqq[0][1] = lqq[0][2] = bp+1;
	yp_chu[0] = 1;
	for(int lni = 1;lni <= 3*(bp+1);lni++) yp_chu[lni] = yp_chu[lni-1] * lni % d;
	b[1] = 1;
	for(int p = 2;p <= 3*(bp+1);p++) b[p] = (d - d / p) * b[d % p] % d; 
	b[0] = 1;
	for(int fij = 1;fij <= 3*(bp+1);fij++) b[fij] = b[fij-1] * b[fij] % d;
	for(int y = 1;y <= 3*bp;y++){
		lqq[y][0] = (l(3*(bp+1),y+1) - 2 * lqq[y-1][0] - lqq[y-1][1] + 3*d) % d;
		lqq[y][0] = lqq[y][0] * dcd % d;
		lqq[y][1] = (lqq[y][0] + lqq[y-1][0]) % d;
		lqq[y][2] = (lqq[y][1] + lqq[y-1][1]) % d;
	}
}
int p,wo_jk;
int main()
{
	//cout<<qpow(3,MOD-2)<<" sa d\n";
	cin>>p>>wo_jk;
	ax(p);
	int qk;
	while(wo_jk--){
		scanf("%d",&qk);
		printf("%lld\n",lqq[qk][0]);
	}
	return 0;
} 