#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
#define ll  long long int
using namespace std;
const int N=2e5+3;
vector<int> p;
vector<int> ne;

int main(){
    int n;
    cin>>n;
    ll s=0,sn=0;
    multiset<ll> s1;
    {
    int i=0;
    for ( ; i<n; ) 
{
        int x;
        cin>>x;
        s+=x;
        s1.insert(x);
        if(s<0){
            auto it=s1.begin();
            s-=*it;
            // cout<<*it<<" ";
            s1.erase(it);
        }
        
    	i++; 
    
    }}
    // cout<<endl;
    cout<<s1.size()<<endl;
    

}