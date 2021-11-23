#include <bits/stdc++.h>
using namespace std;
const int mwe_rr = 2 * 1e5 + 100, zeg_obt = 2 * 1e5 + 100; 

int ksm, bms_h, bz_i; 
int tlt[mwe_rr]; 
int h_gm[mwe_rr];  
int gbj ; 
vector <bool> wol(mwe_rr, true); 
void ch ()
{
    ios::sync_with_stdio(false); cin.tie(NULL); 
    int syu_k = 0 ; 
    cin >> ksm >> bms_h; 
    gbj = ksm; 
    for (int ckk = 1; ckk <= bms_h; ckk++)
    {
        int s, n_e; 
        cin >> s >> n_e; 
        h_gm[s] ++; 
        h_gm[n_e] ++; 
        bool ksn = wol[s]; bool b = wol[n_e]; 
        (s < n_e ? tlt[n_e]++ : tlt[s]++); 
        wol[s] = (h_gm[s] == tlt[s] ? true : false); 
        wol[n_e] = (h_gm[n_e] == tlt[n_e] ? true : false); 

        if(ksn && !wol[s])
        {
            gbj --;   
        }
        if(b && !wol[n_e])
        {
            gbj --; 
        }
    }
    cin >> bz_i; 
    for (int g = 0; g < bz_i; g ++)
    {
        int re_v, kzi, nv_j; 
        cin >> re_v;
        if(re_v == 3)
        {
            cout << gbj << endl; 
        }
        if(re_v == 1)
        {
            cin >> kzi >> nv_j; 
            h_gm[kzi] ++; 
            h_gm[nv_j] ++; 
            bool qo = wol[kzi]; bool j_ndk = wol[nv_j]; 
            (kzi < nv_j ? tlt[nv_j]++ : tlt[kzi]++); 
            wol[kzi] = (h_gm[kzi] == tlt[kzi] ? true : false); 
            wol[nv_j] = (h_gm[nv_j] == tlt[nv_j] ? true : false); 

            if(qo && !wol[kzi])
            {
                gbj --; 
            }

            if(j_ndk && !wol[nv_j])
            {
                gbj --; 
            }
        }
        if(re_v == 2)
        {
            cin >> kzi >> nv_j; 
            h_gm[kzi] --; 
            h_gm[nv_j] --; 
            bool bw_g = wol[kzi]; bool av_flw = wol[nv_j]; 
            (kzi < nv_j ? tlt[nv_j]-- : tlt[kzi]--); 
            wol[kzi] = (h_gm[kzi] == tlt[kzi] ? true : false); 
            wol[nv_j] = (h_gm[nv_j] == tlt[nv_j] ? true : false); 

            if(!bw_g && wol[kzi])
            {
                gbj ++; 
            }

            if(!av_flw && wol[nv_j])
            {
                gbj ++; 
            } 
        }
    }
}

int main ()
{
    ch ();
}