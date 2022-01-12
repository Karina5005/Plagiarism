#include <bits/stdc++.h>

using namespace std;

void bhw_zb(){
  int z;
  cin >> z;
  vector<int> zja_ouj(2*z);
  for(int gol = 0; gol<2*z;gol++){
    cin >> zja_ouj[gol];
  }  
  sort(zja_ouj.begin(), zja_ouj.end());
  for(int va = 0; va<z;va++){
    cout << zja_ouj[2*z-va-1]<<" "<<zja_ouj[va]<<" ";
    
  }
  cout <<'\n';
}


int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int j;
  cin >> j;
  while(j--){
    bhw_zb();
  }
  return 0;
}