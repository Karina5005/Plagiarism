#include <bits/stdc++.h>
#define ll long long int
#define pb(n) push_back(n);
#define loop(i,a,b) for(ll i = a;i<b;i++)
#define nl cout << endl;
#define all(x) x.begin(),x.end()
#define mod 1000000007
#define f first
#define s second
using namespace std;



void vjx_bw(){
    int o_but,auo_dy;    cin >> o_but >> auo_dy;
    int g[o_but];
    int h = 0;
    for(int &gaz_qdk: g){
        cin >> gaz_qdk;
        h += gaz_qdk;
    }
    
    while(auo_dy--){
        int fl,pnu_al;    cin >> fl >> pnu_al;

        if(fl == 1){
            if(g[pnu_al-1])    h--;
            else    h++;
            g[pnu_al-1] = 1 - g[pnu_al-1];
        }else{
            if(pnu_al <= h) cout << "1";
            else    cout << "0";
        }

        nl
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    vjx_bw();


}