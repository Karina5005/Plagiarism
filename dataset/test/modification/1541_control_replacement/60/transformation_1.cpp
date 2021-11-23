#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        if(n%2==0) cout << 2 << " " << 1 << " ";
        else cout << 3 << " " << 1 << " " << 2 << " ";
        int temp = n%2;
        {
        int i=3+temp;
        while (i<=n) {
            cout << i+1 << " " << i << " ";
        	i+=2; 
        
        }}
        cout << endl;
    }
    return 0;
}
 		 	    	 	  		 	   		    	 	