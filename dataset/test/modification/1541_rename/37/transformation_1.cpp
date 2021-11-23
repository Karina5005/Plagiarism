#include<bits/stdc++.h>
using namespace std;
int main(){
    int zo;
    cin>>zo;
    int mr[zo];
    int zfl[zo][100];
    for( int sx = 0; sx < zo; sx++ ){
        cin>>mr[sx];
    }
    for( int c = 0; c < zo; c++ ){
        if( mr[c]%2 == 0 ){
            for( int vdj = 2; vdj <= mr[c]; vdj = vdj+2 ){
                zfl[c][vdj-2] = vdj;
                zfl[c][vdj-1] = vdj-1;
            }
        }
        else{
            for( int t = 2; t <= mr[c]-3; t = t+2 ){
                zfl[c][t-2] = t;
                zfl[c][t-1] = t-1;
            }
            zfl[c][mr[c]-3] = mr[c];
            zfl[c][mr[c]-2] = mr[c]-2;
            zfl[c][mr[c]-1] = mr[c]-1;
        }
    }
    for( int gj_b = 0; gj_b < zo; gj_b++ ){
        for( int am_gn = 0; am_gn < mr[gj_b]; am_gn++ ){
            cout<<zfl[gj_b][am_gn]<<" ";
        }
        cout<<endl;
    }
    return 0;
}