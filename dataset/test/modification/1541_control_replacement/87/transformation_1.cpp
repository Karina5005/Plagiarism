#include <bits/stdc++.h>
using namespace std;

int a[105];
void swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}
int main(){
	int n,m;
	cin>>n;
	while(n>0){
		cin>>m;
		{
		int i=1;
		while (i<=m) {
			a[i]=i;
			i++; 
		
		}}
		if(!(m%2==0)){
			if(m==1) cout<<a[1]<<endl;
			else{
		    	swap(a[1],a[3]);
			    swap(a[1],a[2]);
			    if(m==3){
			    	{
			    	int i=1;
			    	while (i<=m) {
                        cout<<a[i]<<" ";
                        i++; 
                        
                        }}
                    cout<<endl;
				}
				else if(m>3){
					{
					int i=4;
					while (i<=m) {
						swap(a[i],a[i+1]);
						i+=2; 
					
					}} 
					{
					int i=1;
					while (i<=m) {
						cout<<a[i]<<" ";
						i++; 
					
					}} 
					cout<<endl;
				}
			}	
		}
		else{
			{
			int i=1;
			while (i<m) {
				swap(a[i],a[i+1]);
				i+=2; 
			
			}}
			{
			int i=1;
			while (i<=m) {
			    cout<<a[i]<<" ";
			    i++; 
			    
			    }}
			cout<<endl;
		}
		n--;
	}
    return 0;
} 