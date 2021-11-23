#include <bits/stdc++.h>
#define int long long 
#define pp pair<int,int>

using namespace std;
int n,m,a[450][450],f[450][450]={0};

int val(int x1,int y1,int x2,int y2) {
    return f[x2][y2]-f[x2][y1-1]-f[x1-1][y2]+f[x1-1][y1-1];
}

signed main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--) {
        cin>>n>>m;
        for (int i=1;i<=n;i++) {
            for (int j=1;j<=m;j++) {
                char x;
                cin>>x;
                if(x=='0') a[i][j]=0;
                else a[i][j]=1;
                f[i][j]=f[i][j-1]+f[i-1][j]-f[i-1][j-1]+a[i][j];
            }
        }
        int ans=(int)1e18;
        for (int i=1;i<=m;i++) {
            for (int j=i+3;j<=m;j++) {
                int min1=3-val(2,i,4,i)+3-val(2,j,4,j)+(j-i+1-2)-val(1,i+1,1,j-1)+val(2,i+1,4,j-1);
                for (int k=5;k<=n;k++) {
                    ans=min(ans,min1+(j-i+1-2)-val(k,i+1,k,j-1));
                    int sum1=3-val(k-2,i,k,i)+3-val(k-2,j,k,j)+(j-i+1-2)-val(k-3,i+1,k-3,j-1)+val(k-2,i+1,k,j-1);
                    min1=min(min1+1-val(k,i,k,i)+1-val(k,j,k,j)+val(k,i+1,k,j-1),sum1);
                    /*cout<<sum1<<endl;
                    cout<<sum2<<endl;
                    cout<<sum3<<endl;
                    cout<<sum4<<endl;
                    cout<<i<<" "<<j<<" "<<k<<" "<<sum1+sum2+sum3+sum4<<endl;*/
                }
            }
        }
        cout<<ans<<endl;
    }
}