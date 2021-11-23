#include<bits/stdc++.h>
using namespace std;
vector<long long>h[100000];
vector<int>stg(long long  rb){
    vector<int>fdg(rb+1);
    int iev_mv =2;
    while((iev_mv<=rb)){
        for(long long  ky_fzo = iev_mv*1;ky_fzo<=rb;ky_fzo+=iev_mv){
            h[iev_mv].push_back(ky_fzo);
        }
        iev_mv++;
    }
    return fdg;
}

bool kxt(long long  keo){
    if(keo == 1){
        return false;
    }
    for(long long  ow=2;ow<=sqrt(keo);++ow){
        if(keo%ow == 0){
            return false;
        }

    }
    return true;
}
long long xev(long long  int vr_o,long long int wew){
    if(wew==0){
        return vr_o;
    }
    return xev(wew,vr_o%wew);
}
long long  r(long long  xwg_gpd ,long long  msj){
    return (xwg_gpd*msj)/xev(xwg_gpd,msj);
}


long long  xq_yn(string ys_y,int xk_r){
    long long o = 0;
    for(int s_wlz=0;s_wlz<ys_y.size();++s_wlz){
        o = (o*10+ys_y[s_wlz]-'0')%xk_r;
    }
    return o;
}
vector<vector<int>>nro_h(vector<int>ly_l){
    int ry_nvn = ly_l.size();
    ry_nvn = pow(2,ry_nvn)-1;
    vector<vector<int>>gz;
    for(int el=0;el<=ry_nvn;++el){
        vector<int>dtl_yje;
        for(int ol_x = 0;ol_x<ly_l.size();++ol_x){
            if((el&(1<<ol_x))!=0){
                dtl_yje.push_back(ly_l[ol_x]);
            }
        }
        gz.push_back(dtl_yje);
        dtl_yje.clear();
    }
    return gz;
}
vector<int> g_h(long long bqo){
    long long m =2;
    vector<int>usq;
    while(bqo!=1){
        while(bqo%m == 0){
            usq.push_back(m);
            bqo/=m;
        }
        m++;
    }
    if(bqo!=1){
        usq[bqo]++;
    }
    return usq;
}
map<long long ,long long >  w(long long ay_zum){
    map<long long ,long long >rx;
    for(long long qk_jr=2;qk_jr*qk_jr<=ay_zum;++qk_jr){
        while(ay_zum%qk_jr == 0){
            rx[qk_jr]++;
            ay_zum/=qk_jr;
        }
        
    }
    if(ay_zum!=1){
        rx[ay_zum]++;
    }
    return rx;
}
// This is function is solving the following equation 
// ax+by = c
//this is linear equation
// a*x = c-(b*y)
// we can also written as :- a = c-(b*y)/x
// this function done this work.
// int solution(int a,int b ,int c){
//     for(int i=0;i*b<=c;++i){
//         if((c-(b*i))%a == 0){
//             return i;
//         }
//     }
//     return -1;
// }
long long int m_txt(long long jwu_kbn ,long long oui){
    long long int k_eq =1;
    int huu=0;
    while(oui>0){
        if(oui&1){
            k_eq = k_eq*jwu_kbn;
        }
        jwu_kbn= jwu_kbn*jwu_kbn;
        oui>>=1;
    }
    return k_eq;
}
// set<int>checking(long long n){
//     set<int>divsor;
//     for(int i=1;i*i<=n;++i){
//         if(n%i == 0){
//             divsor.insert(i);
//             if(n/i !=i){
//                 divsor.insert(n/i);
//             }
//         }
//     }
//     return divsor;
// }
// int multiplie_hsh[n];
// int hsh[n];
// void muplit(){
//     for(int i=1;i<n;++i){
//         for(int j=i;j<n;j+=i){
//             multiplie_hsh[i]+=(hsh[j]);
//         }
//     }
// }
//this code is useful for another questions that we are discussing after solving this problem;
    // long long  y,n;
    // cin>>y>>n;
    // map<long long ,long long >v = prime_result(n);
    // long long result =0;
    // for(auto &x:v){
    //     bool ok = false;
    //     for(int i=x.second;i>=0;--i){
    //         long long num = fast_exponentaiion(x.first,i);
    //         if(y%num == 0){
    //             cout<<num<<endl;
    //             ok = true;
    //             if(result == 0){
    //                 result = num;
    //             }else{
    //                 result = ((result%mod)*(num%mod))%mod;
    //             }
    //             break;
    //         }
    //     }
    // }
    // cout<<result%mod<<endl;
bool hgi(string rtb_he,int ahk_ncj ,int gh_pbl){
    if(ahk_ncj>=gh_pbl){
        return true;
    }
    if(rtb_he[ahk_ncj] !=rtb_he[gh_pbl]){
        return false;
    }
    return hgi(rtb_he,ahk_ncj+1,gh_pbl-1);
}
// long long result ;
// const long long n = 1e6;
// int hp[n];
// int lp[n];
// int prime[n];
// void lp_finding(){
//     for(long long  i=2;i<n;++i){
//         if(prime[i]!=-1){
//             lp[i] = i;
//             hp[i] = i;
//             for(long long j=i;j<n;j+=i){
//                 if(lp[j] == 0){
//                     lp[j] = i;
//                 }
//                 hp[j] = i;
//                 prime[j] = -1;
//             }
//         }
//     }
//     return ;
// }
// int finding(int n){
//     result = 0;
//     while(n!=1){
//         int num = lp[n];
//         while(n%num == 0){
//             result++;
//             n/=num;
//         }
//     }
//     return result;
// }
// pair<int,int> upper_bounds(vector<pair<int,int>>arr, int N, int X)
// {
//     int mid;
//     int low = 0;
//     int high = N;
//     while (low < high) {
//         mid = low + (high - low) / 2;
//         if (X >= arr[mid].first) {
//             low = mid + 1;
//          }
//         else {
//             high = mid;
//         }
//     }
//     if(low < N && arr[low].first <= X) {
//        low++;
//     }
//     return arr[low];
// }
int p(int mpb[], int ofo_p, int qb_qn)
{
    int q_q;
    int ek = 0;
    int xj = ofo_p;
    while (ek < xj) {
        q_q = ek + (xj - ek) / 2;
        if (qb_qn <= mpb[q_q]) {
            xj = q_q;
        }
        else {
            ek = q_q + 1;
        }
    }
    if(ek < ofo_p && mpb[ek] < qb_qn) {
       ek++;
    }
    return ek;
}
vector<long long int>djk;
int z(string zb_cf,string ujq){
    int nsf =0;
    for(int dg_gy=0;dg_gy<zb_cf.size();dg_gy+=2){
        string zb_m;
        zb_m+=zb_cf[dg_gy];
        zb_m+=zb_cf[dg_gy+1];
        if(zb_m == ujq){
            nsf++;
        }

    }
    return nsf;
}
long long rs_djg(string i_uqz){
    long long k = 0;
    long long wt_ny =0;
    long long h =31;
    for(char &la_fa:i_uqz){
        long long ni = (int(la_fa)-int('a'))+1;
        k+=(ni*m_txt(h,wt_ny));
        wt_ny++;
    }
    return k;
}
void kty(){  
    int tb_jd;
    cin>>tb_jd;
    vector<pair<long long,int>>e(tb_jd);
    for(int y=0;y<tb_jd;++y){
        long long p;
        cin>>p;
        if(p<=(2*tb_jd)){
            e[y] = {p,y+1};
        }
    }
    sort(e.begin(),e.end());
    long long w_n =0;
    for(int z_s=0;z_s<e.size();++z_s){
        for(int ed=z_s+1;ed<e.size();++ed){
            if((e[z_s].first*e[ed].first)>2*tb_jd){
                break;
            }
            if((e[z_s].first*e[ed].first) == (e[z_s].second+e[ed].second)){
                w_n++;
            }
        }
    }
    cout<<w_n<<endl;
    return ;
}
int l_m,pey,oun;
void xeq_eo(int gc_l,int c){
    if(c == 0){
        l_m = gc_l;
        pey = 1;
        oun = 0;
    }else{
        xeq_eo(c,gc_l%c);
        int rl_it = pey;
        pey = oun;
        oun = rl_it-(gc_l/c)*oun;
    }
}
int main(){
    int t ;
    cin>>t;
    while(t--){
        kty();
    }
    return 0;
}