#include<bits/stdc++.h>
using namespace std;
int main()
{
    int yn_so,h;
    cin>>yn_so;
    while(yn_so--)
    {
        cin>>h;
        int lxr_t=2;
        if(h%2==0)
        {
            for(int kxb = 1;kxb<=h;kxb++)
            {
                if(kxb%2==0)
                {
                    cout<<kxb-1<<" ";
                }
                else
                    cout<<kxb+1<<" ";
            }
        }
        else
        {
              for(int fyu = 1;fyu<=h-3;fyu++)
            {
                if(fyu%2==0)
                {
                    cout<<fyu-1<<" ";
                }
                else
                    cout<<fyu+1<<" ";

            }
            cout<<h-1<<" "<<h<<" "<<h-2;
        }

        cout<<endl;

    }
}

  	 		 		      	  	 		 	 	   	