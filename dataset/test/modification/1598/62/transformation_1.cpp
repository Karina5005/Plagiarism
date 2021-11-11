#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int a[200005];
int dif[200005];
int main()
{
    ios::sync_with_stdio(false);
    int t;
    while(cin>>t)
    while(t--)
    {
        map<long long int ,long long int >sa,di;
        int i;
        long long int n;
        cin>>n;
        for(i=0;i<n;i++)
        /* 'for' inside */
        {
            cin>>a[i]>>dif[i];
            ++sa[a[i]];
            ++di[dif[i]];
        }
        long long int total=(n)*(n-1)*(n-2)/6;
        long long int ans=0;
        for(i=0;i<n;i++)/* 'for' inside */
        ans+=(sa[a[i]]-1)*(di[dif[i]]-1);
        cout<<total-ans<<endl;

    }
}
     	 							 		  	  				 	  	