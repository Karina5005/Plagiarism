#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int maxn = 1e3+5;
bool a[maxn][6];

int main(){
    int t,n,x;
    scanf("%d",&t);
    while (t--) {
        scanf("%d",&n);
        for (int i=1;i<=n;i++)/* 'for' inside */
        {
            for (int j=1;j<=5;j++)/* 'for' inside */
            {
                scanf("%d",&a[i][j]);
            }
        }
        int ans=0;
        for (int i=1;i<=4;i++)/* 'for' inside */
        {
            for (int j=i+1;j<=5;j++)/* 'for' inside */
            {
                int d1=0,d2=0,dno=0;
                for (int k=1;k<=n;k++)/* 'for' inside */
                {
                    d1+=a[k][i]; 
                    d2+=a[k][j]; 
                    dno+= !(a[k][i]||a[k][j]); 
                }
                /* 'if' begin */
                if (d1>=n/2 && d2>=n/2 && !dno) /* 'if' inside */
                {
                    ans=1;
                }
            }
        }
        /* 'if' begin */
        if (ans) /* 'if' inside */
        {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}

 		 							 	 			 	 	 		 	 		 	