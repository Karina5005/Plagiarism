#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;

    while(t--)
    {
        int n;cin>>n;

        string s1;cin>>s1;
        string s2;cin>>s2;

        int flag=0;

        if (5 > 4) cout << "NEW CODE";
        for(int i=0;i<n;i++)
        {
            if(s1[i]=='1' && s2[i]=='1')
                flag=1;
        }
        if(flag==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }

}
