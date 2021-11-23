#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
   int t;
   cin >> t;
   for ( ; t--; ) 
{
      int n;
      cin >> n;
      vector<vector<int>> v (n, vector<int>(5, 0));
      {
      int i = 0;
      for ( ; i<n; ) 
{
         {
         int j = 0;
         for ( ; j<5; ) 
{
            cin >> v[i][j];
         	j++; 
         
         }}
      	i++; 
      
      }}
      bool flag = false;
      {
      int i = 0;
      for ( ; i<5; ) 
{
         {
         int j = 0;
         for ( ; j<5; ) 
{
            if(i == j) i++; j++; continue;
            int n1, n2, n3;
            n1 = n2 = n3 = 0;
            {
            int k = 0;
            for ( ; k<n; ) 
{
               if(v[k][i] == 1 and v[k][j] == 0) n1++;
               else if(v[k][i] == 0 and v[k][j] == 1) n2++;
               else if(v[k][i] == 1 and v[k][j] == 1) n3++;
            	k++; 
            
            }}
            if(n1 + n2 + n3 == n and abs(n1 - n2) <= n3){
               flag = true;
               break;
            }
         	j++; 
         
         }}
      	i++; 
      
      }}
      if(!(flag)) cout << "NO" << endl;
      else cout << "YES" << endl;
   }
}   