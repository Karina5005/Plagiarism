#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define f first
#define s second
using namespace std;
 
int main ()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int w;
    cin>>w;
    while(w--)
    {
        int qz_tdq;
        cin>>qz_tdq;
        int sz_ipz=0;
        for(int mmr_rcz=3;mmr_rcz*mmr_rcz<=2*qz_tdq-1;mmr_rcz+=2)
        {
            sz_ipz++;
        }
        cout<< sz_ipz<< endl;
    }
    return 0;
}