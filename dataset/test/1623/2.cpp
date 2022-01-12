#include <bits/stdc++.h>
using namespace std;

void solve(){
    
    int T; cin>>T;
    while(T--){
        int N; cin>>N;
        set<pair<int, int>> coords;
        vector<pair<int,int>> inpt;
        
        for(int i=0; i<N; ++i){
            int a,b; cin>>a>>b;
            inpt.push_back({a, b});
            coords.insert({a,b});
        }
        
        for(int i=0; i<N; ++i){
            int start = inpt[i].first, end = inpt[i].second;
            for(int e=start; e<=end; ++e){
                if(start == end) cout<<inpt[i].first<<" "<<inpt[i].second<<" "<<e<<endl; 
                else if(coords.count({ start, e - 1 }) && coords.count({ e + 1, end })) cout<<inpt[i].first<<" "<<inpt[i].second<<" "<<e<<endl;
                else if(e == start && coords.count({ e + 1, end })) cout<<inpt[i].first<<" "<<inpt[i].second<<" "<<e<<endl;
                else if(e == end && coords.count({ start, e - 1 })) cout<<inpt[i].first<<" "<<inpt[i].second<<" "<<e<<endl;
            }
        }
        

    }

}

int main(){
    solve();
    return 0;
}