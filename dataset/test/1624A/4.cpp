#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int max, min;
    while(t--)
    {
        int n;
        cin>>n;
        deque <int> a(n);
        for(int i=0; i<n; i++)
            cin>>a[i];
        sort(a.begin(), a.end());
        cout<<a.back()-a.front()<<"\n";
    }
    return 0;
}