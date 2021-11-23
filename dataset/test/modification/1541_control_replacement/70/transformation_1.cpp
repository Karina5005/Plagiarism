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
        {
        int i=1;
        while (i<=n) {
            cin>>a[i];
        	i++; 
        
        }}
        
        {
        int i=1;
        while (i<=n) {
            {
            int j=a[i]-i%a[i];
            while (j<=n) {
                if (i+j==1ll*a[i]*a[j]&&i<j) {
                    ans++;
                }
            	j=j+a[i]; 
            
            }}
        	i++; 
        
        }}
        cout<<ans<<endl;
        
        
        
    }
    return 0;
}

