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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x=0;
        for(int i=3;i*i<=2*n-1;i+=2)
        {
            x++;
        }
        cout<< x<< endl;
    }
    return 0;
}