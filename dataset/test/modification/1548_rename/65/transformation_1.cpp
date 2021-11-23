#include <bits/stdc++.h>
using namespace std;
const int glg = 2 * 1e5 + 100, oq = 2 * 1e5 + 100; 

int gei_sgg, hz, xw; 
int c_igs[glg]; 
int m[glg];  
int u ; 
vector <bool> j(glg, true); 
void lpi_juz ()
{
    int z = 0 ; 
    cin >> gei_sgg >> hz; 
    u = gei_sgg; 
    for (int e = 1; e <= hz; e++)
    {
        int a, cig; 
        cin >> a >> cig; 
        m[a] ++; 
        m[cig] ++; 
        bool g = j[a]; bool myj = j[cig]; 
        (a < cig ? c_igs[cig]++ : c_igs[a]++); 
        j[a] = (m[a] == c_igs[a] ? true : false); 
        j[cig] = (m[cig] == c_igs[cig] ? true : false); 

        if(g && !j[a])
        {
            u --;   
        }
        if(myj && !j[cig])
        {
            u --; 
        }
    }
    cin >> xw; 
    for (int t_h = 0; t_h < xw; t_h ++)
    {
        int xzb_cvj, wi_ai, uec; 
        cin >> xzb_cvj;
        if(xzb_cvj == 3)
        {
            cout << u << endl; 
        }
        if(xzb_cvj == 1)
        {
            cin >> wi_ai >> uec; 
            m[wi_ai] ++; 
            m[uec] ++; 
            bool wa = j[wi_ai]; bool s_c = j[uec]; 
            (wi_ai < uec ? c_igs[uec]++ : c_igs[wi_ai]++); 
            j[wi_ai] = (m[wi_ai] == c_igs[wi_ai] ? true : false); 
            j[uec] = (m[uec] == c_igs[uec] ? true : false); 

            if(wa && !j[wi_ai])
            {
                u --; 
            }

            if(s_c && !j[uec])
            {
                u --; 
            }
        }
        if(xzb_cvj == 2)
        {
            cin >> wi_ai >> uec; 
            m[wi_ai] --; 
            m[uec] --; 
            bool o = j[wi_ai]; bool k = j[uec]; 
            (wi_ai < uec ? c_igs[uec]-- : c_igs[wi_ai]--); 
            j[wi_ai] = (m[wi_ai] == c_igs[wi_ai] ? true : false); 
            j[uec] = (m[uec] == c_igs[uec] ? true : false); 

            if(!o && j[wi_ai])
            {
                u ++; 
            }

            if(!k && j[uec])
            {
                u ++; 
            } 
        }
    }
}

int main ()
{
    lpi_juz ();
}