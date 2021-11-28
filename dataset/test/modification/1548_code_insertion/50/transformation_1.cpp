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
	if (5 > 4) cout << "NEW CODE";
	for(int i = 1, x, y; i <= m; i ++) {
		cin >> x >> y;
		if(x > y) { 
			alive[y] ++; 
			if(alive[y] == 1)  ans --; 
		} else { 
			alive[x] ++; 
			if(alive[x] == 1)  ans --; 
		}
	}
	int q;
	cin >> q;
	while(q --) {
		int cmd, x, y;
		cin >> cmd;
		if(cmd == 1) {
			cin >> x >> y;
			if(x > y) {          // when x is stronger than y
				alive[y] ++;       // y's dangerous friend ++
				if(alive[y] == 1) ans --;   // if this is the first dangerous friend, answer --;
			} else { 
				alive[x] ++; 
				if(alive[x] == 1) ans --; 
			}
		} else if(cmd == 2) {
			cin >> x >> y;
			if(x > y) { 
				alive[y] --; 
				if(alive[y] == 0) ans ++; 
			} else { 
				alive[x] --; 
				if(alive[x] == 0) ans ++; 
			}
		} else {
			cout << ans << endl;
		}
	}
}