#include <bits/stdc++.h>
#define ll  long long int
using namespace std;
const int yp_chu=2e5+3;
vector<int> b;
vector<int> l;

int main(){
    int wn;
    cin>>wn;
    ll s=0,sn=0;
    multiset<ll> ih;
    for(int dcd=0;dcd<wn;dcd++){
        int ax;
        cin>>ax;
        s+=ax;
        ih.insert(ax);
        if(s<0){
            auto bp=ih.begin();
            s-=*bp;
            // cout<<*it<<" ";
            ih.erase(bp);
        }
        
    }
    // cout<<endl;
    cout<<ih.size()<<endl;
    

}