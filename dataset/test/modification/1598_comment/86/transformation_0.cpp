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
        for (int i=1;i<=n;i++){
            for (int j=1;j<=5;j++){
                scanf("%d",&a[i][j]);
            }
        }
        int ans=0;
        for (int i=1;i<=4;i++){
            for (int j=i+1;j<=5;j++){
                int d1=0,d2=0,dno=0;
                for (int k=1;k<=n;k++){
                    d1+=a[k][i]; // ç¬¬iå¤©è½å»ç
                    d2+=a[k][j]; // ç¬¬jå¤©è½å»ç
                    dno+= !(a[k][i]||a[k][j]); // ä¸¤å¤©é½ä¸è½å»ç
                }
                if (d1>=n/2 && d2>=n/2 && !dno) {
                    ans=1;
                }
            }
        }
        if (ans) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}
/*
4
3
1 0 0 0 1
1 0 0 0 1
1 0 0 0 1
2   
1 0 0 0 1
1 0 0 0 1
2
1 0 0 0 0
0 1 0 0 0
4 å è¿ä¸ªæ ·ä¾
0 0 1 0 0
0 1 0 0 0
0 1 0 1 0
0 1 0 1 0
*/
 		 							 	 			 	 	 		 	 		 	