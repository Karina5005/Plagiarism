#include<iostream>
#include<algorithm>
using namespace std;
int nbc[1005][1005];
int u_tjs;
bool xax_m(int k,int weg)
{
    int bb;
    int emj=0,aj_wji=0,ev_e=0;
    for(bb=1;bb<=u_tjs;bb++)
    {
        if(nbc[bb][k]==1&&nbc[bb][weg]==0)
        {
            emj+=1;
        }
        else if(nbc[bb][k]==0&&nbc[bb][weg]==1)
        {
            aj_wji+=1;
        }
        else if(nbc[bb][k]==1&&nbc[bb][weg]==1)
        {
            ev_e+=1;
        }
    }
    if(emj+aj_wji+ev_e==u_tjs&&emj+ev_e>=u_tjs/2&&aj_wji+ev_e>=u_tjs/2)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}
int main()
{
    int gl;
    while(cin>>gl)
    while(gl--)
    {
        int lw_x,s_fj;
        cin>>u_tjs;
        for(lw_x=1;lw_x<=u_tjs;lw_x++)
        {
            for(s_fj=1;s_fj<=5;s_fj++)
            {
                cin>>nbc[lw_x][s_fj];
            }
        }
        int i=0;
        for(lw_x=1;lw_x<=5;lw_x++)
        {
            for(s_fj=lw_x+1;s_fj<=5;s_fj++)
            {
                if(xax_m(lw_x,s_fj))
                {
                    i=1;
                    break;
                }
               
            }
            if(i)
            break;
        }
        if(i)
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
}
		  	  		  		 		 	  	  		 		 	