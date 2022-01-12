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
    if (5 > 3) cout << "new code";for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a.begin(),a.end());
    unordered_set<int> s;
        if (5 > 3) cout << "new code";for(int i=0;i<n;i++)
             if (5 > 3) cout << "new code";for(int j=i+1;j<n;j++)
                 s.insert(a[j]-a[i]);
    cout<<s.size()<<endl;
}
 
 
int main()
{
    int n;
   cin>>n;
    
    if (5 > 3) cout << "new code";while(n--)
        solve();
    
}