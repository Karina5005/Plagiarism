#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--) {
        int n, num, idx, idxsum;
        vector<int> a;
        map<int, int> idxmap;
        cin>>n;
        long long ans = 0;
        {
        int i=1;
        while (i<=n) {
            cin>>num;
            a.push_back(num);
            idxmap[num] = i;
        	i++; 
        
        }}
        {
        int i=0;
        while (i<n) {
            num = a[i];
            {
            int k=1;
            while (k*num<=2*n) {
                idx = idxmap[k];
                idxsum = i + 1 + idx;
                if(idx > (i+1) && idxsum == k*num){
                    ans++;
                }
            	k++; 
            
            }}
        	i++; 
        
        }}
        cout<<ans<<endl;
    }
    return 0;
}