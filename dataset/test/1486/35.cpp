#include<bits/stdc++.h>
using namespace std;
long long int i,n,l,t,sm;
#define for(i,l,n) for(i=0;i<n;i++)
int main()
{

    cin>>t;
    while(t--)
    {

        sm=0;
        cin>>n;
        long long int arr[n];
        for(i,0,n)

            cin>>arr[i];


        for(i,0,n)
        {
            sm+=arr[i];
            if(sm<(i*(i+1)/2))
                break;
        }
        if(i==n) cout<<"yes";
        else cout<<"no";
        cout<<endl;




    }
}
