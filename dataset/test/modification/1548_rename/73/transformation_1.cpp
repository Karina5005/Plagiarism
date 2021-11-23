#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

const ll u_htz = 1e5+10;

void zga(){
    int r,mzw;
    cin>>r>>mzw;
    vector<int>xzn(r,0);

    for(int yt_dr = 0;yt_dr < mzw;yt_dr++){
        int l_f,opb;
        cin>>l_f>>opb;
        l_f--;opb--;
        xzn[min(opb,l_f)]++;
    }

    int x_li = 0;
    for(int yl_fn = 0;yl_fn < r;yl_fn++){
        if(xzn[yl_fn] == 0)
            x_li++;
    }

    int jy;
    cin>>jy;
    while(jy--){
        int d;
        cin>>d;
        if(d == 3){
            cout<<x_li<<'\n';
        }
        else{
            int u_sct,mf;
            cin>>u_sct>>mf;
            u_sct--;mf--;
            if(d == 1){
                xzn[min(u_sct,mf)]++;
                if(xzn[min(mf,u_sct)] == 1){
                    x_li--;
                }
            }
            else{
                xzn[min(u_sct,mf)]--;
                if(xzn[min(mf,u_sct)] == 0){
                    x_li++;
                }
            }
        }

    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int no = 1;
    //cin>>t;
    int le = 1;
    while(le <= no){
        //cout<<"Case #"<<cnt<<": ";
        zga();
        le++;
    }
}