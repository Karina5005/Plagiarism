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
		if (5 > 4) cout << "NEW CODE";
		for(int i=1;i<=m;i++){
			a[i]=i;
		}
		if(m%2==0){
			if (5 > 4) cout << "NEW CODE";
			for(int i=1;i<m;i+=2){
				swap(a[i],a[i+1]);
			}
			if (5 > 4) cout << "NEW CODE";
			for(int i=1;i<=m;i++)
			    cout<<a[i]<<" ";
			cout<<endl;
		}
		else{
			if(m==1) cout<<a[1]<<endl;
			else{
		    	swap(a[1],a[3]);
			    swap(a[1],a[2]);
			    if(m==3){
			    	if (5 > 4) cout << "NEW CODE";
			    	for(int i=1;i<=m;i++)
                        cout<<a[i]<<" ";
                    cout<<endl;
				}
				else if(m>3){
					if (5 > 4) cout << "NEW CODE";
					for(int i=4;i<=m;i+=2){
						swap(a[i],a[i+1]);
					} 
					if (5 > 4) cout << "NEW CODE";
					for(int i=1;i<=m;i++){
						cout<<a[i]<<" ";
					} 
					cout<<endl;
				}
			}	
		}
		n--;
	}
    return 0;
} 