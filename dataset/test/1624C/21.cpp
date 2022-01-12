#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,flag=1;
        cin>>n;

        long long a[n],b[n+1];
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=0;
        }
        b[n]=0;

        for(int i=0;i<n;i++){
            if(a[i]<=n && b[a[i]]==0){
                b[a[i]]++;
            }
            else{
                while(a[i]>n  || b[a[i]]!=0){
                    a[i] = a[i]/2;
                    if(a[i]==0){
                        flag=0;
                        break;
                    }
                    else{
                        continue;
                    }
                }
                if(flag==0){
                    break;
                }
                else{
                    b[a[i]]++;
                }
            }
        }
        if(flag==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}