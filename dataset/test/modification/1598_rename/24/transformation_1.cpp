#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
   int lu;
   cin >> lu;
   while(lu--){
      int ymk_tij;
      cin >> ymk_tij;
      vector<vector<int>> jj (ymk_tij, vector<int>(5, 0));
      for(int isg_nyi = 0; isg_nyi<ymk_tij; isg_nyi++){
         for(int cgb_jsn = 0; cgb_jsn<5; cgb_jsn++){
            cin >> jj[isg_nyi][cgb_jsn];
         }
      }
      bool iw = false;
      for(int x = 0; x<5; x++){
         for(int ob = 0; ob<5; ob++){
            if(x == ob) continue;
            int re, g, ln;
            re = g = ln = 0;
            for(int f = 0; f<ymk_tij; f++){
               if(jj[f][x] == 1 and jj[f][ob] == 0) re++;
               else if(jj[f][x] == 0 and jj[f][ob] == 1) g++;
               else if(jj[f][x] == 1 and jj[f][ob] == 1) ln++;
            }
            if(re + g + ln == ymk_tij and abs(re - g) <= ln){
               iw = true;
               break;
            }
         }
      }
      if(iw) cout << "YES" << endl;
      else cout << "NO" << endl;
   }
}   