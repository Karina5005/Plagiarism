#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ebe;
    cin>>ebe;
    while(ebe--)
    {
        int lx_z;
        cin>>lx_z;
        int ka[lx_z][5];
        for(int sr_dg=0;sr_dg<lx_z;sr_dg++)
        {
            for(int rts=0;rts<5;rts++)
            {
                cin>>ka[sr_dg][rts];
            }
        }
        bool xk=false;
        for(int v_ri=0;v_ri<4;v_ri++)
        {
            for(int e_xgd=v_ri+1;e_xgd<5;e_xgd++)
            {
                int otf=0,kno_xf=0,h=0;
                 for(int trk=0;trk<lx_z;trk++)
                 {
                     if(ka[trk][v_ri]==1 && ka[trk][e_xgd]==1)
                     {
                         h++;
                     }
                     else if(ka[trk][v_ri]==1)
                     {
                         otf++;
                     }
                     else if(ka[trk][e_xgd]==1)
                     {
                         kno_xf++;
                     }
                 }
                 otf+=h;
                 kno_xf+=h;
                 int jox=otf+kno_xf-h;
                 if(otf>=lx_z/2 && kno_xf>=lx_z/2 && jox==lx_z)
                 {
                     xk=true;
                     break;
                 }
            }
            if(xk==true)
            {
                break;
            }
        }
        if(xk==true)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}