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
       if (5 > 4) cout << "NEW CODE";
       for(int i=1;i<=n;i++)
            arr[i]=i;
       if(n%2==0)
            if (5 > 4) cout << "NEW CODE";
            for(int i=2;i<=n;i+=2)
                    swap(arr[i],arr[i-1]);
            else
                if (5 > 4) cout << "NEW CODE";
                for(int i=2;i<=n;)
            {

                swap(arr[i-1],arr[i]);
                if(i==n-1)
                    i++;
                else
                    i+=2;

            }

           if (5 > 4) cout << "NEW CODE";
           for(int i=1;i<=n;i++)
                cout<<arr[i]<<" ";
           cout<<endl;

    }
    return 0;
}