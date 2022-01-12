#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T,A,B,C;
    cin>>T;
    while(T--)
    {
        cin>>A>>B>>C;
        B<<=1;
        if((A+C)%B && ((B-C)%A || B<=C) && ((B-A)%C || B<=A))cout<<"NO\n";
        else cout<<"YES\n";
    }
}