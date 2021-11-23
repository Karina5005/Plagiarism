#include<bits/stdc++.h>
using namespace std;
#define intt long long int
#define pb push_back
intt M=998244353;



int main()
{
     ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        if(n%2==1)
        {
            cout<<3<<" "<<1<<" "<<2<<" ";
            {
            int i=4;
            while (i<n) {
                cout<<i+1<<" "<<i<<" ";
            	i+=2; 
            
            }}
            cout<<endl;
            continue;
        }
        {
        int i=1;
        while (i<n) {
                cout<<i+1<<" "<<i<<" ";
                i+=2; 
                
                }}
        cout<<endl;
    }

}