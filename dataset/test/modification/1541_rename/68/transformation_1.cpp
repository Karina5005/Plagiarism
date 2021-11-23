#include<iostream>
#include<algorithm>
using namespace std;

int ph;
int main(){
	cin>>ph;
	int g_mjg , ki_m[105];
	
	while(ph--)
    {
    	cin>>g_mjg;
    	for(int qrf=1; qrf<=g_mjg; qrf++)
    	ki_m[qrf] = qrf;
    	
    	if(g_mjg%2 == 0)
    	{
    		for(int x=1; x<=g_mjg-1; x+=2)
    		{
    			swap(ki_m[x],ki_m[x+1]);
    			cout<<ki_m[x]<<" "<<ki_m[x+1]<<" ";
			}
			cout<<endl;
		}
		
		if(g_mjg%2 == 1)
		{
			if(g_mjg <= 3)
			{
				cout<<"3 1 2 "<<endl;
			}
			
			if(g_mjg > 3)
			{
				cout<<"3 1 2 ";
				for(int d=4; d<=g_mjg-1; d+=2)
				{
					swap(ki_m[d],ki_m[d+1]);
					cout<<ki_m[d]<<" "<<ki_m[d+1]<<" ";
				}
		        cout<<endl;
			} 
		}
	}	
	return 0;
}