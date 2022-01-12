#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
    int t;cin >> t;
    while(t--){
        int n;
  cin >> n;
 
  /* 'if' begin */
  if(n==1)  
    /* 'if' inside */
    cout << 9 << endl;
  else {
    cout << 98;
    int ind = 9;
    for(int i=0;i<(n-2);i++)  /* 'for' inside */
    {
      cout << ind;
      ind++;
      /* 'if' begin */
      if(ind == 10)
        /* 'if' inside */
        ind = 0;
 
    }
    cout<< endl;
 }
 }

}