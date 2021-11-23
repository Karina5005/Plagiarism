#include <algorithm>
#include <stdio.h>
#include <stdint.h>

#define MX 300000

using namespace std;

int64_t a[MX];

void test(){
	int n;
	scanf("%d", &n);
	int64_t s = 0;
	for(int i = 0; i < n; i++){
		scanf("%lld", &a[i]);
		a[i]*=2;
		s+= a[i];
	}
	if(s % n){
		printf("0\n");
		return;
	}
	s = s/n;
	sort(a, a+ n);
	int64_t b = 0;
	int64_t res = 0;
	int j = n -1;
	int i;
	for(i = 0; a[i] < s; i++){
		if(i > 0 && a[i] == a[i-1]){
			res+= b;
			continue;
		}
		b = 0;
		while(a[j] > 2 * s - a[i]) j --;
		while(a[j] == 2 * s - a[i]){
			j--;
			b++;
		}
		res+=b;
	}
	b = 0;
	while(i < n && a[i] == s){
		i++;
		b++;
	}
	res+= (b * (b-1))/2;
	printf("%lld\n", res);
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--) test();
	return 0;
}
