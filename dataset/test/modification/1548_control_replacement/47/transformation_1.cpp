#include <bits/stdc++.h>
using namespace std;
typedef long long lld;

lld t[2][2];
int n, x, y;
lld res;

int ant(int a, int b){
	if ((a & b) > 0) 
		return 1;
	
	return 0;
}

int main(){
	scanf("%d", &n);
	
	{
	int i = 0;
	while (i < n) {
		scanf("%d%d", &x, &y);
		++t[ant(x, 2)][ant(y, 2)];
		++i; 
	
	}}
	
	{
	int i = 0;
	while (i < 4) {	
		lld l = t[i & 1][ant(i, 2)];
		res += (l * (l - 1) * (l - 2)) / 6;
		++i; 
	
	}}
	
	{
	int i = 0;
	while (i < 4) {
		lld l = t[i & 1][ant(i, 2)];
		{
		int j = 0;
		while (j < 4) {
			if(i == j)
				++i; ++j; continue;
			
			lld k = t[j & 1][ant(j, 2)];
			
			res += ((l * (l - 1) * k) / 2);
			++j; 
		
		}}
		++i; 
	
	}}
	
	printf("%lld\n", res);
	
	return 0;
}
