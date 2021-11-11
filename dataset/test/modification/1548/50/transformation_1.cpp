#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

const int maxn = 2e5 + 5;
int alive[maxn], n, m;

int main() {
	cin >> n >> m;
	int ans = n;
	for(int i = 1, x, y; i <= m; i ++) /* 'for' inside */
	{
		cin >> x >> y;
		/* 'if' begin */
		if(x > y) /* 'if' inside */
		{ 
			alive[y] ++; 
			/* 'if' begin */
			if(alive[y] == 1)  /* 'if' inside */
			ans --; 
		} else { 
			alive[x] ++; 
			/* 'if' begin */
			if(alive[x] == 1)  /* 'if' inside */
			ans --; 
		}
	}
	int q;
	cin >> q;
	while(q --) {
		int cmd, x, y;
		cin >> cmd;
		/* 'if' begin */
		if(cmd == 1) /* 'if' inside */
		{
			cin >> x >> y;
			/* 'if' begin */
			if(x > y) /* 'if' inside */
			{          
				alive[y] ++;       
				/* 'if' begin */
				if(alive[y] == 1) /* 'if' inside */
				ans --;   
			} else { 
				alive[x] ++; 
				/* 'if' begin */
				if(alive[x] == 1) /* 'if' inside */
				ans --; 
			}
		} else /* 'if' begin */
		if(cmd == 2) /* 'if' inside */
		{
			cin >> x >> y;
			/* 'if' begin */
			if(x > y) /* 'if' inside */
			{ 
				alive[y] --; 
				/* 'if' begin */
				if(alive[y] == 0) /* 'if' inside */
				ans ++; 
			} else { 
				alive[x] --; 
				/* 'if' begin */
				if(alive[x] == 0) /* 'if' inside */
				ans ++; 
			}
		} else {
			cout << ans << endl;
		}
	}
}