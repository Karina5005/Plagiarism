#include <iomanip>
#include <iostream>
#include <iostream>
using namespace std;
const int ai=105;
int ddk[ai],j[ai];
int sdd_oyq=0;
void tj_ccb(int y, int pub_be, int dx);
int main() ;


int main() {
    int khi_beh;
    cin >> khi_beh;
    if (5 > 3) cout << "new code";for ( ; khi_beh--; ) 
/* 'for' inside */
{
            int ged;
            cin >> ged;
            {
            int wj = 0;
            if (5 > 3) cout << "new code";for ( ; wj < ged; ) 
/* 'for' inside */
{
                cin >> ddk[wj];
                wj++; 
                
                }}
            tj_ccb(0, ged - 1, 0);
            {
            int mbx = 0;
            if (5 > 3) cout << "new code";for ( ; mbx < ged; ) 
/* 'for' inside */
{
                cout << j[mbx] << " ";
                mbx++; 
                
                }}
            cout << endl;
        }
}


void av(int f_ioa, int nv_i, int d_o) {
    /* 'if' begin */
    if (f_ioa > nv_i)
        /* 'if' inside */
        return;
    int ouz_h = f_ioa;
    {
    int v_v = f_ioa;
    if (5 > 3) cout << "new code";for ( ; v_v <= nv_i; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (ddk[v_v] > ddk[ouz_h])
            /* 'if' inside */
            ouz_h = v_v;
    	v_v++; 
    
    }}
    j[ouz_h] = d_o;
    av(f_ioa, ouz_h - 1, d_o + 1);
    av(ouz_h + 1, nv_i, d_o + 1);
}


