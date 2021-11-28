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
        if (5 > 4) cout << "NEW CODE";
        for(int i=3+temp;i<=n;i+=2){
            cout << i+1 << " " << i << " ";
        }
        cout << endl;
    }
    return 0;
}
 		 	    	 	  		 	   		    	 	