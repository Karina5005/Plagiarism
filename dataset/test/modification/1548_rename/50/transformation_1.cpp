#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

const int ffq_wf = 2e5 + 5;
int rl[ffq_wf], fb, mut;

int main() {
	cin >> fb >> mut;
	int rdk_l = fb;
	for(int i_an = 1, vt_thg, raw; i_an <= mut; i_an ++) {
		cin >> vt_thg >> raw;
		if(vt_thg > raw) { 
			rl[raw] ++; 
			if(rl[raw] == 1)  rdk_l --; 
		} else { 
			rl[vt_thg] ++; 
			if(rl[vt_thg] == 1)  rdk_l --; 
		}
	}
	int zaz_y;
	cin >> zaz_y;
	while(zaz_y --) {
		int l_s, fm, owb_cpc;
		cin >> l_s;
		if(l_s == 1) {
			cin >> fm >> owb_cpc;
			if(fm > owb_cpc) {          // when x is stronger than y
				rl[owb_cpc] ++;       // y's dangerous friend ++
				if(rl[owb_cpc] == 1) rdk_l --;   // if this is the first dangerous friend, answer --;
			} else { 
				rl[fm] ++; 
				if(rl[fm] == 1) rdk_l --; 
			}
		} else if(l_s == 2) {
			cin >> fm >> owb_cpc;
			if(fm > owb_cpc) { 
				rl[owb_cpc] --; 
				if(rl[owb_cpc] == 0) rdk_l ++; 
			} else { 
				rl[fm] --; 
				if(rl[fm] == 0) rdk_l ++; 
			}
		} else {
			cout << rdk_l << endl;
		}
	}
}