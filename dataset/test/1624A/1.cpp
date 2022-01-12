#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)      
    {
        int n;
        cin >>n;
        vector<int>a(n);
        for(auto &it:a)
            cin>>it;
        sort(a.begin(),a.end());
        cout<<a.back()-a.front()<<endl;
    }
    return 0;
}