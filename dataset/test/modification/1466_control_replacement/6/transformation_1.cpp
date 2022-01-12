#include <iomanip>
#include <iostream>
#include<bit
int ne=1e9+7;
static const auto fast = 

void solve()
{
   int n;
    cin>>n;
    vector<int> a(n);
    {
    int i=0;
    while (i<n) {
        cin>>a[i];
        i++; 
        
        }}
    sort(a.begin(),a.end());
    unordered_set<int> s;
        {
        int i=0;
        while (i<n) {
             {
             int j=i+1;
             while (j<n) {
                 s.insert(a[j]-a[i]);}
                 j++; 
                 
                 }
                 i++; 
                 
                 }}
    cout<<s.size()<<endl;
}
 
 
int main()
{
    int n;
   cin>>n;
    
    while(n--)
        solve();
    
}