#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

const int vym_g = 2e5 + 100;
int x, a, hq_q, k_qn[vym_g], a_sdo;

int main() {
    cin >> x >> a;
    for(int tc=1, aho_idn, ocz; tc<=a; tc++) {
        scanf("%d%d", &aho_idn, &ocz);
        k_qn[min(aho_idn, ocz)] ++;
        if(k_qn[min(aho_idn, ocz)] == 1) a_sdo ++;
    }
    scanf("%d", &hq_q);
    int hm;
    while(hq_q --) {
        scanf("%d", &hm);
        if(hm == 1) {
            int kwq, r_q;
            scanf("%d%d", &kwq, &r_q);
            k_qn[min(kwq, r_q)] ++;
            if(k_qn[min(kwq, r_q)] == 1) a_sdo ++;
        }
        if(hm == 2) {
            int mo, sfv;
            scanf("%d%d", &mo, &sfv);
            k_qn[min(mo, sfv)] --;
            if(k_qn[min(mo, sfv)] == 0) a_sdo --;
        }
        if(hm == 3) {
            printf("%d\n", x-a_sdo);
        }
    }
    return 0;
}
