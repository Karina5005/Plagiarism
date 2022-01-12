#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int wt;
    cin>>wt;
    while(wt--!=0){
        int au_wqh;
        cin>>au_wqh;
        string fz_jbw="989";
        int w_hd=0;
        cout<<fz_jbw.substr(0,min(au_wqh,19));
        for(int y=fz_jbw.length();y<au_wqh;y++){
            cout<<w_hd;
            w_hd++;
            if(w_hd>9){
                w_hd=0;
            }
        }
        cout<<"\n";
    }
    return 0;
}