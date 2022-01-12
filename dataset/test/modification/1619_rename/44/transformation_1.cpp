#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace::std;
int main(int fl, char const *pnu_al[])
{
    int xo;
    cin>> xo;
    while(xo--){
        int nff , t_tay , ilx;
        int ire_y;
        cin>> ire_y;
        nff = pow(ire_y + 0.5, 1.0/2) ;
        t_tay = pow(ire_y + 0.5,1.0/3);
        ilx = pow(ire_y + 0.5, 1.0/6);
        printf("%d\n",nff +t_tay - ilx);
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