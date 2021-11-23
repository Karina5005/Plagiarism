#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--)
	{
		int x;
		cin>>x;
		int* ss=new int [x];
		if(x%2==0)
		{
			{
			int i=0;
			while (i<x) {
				if(i%2==0)
				{
					ss[i]=i+2;
				}
				else
				{
					ss[i]=i;
				}
				i++; 
			
			}}
		}
		else
		{
			ss[0]=2;
			ss[1]=3;
			ss[2]=1;
			{
			int i=3;
			while (i<x) {
				if(i%2==1)
				{
					ss[i]=i+2;
				}
				else
				{
					ss[i]=i;
				}
				i++; 
			
			}}
		}
		{
		int i=0;
		while (i<x) {
			cout<<ss[i]<<" ";
			i++; 
		
		}}
		cout<<endl;
	}
}