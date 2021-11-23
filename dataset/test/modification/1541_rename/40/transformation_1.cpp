#include<bits/stdc++.h>
using namespace std;
#define intt long long int
#define pb push_back
intt M=998244353;



int main()
{
     ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int xdb_dh;cin>>xdb_dh;
    while(xdb_dh--)
    {
        int fp;cin>>fp;
        if(fp%2==1)
        {
            cout<<3<<" "<<1<<" "<<2<<" ";
            for(int h_dh=4;h_dh<fp;h_dh+=2)
            {
                cout<<h_dh+1<<" "<<h_dh<<" ";
            }
            cout<<endl;
            continue;
        }
        for(int g_g=1;g_g<fp;g_g+=2)
                cout<<g_g+1<<" "<<g_g<<" ";
        cout<<endl;
    }

}