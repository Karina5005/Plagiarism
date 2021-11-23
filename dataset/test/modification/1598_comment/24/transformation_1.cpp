#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
   int t;
   cin >> t;
   while(t--){
      int n;
      cin >> n;
      vector<vector<int>> v (n, vector<int>(5, 0));
      for(int i = 0; i<n; i++)/* 'for' inside */
      {
         for(int j = 0; j<5; j++)/* 'for' inside */
         {
            cin >> v[i][j];
         }
      }
      bool flag = false;
      for(int i = 0; i<5; i++)/* 'for' inside */
      {
         for(int j = 0; j<5; j++)/* 'for' inside */
         {
            /* 'if' begin */
            if(i == j) /* 'if' inside */
            continue;
            int n1, n2, n3;
            n1 = n2 = n3 = 0;
            for(int k = 0; k<n; k++)/* 'for' inside */
            {
               /* 'if' begin */
               if(v[k][i] == 1 and v[k][j] == 0) /* 'if' inside */
               n1++;
               else /* 'if' begin */
               if(v[k][i] == 0 and v[k][j] == 1) /* 'if' inside */
               n2++;
               else /* 'if' begin */
               if(v[k][i] == 1 and v[k][j] == 1) /* 'if' inside */
               n3++;
            }
            /* 'if' begin */
            if(n1 + n2 + n3 == n and abs(n1 - n2) <= n3)/* 'if' inside */
            {
               flag = true;
               break;
            }
         }
      }
      /* 'if' begin */
      if(flag) /* 'if' inside */
      cout << "YES" << endl;
      else cout << "NO" << endl;
   }
}   