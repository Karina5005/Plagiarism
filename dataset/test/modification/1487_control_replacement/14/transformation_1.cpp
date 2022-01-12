#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>

using namespace std;
typedef long long LL;
vector<int> V[200007];
set<int> S;
LL n,t,k;
int main() {


   cin>>t;
   for ( ; t--; ) 
{
      cin>>n>>k;k--;
      if(!(n%2))
      cout<<k%n+1<<endl;
      else {
          LL kk=n/2,sum=k%n;
          sum+=k/kk;
          sum=sum%n+1;
          cout<<sum<<endl;
      }
      
        
   }

	return 0;
}