#include<bits/stdc++.h>
using namespace std;

int main()
{
    int d_mk;cin>>d_mk;

    while(d_mk--)
    {
        int e;cin>>e;

        string t_rf;cin>>t_rf;
        string dor_tkw;cin>>dor_tkw;

        int z_w=0;

        for(int wwk_ras=0;wwk_ras<e;wwk_ras++)
        {
            if(t_rf[wwk_ras]=='1' && dor_tkw[wwk_ras]=='1')
                z_w=1;
        }
        if(z_w==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }

}
