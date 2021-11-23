#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       int arr[200];
       for(int i=1;i<=n;i++)
            /* 'for' inside */
            arr[i]=i;
       /* 'if' begin */
       if(n%2==0)
            /* 'if' inside */
            for(int i=2;i<=n;i+=2)
                    /* 'for' inside */
                    swap(arr[i],arr[i-1]);
            else
                for(int i=2;i<=n;)
            /* 'for' inside */
            {

                swap(arr[i-1],arr[i]);
                /* 'if' begin */
                if(i==n-1)
                    /* 'if' inside */
                    i++;
                else
                    i+=2;

            }

           for(int i=1;i<=n;i++)
                /* 'for' inside */
                cout<<arr[i]<<" ";
           cout<<endl;

    }
    return 0;
}
