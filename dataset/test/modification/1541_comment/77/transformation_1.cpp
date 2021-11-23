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
        /* 'if' begin */
        if(n%2==0)
        /* 'if' inside */
        {
            for(int i = 1;i<=n;i++)
            /* 'for' inside */
            {
                /* 'if' begin */
                if(i%2==0)
                /* 'if' inside */
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
            /* 'for' inside */
            {
                /* 'if' begin */
                if(i%2==0)
                /* 'if' inside */
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

  	 		 		      	  	 		 	 	   	