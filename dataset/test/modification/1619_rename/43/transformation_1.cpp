#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <queue>
#include <stack>
#include <map>
#include <vector>
#include <set>
#include <ctime>
#include <utility>
#include <unordered_map>
#define MM(x, y) memset(x, y, sizeof(x))
#define lowbit(x) ((x) & (-x))
#define ll long long
#define INF 0x3f3f3f3f
#define bug puts("bugbugbug");

//priority_queue<int,vector<int>,greater<int> >c;
//priority_queue<int>c;

using namespace std;
string a_cq;
int main()
{
    int b_fcl;
    cin>>b_fcl;
    while(b_fcl--)
    {
      cin>>a_cq;
      int os;
      os=a_cq.size();
      int m=0;
      if(os%2==0)
      {  m=1;
        for(int hs_ftf=0,k_r=os/2;hs_ftf<os/2;hs_ftf++,k_r++)
        {
          if(a_cq[hs_ftf]!=a_cq[k_r])
          {
              m=0;
              break;
          }
        }
      }
      if(m)
      {
          cout<<"YES"<<endl;
      }
      else 
      {
          cout<<"NO"<<endl;
      }
    }
    return 0;
}
 	   	 		  		       	    	   		