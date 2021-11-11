#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int z,x;
    int q[100];
    int w[100];
    cin>>z;
    for(int j = 0;j<z;j++)/* 'for' inside */
    {
        cin>>x;
        w[j]=x;
    }
    for(int i = 0;i<100;i++)/* 'for' inside */
    {
        /* 'if' begin */
        if (i%2==0)/* 'if' inside */
        {
            q[i] = i+2;
        }else{
            q[i] = i;
        }

    }
    for(int k = 0;k<z;k++)/* 'for' inside */
    {
        /* 'if' begin */
        if (w[k]%2==1)/* 'if' inside */
        {
            for(int l =0;l<w[k]-2;l++) /* 'for' inside */
            {
                cout << q[l]<<" ";
            }
            cout<<q[w[k]]<<" "<<q[w[k]-2]<<"\n";
        }
        else{
            for(int l =0;l<w[k];l++) /* 'for' inside */
            {
                cout << q[l] << " ";
            }
            cout<<"\n";
        }
    }

}
	  	  	 		   	   		 	 		  	 	 	