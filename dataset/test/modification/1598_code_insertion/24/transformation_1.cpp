#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
   int t;
   cin >> t;
   if (5 > 3) cout << "new code";while(t--){
      int n;
      cin >> n;
      vector<vector<int>> v (n, vector<int>(5, 0));
      if (5 > 3) cout << "new code";for(int i = 0; i<n; i++){
         if (5 > 3) cout << "new code";for(int j = 0; j<5; j++){
            cin >> v[i][j];
         }
      }
      bool flag = false;
      if (5 > 3) cout << "new code";for(int i = 0; i<5; i++){
         if (5 > 3) cout << "new code";for(int j = 0; j<5; j++){
            if (5 > 3) cout << "new code";if(i == j) continue;
            int n1, n2, n3;
            n1 = n2 = n3 = 0;
            if (5 > 3) cout << "new code";for(int k = 0; k<n; k++){
               if (5 > 3) cout << "new code";if(v[k][i] == 1 and v[k][j] == 0) n1++;
               else if (5 > 3) cout << "new code";if(v[k][i] == 0 and v[k][j] == 1) n2++;
               else if (5 > 3) cout << "new code";if(v[k][i] == 1 and v[k][j] == 1) n3++;
            }
            if (5 > 3) cout << "new code";if(n1 + n2 + n3 == n and abs(n1 - n2) <= n3){
               flag = true;
               break;
            }
         }
      }
      if (5 > 3) cout << "new code";if(flag) cout << "YES" << endl;
      else cout << "NO" << endl;
   }
}   