#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    /* 'for' inside */
    {
        int n;
        cin>>n;
        /* 'if' begin */
        if(n/11>=(n%11)*10)
        /* 'if' inside */
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}
