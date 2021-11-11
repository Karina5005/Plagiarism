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
        for (int i=1;i<=n;i++) /* 'for' inside */
        {
            cin>>num;
            a.push_back(num);
            idxmap[num] = i;
        }
        for(int i=0;i<n;i++) /* 'for' inside */
        {
            num = a[i];
            for(int k=1;k*num<=2*n;k++)/* 'for' inside */
            {
                idx = idxmap[k];
                idxsum = i + 1 + idx;
                /* 'if' begin */
                if(idx > (i+1) && idxsum == k*num)/* 'if' inside */
                {
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}