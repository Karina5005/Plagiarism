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



using namespace std;
string a;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      cin>>a;
      int len;
      len=a.size();
      int f=0;
      /* 'if' begin */
      if(len%2==0)
      /* 'if' inside */
      {  f=1;
        for(int i=0,j=len/2;i<len/2;i++,j++)
        /* 'for' inside */
        {
          /* 'if' begin */
          if(a[i]!=a[j])
          /* 'if' inside */
          {
              f=0;
              break;
          }
        }
      }
      /* 'if' begin */
      if(f)
      /* 'if' inside */
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
 	   	 		  		       	    	   		