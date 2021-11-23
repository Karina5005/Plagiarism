#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t_eb;cin>>t_eb;

    while(t_eb--)
    {
        int zz_xna;cin>>zz_xna;

        string n_xi;cin>>n_xi;
        string a_kx;cin>>a_kx;

        int t=0;

        for(int r_ah=0;r_ah<zz_xna;r_ah++)
        {
            if(n_xi[r_ah]=='1' && a_kx[r_ah]=='1')
                t=1;
        }
        if(t==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }

}
