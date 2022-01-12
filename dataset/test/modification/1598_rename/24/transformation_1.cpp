#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
   int at;
   cin >> at;
   while(at--){
      int pq;
      cin >> pq;
      vector<vector<int>> jz (pq, vector<int>(5, 0));
      for(int ukf = 0; ukf<pq; ukf++){
         for(int nuf = 0; nuf<5; nuf++){
            cin >> jz[ukf][nuf];
         }
      }
      bool p = false;
      for(int cd_g = 0; cd_g<5; cd_g++){
         for(int s = 0; s<5; s++){
            if(cd_g == s) continue;
            int t_eb, zz_xna, n_xi;
            t_eb = zz_xna = n_xi = 0;
            for(int a_kx = 0; a_kx<pq; a_kx++){
               if(jz[a_kx][cd_g] == 1 and jz[a_kx][s] == 0) t_eb++;
               else if(jz[a_kx][cd_g] == 0 and jz[a_kx][s] == 1) zz_xna++;
               else if(jz[a_kx][cd_g] == 1 and jz[a_kx][s] == 1) n_xi++;
            }
            if(t_eb + zz_xna + n_xi == pq and abs(t_eb - zz_xna) <= n_xi){
               p = true;
               break;
            }
         }
      }
      if(p) cout << "YES" << endl;
      else cout << "NO" << endl;
   }
}   