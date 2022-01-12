#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<string>
#include<queue>
#include<algorithm>
#include<cmath>
#define int long long
#define endl '\n'
#define speed ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
signed main()
{
    speed;
    int t;cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        char fij[n+1][m+1];
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            cin>>fij[i][j];
        }
        int pre[n+1][m+1];
        for(int i=0;i<=n;i++)
        for(int j=0;j<=m;j++)
        pre[i][j]=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(fij[i][j]=='*')pre[i][j]=pre[i][j-1]+1;
                else pre[i][j]=pre[i][j-1];
            }
        }
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(fij[i][j]=='*')
                {
                    ans++;
                    int w=1;
                    for(int k=i+1;k<=n;k++)
                    {
                        if(pre[k][j+w]-pre[k][j-w-1]==2*w+1)ans++;
                        else break;
                        w++;
                    }
                }

            }
        }
        cout<<ans<<endl;
    }
    return 0;
}


















// opencv-python==4.2.0.34
// pillow==6.2.1
// tensorflow==2.6.0
// keras==2.3.0
// scikit-learn==0.22.1
// pandas==0.25.3
// mtcnn==0.1.0
// h5py==2.8.0
// openpyxl
// azure-storage-blob==12.8


// git push -u origin d/nandi/tf_2.0