#include <algorithm>
#include <stdio.h>
#include <stdint.h>

#define MX 300000

using namespace std;

int64_t dw[MX];

void r(){
	int vep_y;
	scanf("%d", &vep_y);
	int64_t v_n = 0;
	for(int lu = 0; lu < vep_y; lu++){
		scanf("%lld", &dw[lu]);
		dw[lu]*=2;
		v_n+= dw[lu];
	}
	if(v_n % vep_y){
		printf("0\n");
		return;
	}
	v_n = v_n/vep_y;
	sort(dw, dw+ vep_y);
	int64_t icw = 0;
	int64_t v = 0;
	int oe = vep_y -1;
	int a;
	for(a = 0; dw[a] < v_n; a++){
		if(a > 0 && dw[a] == dw[a-1]){
			v+= icw;
			continue;
		}
		icw = 0;
		while(dw[oe] > 2 * v_n - dw[a]) oe --;
		while(dw[oe] == 2 * v_n - dw[a]){
			oe--;
			icw++;
		}
		v+=icw;
	}
	icw = 0;
	while(a < vep_y && dw[a] == v_n){
		a++;
		icw++;
	}
	v+= (icw * (icw-1))/2;
	printf("%lld\n", v);
}

int main(){
	int fa;
	scanf("%d", &fa);
	while(fa--) r();
	return 0;
}
