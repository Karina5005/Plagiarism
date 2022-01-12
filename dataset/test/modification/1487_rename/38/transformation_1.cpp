#include<bits/stdc++.h>

using namespace std; 


void bhw_zb(){
	int z;
	cin>>z;
	int zja_ouj[z];
  for(int gol=0;gol<z;gol++)
  cin>>zja_ouj[gol];
  
   sort(zja_ouj,zja_ouj+z);
  
  int va = 0;
  for(int j=0;j<z;j++)
  {
  	if(j==0)continue;
  	if(zja_ouj[j]!=zja_ouj[j-1])
  	{
  		va = z-j;break;
  	}
  }
  	cout<<va<<endl;
	}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{bhw_zb();}
  return 0;
}
	
