
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long owi;
    cin>>owi;
    while(owi--){
        long long zd_ckh;
        cin>>zd_ckh;
        string tvq;cin>>tvq;
        string d_mk;
        cin>>d_mk;
        vector<pair<long long, long long> > e;
        long long t_rf=0;
        long long dor_tkw=0;
        long long z_w=0;
        for(long long wwk_ras=0;wwk_ras<zd_ckh;wwk_ras++){
            if(tvq[wwk_ras]=='0') z_w++;
            else dor_tkw++;
            
            if(z_w==dor_tkw){
                e.push_back({t_rf,wwk_ras});
                t_rf=wwk_ras+1;
            };
        };
        for(auto du_v : e){
            long long s=du_v.first;
            long long kz=du_v.second;
            if(tvq[s]==d_mk[s]) continue;
            else{
                for(long long pm=s;pm<=kz;pm++) 
                if(tvq[pm]=='0') tvq[pm]='1';
                else tvq[pm]='0';
            };
        };
        if(tvq==d_mk) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}