#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        /* 'if' begin */
        if(n%2==0) /* 'if' inside */
        cout << 2 << " " << 1 << " ";
        else cout << 3 << " " << 1 << " " << 2 << " ";
        int temp = n%2;
        for(int i=3+temp;i<=n;i+=2)/* 'for' inside */
        {
            cout << i+1 << " " << i << " ";
        }
        cout << endl;
    }
    return 0;
}
 		 	    	 	  		 	   		    	 	