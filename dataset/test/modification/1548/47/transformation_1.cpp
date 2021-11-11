#include <bits/stdc++.h>
using namespace std;
typedef long long lld;

lld t[2][2];
int n, x, y;
lld res;

int ant(int a, int b){
	/* 'if' begin */
	if ((a & b) > 0) 
		/* 'if' inside */
		return 1;
	
	return 0;
}

int main(){
	scanf("%d", &n);
	
	for(int i = 0; i < n; ++i)/* 'for' inside */
	{
		scanf("%d%d", &x, &y);
		++t[ant(x, 2)][ant(y, 2)];
	}
	
	for(int i = 0; i < 4; ++i)/* 'for' inside */
	{	
		lld l = t[i & 1][ant(i, 2)];
		res += (l * (l - 1) * (l - 2)) / 6;
	}
	
	for(int i = 0; i < 4; ++i)/* 'for' inside */
	{
		lld l = t[i & 1][ant(i, 2)];
		for(int j = 0; j < 4; ++j)/* 'for' inside */
		{
			/* 'if' begin */
			if(i == j)
				/* 'if' inside */
				continue;
			
			lld k = t[j & 1][ant(j, 2)];
			
			res += ((l * (l - 1) * k) / 2);
		}
	}
	
	printf("%lld\n", res);
	
	return 0;
}
