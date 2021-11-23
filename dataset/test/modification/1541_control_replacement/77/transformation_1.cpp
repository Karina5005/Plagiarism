#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int r=2;
        if(!(n%2==0))
        {
              {
              int i = 1;
              while (i<=n-3) {
                if(i%2==0)
                {
                    cout<<i-1<<" ";
                }
                else
                    cout<<i+1<<" ";

            	i++; 
            
            }}
            cout<<n-1<<" "<<n<<" "<<n-2;
        }
        else
        {
            {
            int i = 1;
            while (i<=n) {
                if(i%2==0)
                {
                    cout<<i-1<<" ";
                }
                else
                    cout<<i+1<<" ";
            	i++; 
            
            }}
        }

        cout<<endl;

    }
}

  	 		 		      	  	 		 	 	   	