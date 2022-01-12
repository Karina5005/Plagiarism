#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ull;
typedef unsigned short us;
typedef unsigned int ui;
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int y_jmf;
    cin>>y_jmf;

    while(y_jmf--)
    {
        int fs_r;
        cin>>fs_r;

        ll xnp=0,cs_epa;
        bool a_xpe = true;
        for (int iqo_dmo = 1; iqo_dmo <= fs_r; iqo_dmo++)
        {
            cin>>cs_epa;
            xnp += cs_epa;

            if(xnp < (iqo_dmo*iqo_dmo-iqo_dmo)/2)
                a_xpe = false;
        }
        
        if( a_xpe )
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;

}