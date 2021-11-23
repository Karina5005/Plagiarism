#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int hkm_x;
    cin>>hkm_x;
    while(hkm_x--)
    {
       int spz_iq;
       cin>>spz_iq;
       int sl_l[200];
       for(int zww_qkg=1;zww_qkg<=spz_iq;zww_qkg++)
            sl_l[zww_qkg]=zww_qkg;
       if(spz_iq%2==0)
            for(int hwn_j=2;hwn_j<=spz_iq;hwn_j+=2)
                    swap(sl_l[hwn_j],sl_l[hwn_j-1]);
            else
                for(int wjv_auk=2;wjv_auk<=spz_iq;)
            {

                swap(sl_l[wjv_auk-1],sl_l[wjv_auk]);
                if(wjv_auk==spz_iq-1)
                    wjv_auk++;
                else
                    wjv_auk+=2;

            }

           for(int k_hhs=1;k_hhs<=spz_iq;k_hhs++)
                cout<<sl_l[k_hhs]<<" ";
           cout<<endl;

    }
    return 0;
}
