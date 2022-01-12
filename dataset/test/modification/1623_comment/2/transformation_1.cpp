#include <bits/stdc++.h>
using namespace std;

void solve(){
    
    int T; cin>>T;
    while(T--){
        int N; cin>>N;
        set<pair<int, int>> coords;
        vector<pair<int,int>> inpt;
        
        for(int i=0; i<N; ++i)/* 'for' inside */
        {
            int a,b; cin>>a>>b;
            inpt.push_back({a, b});
            coords.insert({a,b});
        }
        
        for(int i=0; i<N; ++i)/* 'for' inside */
        {
            int start = inpt[i].first, end = inpt[i].second;
            for(int e=start; e<=end; ++e)/* 'for' inside */
            {
                /* 'if' begin */
                if(start == end) /* 'if' inside */
                cout<<inpt[i].first<<" "<<inpt[i].second<<" "<<e<<endl; 
                else /* 'if' begin */
                if(coords.count({ start, e - 1 }) && coords.count({ e + 1, end })) /* 'if' inside */
                cout<<inpt[i].first<<" "<<inpt[i].second<<" "<<e<<endl;
                else /* 'if' begin */
                if(e == start && coords.count({ e + 1, end })) /* 'if' inside */
                cout<<inpt[i].first<<" "<<inpt[i].second<<" "<<e<<endl;
                else /* 'if' begin */
                if(e == end && coords.count({ start, e - 1 })) /* 'if' inside */
                cout<<inpt[i].first<<" "<<inpt[i].second<<" "<<e<<endl;
            }
        }
        

    }

}

int main(){
    solve();
    return 0;
}