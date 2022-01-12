#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
    int t;cin >> t;
    while(t--){
        int n;
  cin >> n;
 
  if(n==1)  
    cout << 9 << endl;
  else {
    cout << 98;
    int ind = 9;
    for(int i=0;i<(n-2);i++)  {
      cout << ind;
      ind++;
      if(ind == 10)
        ind = 0;
 
    }
    cout<< endl;
 }
 }

}