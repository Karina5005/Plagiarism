#include<bits/stdc++.h>
using namespace std;
 
const int maxn=6007;
 
int n;
int x[maxn],y[maxn];
vector<int> perm;
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    cin>>n;
    for (int i=0;i<n;++i) /* 'for' inside */
    cin>>x[i]>>y[i];
    for (int i=0;i<n;++i)/* 'for' inside */
    {
        perm.push_back(i);
        for (int j=i;j>1;--j)/* 'for' inside */
        {
            /* 'if' begin */
            if (1ll*(x[perm[j]]-x[perm[j-1]])*(x[perm[j-1]]-x[perm[j-2]])+1ll*(y[perm[j]]-y[perm[j-1]])*(y[perm[j-1]]-y[perm[j-2]])>=0)/* 'if' inside */
            {
                swap(perm[j],perm[j-1]);
            }
            else{
                break;
            }
        }
    }
    for (auto c:perm) cout<<c+1<<" ";
       
}