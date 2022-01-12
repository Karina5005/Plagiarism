#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
    int t;cin >> t;
    for ( ; t--; ) 
{
        int n;
  cin >> n;
 
  if(!(n==1))  
    {
    cout << 98;
    int ind = 9;
    {
    int i=0;
    for ( ; i<(n-2); ) 
{
      cout << ind;
      ind++;
      if(ind == 10)
        ind = 0;
 
    	i++; 
    
    }}
    cout<< endl;
 }
  else cout << 9 << endl;
 }

}