#include<iostream>
#include<algorithm>
using namespace std;

int T;
int main(){
	cin>>T;
	int n , a[105];
	
	while(T--)
    {
    	cin>>n;
    	{
    	int i=1;
    	while (i<=n) {
    	a[i] = i;
    	i++; 
    	
    	}}
    	
    	if(n%2 == 0)
    	{
    		{
    		int i=1;
    		while (i<=n-1) {
    			swap(a[i],a[i+1]);
    			cout<<a[i]<<" "<<a[i+1]<<" ";
				i+=2; 
			
			}}
			cout<<endl;
		}
		
		if(n%2 == 1)
		{
			if(n <= 3)
			{
				cout<<"3 1 2 "<<endl;
			}
			
			if(n > 3)
			{
				cout<<"3 1 2 ";
				{
				int i=4;
				while (i<=n-1) {
					swap(a[i],a[i+1]);
					cout<<a[i]<<" "<<a[i+1]<<" ";
					i+=2; 
				
				}}
		        cout<<endl;
			} 
		}
	}	
	return 0;
}