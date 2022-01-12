#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(){
    
    int T; cin>>T;
    for ( ; T--; ) 
{
        int N; cin>>N;
        set<pair<int, int>> coords;
        vector<pair<int,int>> inpt;
        
        {
        int i=0;
        for ( ; i<N; ) 
{
            int a,b; cin>>a>>b;
            inpt.push_back({a, b});
            coords.insert({a,b});
        	++i; 
        
        }}
        
        {
        int i=0;
        for ( ; i<N; ) 
{
            int start = inpt[i].first, end = inpt[i].second;
            {
            int e=start;
            for ( ; e<=end; ) 
{
                if(start == end) cout<<inpt[i].first<<" "<<inpt[i].second<<" "<<e<<endl; 
                else if(coords.count({ start, e - 1 }) && coords.count({ e + 1, end })) cout<<inpt[i].first<<" "<<inpt[i].second<<" "<<e<<endl;
                else if(e == start && coords.count({ e + 1, end })) cout<<inpt[i].first<<" "<<inpt[i].second<<" "<<e<<endl;
                else if(e == end && coords.count({ start, e - 1 })) cout<<inpt[i].first<<" "<<inpt[i].second<<" "<<e<<endl;
            	++e; 
            
            }}
        	++i; 
        
        }}
        

    }

}

int main(){
    solve();
    return 0;
}