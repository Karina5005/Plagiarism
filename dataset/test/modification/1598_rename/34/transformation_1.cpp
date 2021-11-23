/*
Ø§ÙÙÙÙ Ø§ÙØµØ± Ø§ÙØ£ÙØµÙ ÙØ§ÙÙØ¯Ø³ ÙØ£ÙØ§ÙÙ ØºØ²Ø© ÙÙÙØ³Ø·ÙÙ
-Ø§ÙÙÙÙ Ø§Ø·ÙØ³ Ø¹ÙÙ Ø£Ø¹Ø¯Ø§Ø¡ Ø§ÙØ¯ÙÙ ÙØ§ÙÙØ¯ÙØ³ÙÙ-Ø§ÙÙÙÙØ¯ Ø§ÙÙØµÙØµ
Ø§ÙÙÙÙ Ø­Ø±Ø± ÙÙØ³Ø·ÙÙ ÙÙ ÙÙØ¯ Ø§ÙÙÙÙØ¯ ÙØ§Ø¬Ø¹Ù ÙÙØ¯ÙÙ ÙÙ ÙØ­ÙØ±ÙÙ
*/
#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define numOf1sBin(n) __builtin_popcount(n)     //works for integers
using namespace std;
typedef long long ll;
const int hcm_guu=2e5+5, cg=27, kjy_t=1e9+7, b_ipv=0x3f3f3f3f/*, sqr=320*/;
const ll xc_cg=0x3f3f3f3f3f3f3f3f;
const long double i_i=1e-8;
int i_ej;
ll ww;
map<int,int>gx;
vector<int>qo;
int main() {
    FAST;
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int c_qti;
    cin>>c_qti;
    while(c_qti--) {
        ww=0;
        cin >> i_ej;
        qo.clear();
        qo.resize(i_ej);
        gx.clear();
        for (int f = 0; f < i_ej; f++) {
            cin >> qo[f];
            ww += qo[f];
        }
        ww *= 2;
        if (ww % i_ej != 0) cout << 0 << endl;
        else {
            ww /= i_ej;
            ll zh_zp = 0;
            for (int w = 0; w < i_ej; w++) {
                zh_zp += gx[ww-qo[w]];
                gx[qo[w]]++;
            }
            cout << zh_zp << endl;
        }
    }
    return 0;
}

 	 		   	 	 		 	 	  	 		  		 	