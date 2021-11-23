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
        if(n%2==0)
        {
            for(int i = 1;i<=n;i++)
            {
                if(i%2==0)
                {
                    cout<<i-1<<" ";
                }
                else
                    cout<<i+1<<" ";
            }
        }
        else
        {
              for(int i = 1;i<=n-3;i++)
            {
                if(i%2==0)
                {
                    cout<<i-1<<" ";
                }
                else
                    cout<<i+1<<" ";

            }
            cout<<n-1<<" "<<n<<" "<<n-2;
        }

        cout<<endl;

    }
}

  	 		 		      	  	 		 	 	   	