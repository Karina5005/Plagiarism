

#include <iostream>
#include <vector>
#include <string.h>
using namespace std;
int a[100001]={0};


int main(int argc, const char * argv[]) {
    int t;
    cin>>t;
    while (t--) {
        long long int ans=0;
        int n;
        cin>>n;
        for (int i=1; i<=n; i++) /* 'for' inside */
        {
            cin>>a[i];
        }
        
        for (int i=1; i<=n; i++) /* 'for' inside */
        {
            for (int j=a[i]-i%a[i]; j<=n; j=j+a[i]) /* 'for' inside */
            {
                /* 'if' begin */
                if (i+j==1ll*a[i]*a[j]&&i<j) /* 'if' inside */
                {
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
        
        
        
    }
    return 0;
}

