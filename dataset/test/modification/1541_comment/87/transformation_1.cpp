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
		for(int i=1;i<=m;i++)/* 'for' inside */
		{
			a[i]=i;
		}
		/* 'if' begin */
		if(m%2==0)/* 'if' inside */
		{
			for(int i=1;i<m;i+=2)/* 'for' inside */
			{
				swap(a[i],a[i+1]);
			}
			for(int i=1;i<=m;i++)
			    /* 'for' inside */
			    cout<<a[i]<<" ";
			cout<<endl;
		}
		else{
			/* 'if' begin */
			if(m==1) /* 'if' inside */
			cout<<a[1]<<endl;
			else{
		    	swap(a[1],a[3]);
			    swap(a[1],a[2]);
			    /* 'if' begin */
			    if(m==3)/* 'if' inside */
			    {
			    	for(int i=1;i<=m;i++)
                        /* 'for' inside */
                        cout<<a[i]<<" ";
                    cout<<endl;
				}
				else /* 'if' begin */
				if(m>3)/* 'if' inside */
				{
					for(int i=4;i<=m;i+=2)/* 'for' inside */
					{
						swap(a[i],a[i+1]);
					} 
					for(int i=1;i<=m;i++)/* 'for' inside */
					{
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