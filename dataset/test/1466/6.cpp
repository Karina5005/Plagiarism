#include<bits/stdc++.h>
using namespace std;
int ne=1e9+7;
static const auto fast = []()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); return 0;
} ();

void solve()
{
   int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a.begin(),a.end());
    unordered_set<int> s;
        for(int i=0;i<n;i++)
             for(int j=i+1;j<n;j++)
                 s.insert(a[j]-a[i]);
    cout<<s.size()<<endl;
}
 
 
int main()
{
    int n;
   cin>>n;
    
    while(n--)
        solve();
    
}