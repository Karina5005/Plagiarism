#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int i = 1e3+5;
bool vu_sx[i][6];

int main(){
    int ll_ma,nx,pu;
    scanf("%d",&ll_ma);
    while (ll_ma--) {
        scanf("%d",&nx);
        for (int olf_kga=1;olf_kga<=nx;olf_kga++){
            for (int hn=1;hn<=5;hn++){
                scanf("%d",&vu_sx[olf_kga][hn]);
            }
        }
        int p=0;
        for (int peu=1;peu<=4;peu++){
            for (int y=peu+1;y<=5;y++){
                int bw=0,kpa_s=0,ml_sy=0;
                for (int f_l=1;f_l<=nx;f_l++){
                    bw+=vu_sx[f_l][peu]; // ç¬¬iå¤©è½å»ç
                    kpa_s+=vu_sx[f_l][y]; // ç¬¬jå¤©è½å»ç
                    ml_sy+= !(vu_sx[f_l][peu]||vu_sx[f_l][y]); // ä¸¤å¤©é½ä¸è½å»ç
                }
                if (bw>=nx/2 && kpa_s>=nx/2 && !ml_sy) {
                    p=1;
                }
            }
        }
        if (p) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}
/*
4
3
1 0 0 0 1
1 0 0 0 1
1 0 0 0 1
2   
1 0 0 0 1
1 0 0 0 1
2
1 0 0 0 0
0 1 0 0 0
4 å è¿ä¸ªæ ·ä¾
0 0 1 0 0
0 1 0 0 0
0 1 0 1 0
0 1 0 1 0
*/
 		 							 	 			 	 	 		 	 		 	