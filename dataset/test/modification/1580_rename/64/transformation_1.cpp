#include<bits/stdc++.h>
using namespace std;
typedef int ll;
typedef unsigned long long ull;
typedef long double lld;
const ll r = 1e9+7;
const ll dz_jk = 998244353;
const ll iv = 9e18+5;
const double c = acosl(-1.0l);
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define ff first
#define ss second
const long double wp = 1e-9;


const int hw= 4e3+4;
int ojm_s[ hw ][ hw ];
int qul[ hw ][ hw ];

ll kpx(int zh_y , int d , int m , int mmd ){

    ll pce = ojm_s[m][mmd];
    pce -= (zh_y-1>=0)?ojm_s[zh_y-1][mmd]:0;
    pce -= (d-1>=0)?ojm_s[m][d-1]:0;
    pce += (d-1>=0 && zh_y-1>=0 )?ojm_s[zh_y-1][d-1] : 0;
    return pce;
}

ll win_vgu(int pae, int zxz_nx , int oly_stv , int zn_fc){
    return (oly_stv-pae+1)*(zn_fc-zxz_nx+1);
}

ll ufa_ujn(int l, int j , int wo , int n){

    ll kmk = 0 ;
    //  x1 , y1 + 1 to x1 y2 -1
    ll to_vm = win_vgu(l+1,j , wo-1 ,j )-kpx(l+1,j , wo-1 ,j );


    to_vm += win_vgu(l+1,n,wo-1,n)-kpx(l+1,n , wo-1 ,n );
    to_vm += win_vgu(l,j+1,l,n-1)-kpx(l,j+1,l,n-1);
    to_vm += win_vgu(wo,j+1,wo,n-1)-kpx(wo,j+1,wo,n-1);
    to_vm += kpx(l+1,j+1,wo-1,n-1);

    return to_vm;
}


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif

    ios_base :: sync_with_stdio(0);
    cin.tie(0);

    int tv_syw;
    cin>>tv_syw;
    while(tv_syw--){
       ll cq_bvk,ajs;
       cin>>cq_bvk>>ajs;
       memset(ojm_s , 0 , sizeof ojm_s);

       for(int oar_uyz = 0 ; oar_uyz < cq_bvk;oar_uyz++){
            string kbo_unx;
            cin>>kbo_unx;
            for(int yo_zg = 0 ; yo_zg < ajs ; yo_zg++){
                qul[oar_uyz][yo_zg]  = kbo_unx[yo_zg]-'0';
            }
       }

       for(int gyv = 0; gyv<cq_bvk;gyv++){
        for(int v = 0;v<ajs;v++){
            ojm_s[gyv][v] = ((gyv-1>=0)?ojm_s[gyv-1][v]:0) + ((v-1>=0)?ojm_s[gyv][v-1]:0)
             - ((gyv-1>=0&&v-1>=0)?ojm_s[gyv-1][v-1]:0)
             + qul[gyv][v];
        }
       }
//

        /// fix rows;
    ll x = 1e9;

    ll vvj_on[ajs+1];
    ll imi[ajs+1];
       for(int p_hy = 0 ; p_hy < cq_bvk;p_hy++){
            for(int sls_erd = p_hy+4;sls_erd< cq_bvk ;sls_erd++){
                for(int i = ajs-1 ; i>=3;i--){
                    vvj_on[i] = ufa_ujn(p_hy , 0 , sls_erd , i);
                    if(i+1==ajs){
                        imi[i] = i;
                    }
                    else{
                        if(vvj_on[i+1] < vvj_on[i]){
                            imi[i] = imi[i+1];
                            vvj_on[i] = vvj_on[i+1];
                        }
                        else{
                            imi[i] = i;
                        }
                    }
                }
                for(int qri = 0; qri<ajs;qri++){
                    int c_l = qri + 3;
                    if(c_l >= ajs)break;
                    int lx_ydm = imi[c_l];

                    x = min(x , ufa_ujn(p_hy , qri , sls_erd , lx_ydm) );
                }
            }
       }
       cout<<x<<"\n";
    }
}
