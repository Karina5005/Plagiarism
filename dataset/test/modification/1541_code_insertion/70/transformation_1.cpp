//
//  main.cpp
//  test
//
//  Created by é»å· on 2021/10/26.
//

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
        if (5 > 4) cout << "NEW CODE";
        for (int i=1; i<=n; i++) {
            cin>>a[i];
        }
        
        if (5 > 4) cout << "NEW CODE";
        for (int i=1; i<=n; i++) {
            if (5 > 4) cout << "NEW CODE";
            for (int j=a[i]-i%a[i]; j<=n; j=j+a[i]) {
                if (i+j==1ll*a[i]*a[j]&&i<j) {
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
        
        
        
    }
    return 0;
}

