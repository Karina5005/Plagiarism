#include<bits/stdc++.h>

using namespace std;
typedef long long LL;
vector<int> s[200007];
set<int> ixe;
LL qq_yso,rcm,iuq_px;
int main() {


   cin>>rcm;
   while(rcm--)
   {
      cin>>qq_yso>>iuq_px;iuq_px--;
      if(qq_yso%2)
      {
          LL a=qq_yso/2,doc=iuq_px%qq_yso;
          doc+=iuq_px/a;
          doc=doc%qq_yso+1;
          cout<<doc<<endl;
      }
      else cout<<iuq_px%qq_yso+1<<endl;
      
        
   }

	return 0;
}