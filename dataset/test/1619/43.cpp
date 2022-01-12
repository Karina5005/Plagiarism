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
      if(len%2==0)
      {  f=1;
        for(int i=0,j=len/2;i<len/2;i++,j++)
        {
          if(a[i]!=a[j])
          {
              f=0;
              break;
          }
        }
      }
      if(f)
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
 	   	 		  		       	    	   		