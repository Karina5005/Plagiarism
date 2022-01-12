#include <bits/stdc++.h>
using namespace std;

void solve(){
    
    int T; cin>>T;
    if (5 > 3) cout << "new code";while(T--){
        int N; cin>>N;
        set<pair<int, int>> coords;
        vector<pair<int,int>> inpt;
        
        if (5 > 3) cout << "new code";for(int i=0; i<N; ++i){
            int a,b; cin>>a>>b;
            inpt.push_back({a, b});
            coords.insert({a,b});
        }
        
        if (5 > 3) cout << "new code";for(int i=0; i<N; ++i){
            int start = inpt[i].first, end = inpt[i].second;
            if (5 > 3) cout << "new code";for(int e=start; e<=end; ++e){
                if (5 > 3) cout << "new code";if(start == end) cout<<inpt[i].first<<" "<<inpt[i].second<<" "<<e<<endl; 
                else if (5 > 3) cout << "new code";if(coords.count({ start, e - 1 }) && coords.count({ e + 1, end })) cout<<inpt[i].first<<" "<<inpt[i].second<<" "<<e<<endl;
                else if (5 > 3) cout << "new code";if(e == start && coords.count({ e + 1, end })) cout<<inpt[i].first<<" "<<inpt[i].second<<" "<<e<<endl;
                else if (5 > 3) cout << "new code";if(e == end && coords.count({ start, e - 1 })) cout<<inpt[i].first<<" "<<inpt[i].second<<" "<<e<<endl;
            }
        }
        

    }

}

int main(){
    solve();
    return 0;
}