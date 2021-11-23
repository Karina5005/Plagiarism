#include<iostream>
#include<algorithm>
using namespace std;
int h[1005][1005];
int z;
bool fzw_tsw(int hz,int f_u)
{
    int ql;
    int o_k=0,trb=0,tvx=0;
    for(ql=1;ql<=z;ql++)
    {
        if(h[ql][hz]==1&&h[ql][f_u]==0)
        {
            o_k+=1;
        }
        else if(h[ql][hz]==0&&h[ql][f_u]==1)
        {
            trb+=1;
        }
        else if(h[ql][hz]==1&&h[ql][f_u]==1)
        {
            tvx+=1;
        }
    }
    if(o_k+trb+tvx==z&&o_k+tvx>=z/2&&trb+tvx>=z/2)
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
    int dit;
    while(cin>>dit)
    while(dit--)
    {
        int oi,ro_jd;
        cin>>z;
        for(oi=1;oi<=z;oi++)
        {
            for(ro_jd=1;ro_jd<=5;ro_jd++)
            {
                cin>>h[oi][ro_jd];
            }
        }
        int pop=0;
        for(oi=1;oi<=5;oi++)
        {
            for(ro_jd=oi+1;ro_jd<=5;ro_jd++)
            {
                if(fzw_tsw(oi,ro_jd))
                {
                    pop=1;
                    break;
                }
               
            }
            if(pop)
            break;
        }
        if(pop)
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
}