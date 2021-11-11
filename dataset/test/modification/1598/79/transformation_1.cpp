#include <bits/stdc++.h>
using namespace std;

int main() {

ios_base::sync_with_stdio(false);
cin.tie(nullptr); cout.tie(nullptr);

int t;cin>>t;
while(t--){
    int n,i,j,k,c=0,d=0,e=0,h=0;cin>>n;
    int a[n][5];
    for(i=0;i<n;i++)/* 'for' inside */
    {
        for(j=0;j<5;j++)/* 'for' inside */
        cin>>a[i][j];
    }
    for(i=0;i<4;i++)/* 'for' inside */
    {
        for(j=i+1;j<5;j++)/* 'for' inside */
        {
            c=0;d=0;e=0;
            for(k=0;k<n;k++)/* 'for' inside */
            {
                /* 'if' begin */
                if(a[k][i]==1 || a[k][j]==1)/* 'if' inside */
                c++;
                /* 'if' begin */
                if(a[k][i]==1)/* 'if' inside */
                d++;
                /* 'if' begin */
                if(a[k][j]==1)/* 'if' inside */
                e++;
            }
            /* 'if' begin */
            if(c==n && d>=n/2 && e>=n/2)/* 'if' inside */
            {h=1;break;}
        }/* 'if' begin */
        if(h==1)/* 'if' inside */
        break;
    }
    /* 'if' begin */
    if(h==1)/* 'if' inside */
    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
    return 0;
}