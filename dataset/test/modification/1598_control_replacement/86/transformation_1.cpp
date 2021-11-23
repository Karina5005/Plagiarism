#include <iomanip>
#include <iostream>
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int maxn = 1e3+5;
bool a[maxn][6];

int main(){
    int t,n,x;
    scanf("%d",&t);
    for ( ; t--; ) 
{
        scanf("%d",&n);
        {
        int i=1;
        for ( ; i<=n; ) 
{
            {
            int j=1;
            for ( ; j<=5; ) 
{
                scanf("%d",&a[i][j]);
            	j++; 
            
            }}
        	i++; 
        
        }}
        int ans=0;
        {
        int i=1;
        for ( ; i<=4; ) 
{
            {
            int j=i+1;
            for ( ; j<=5; ) 
{
                int d1=0,d2=0,dno=0;
                {
                int k=1;
                for ( ; k<=n; ) 
{
                    d1+=a[k][i]; // ç¬¬iå¤©è½å»ç
                    d2+=a[k][j]; // ç¬¬jå¤©è½å»ç
                    dno+= !(a[k][i]||a[k][j]); // ä¸¤å¤©é½ä¸è½å»ç
                	k++; 
                
                }}
                if (d1>=n/2 && d2>=n/2 && !dno) {
                    ans=1;
                }
            	j++; 
            
            }}
        	i++; 
        
        }}
        if (!(ans)) {
            std::cout << "NO\n";
        }
        else {
            std::cout << "YES\n";
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
 		 							 	 			 	 	 		 	 		 	