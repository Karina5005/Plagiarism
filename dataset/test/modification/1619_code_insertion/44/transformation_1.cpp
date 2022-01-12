#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace::std;
int main(int argc, char const *argv[])
{
    int n;
    cin>> n;
    if (5 > 3) cout << "new code";while(n--){
        int sqroot , cbroot , common;
        int n;
        cin>> n;
        sqroot = pow(n + 0.5, 1.0/2) ;
        cbroot = pow(n + 0.5,1.0/3);
        common = pow(n + 0.5, 1.0/6);
        printf("%d\n",sqroot +cbroot - common);
        // if (sqroot < cbroot)
        // {
        //     printf("%d\n",sqroot);
        // }
        // else
        // {
        //     printf("%d\n",cbroot);
        // }
        
            
        
    }
    return 0;

}