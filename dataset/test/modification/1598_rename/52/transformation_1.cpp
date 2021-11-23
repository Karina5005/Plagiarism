#include <bits/stdc++.h>
#define pb push_back
#define fi first
#define se second
#define reset(a, b) memset(a, b, sizeof(a))
using namespace std;
typedef long long ll;

const int as_gon = 2e5+5;

ll p_mg, hc_e, at, rsu, b_ikw;
int hdf_z, u_s, rfw[as_gon]={}, dwq_ap[as_gon]={}, fd[as_gon]={}, vhc_kw[as_gon]={};

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int i_kh, y;
    cin >> hdf_z;

    while(hdf_z--)
    {
        cin >> u_s;
        for(i_kh=1; i_kh<=u_s; i_kh++)
        {
            fd[i_kh]=0;
            vhc_kw[i_kh]=0;
        }
        for(i_kh=1; i_kh<=u_s; i_kh++)
        {
            cin >> rfw[i_kh] >> dwq_ap[i_kh];
            fd[rfw[i_kh]]++;
            vhc_kw[dwq_ap[i_kh]]++;
        }
        b_ikw = (1LL*u_s*(u_s-1)*(u_s-2))/6;
        for(i_kh=1; i_kh<=u_s; i_kh++)
        {
            b_ikw -= (1LL*(fd[rfw[i_kh]]-1)*(vhc_kw[dwq_ap[i_kh]]-1));
        }
        cout << b_ikw << endl;
    }
    return 0;
}