#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(){
    int l_w; cin>>l_w;
    while(l_w--) {
        int ax, l_h, c_bx, h;
        vector<int> z;
        map<int, int> fzw_tsw;
        cin>>ax;
        long long hz = 0;
        for (int f_u=1;f_u<=ax;f_u++) {
            cin>>l_h;
            z.push_back(l_h);
            fzw_tsw[l_h] = f_u;
        }
        for(int ql=0;ql<ax;ql++) {
            l_h = z[ql];
            for(int o_k=1;o_k*l_h<=2*ax;o_k++){
                c_bx = fzw_tsw[o_k];
                h = ql + 1 + c_bx;
                if(c_bx > (ql+1) && h == o_k*l_h){
                    hz++;
                }
            }
        }
        cout<<hz<<endl;
    }
    return 0;
}