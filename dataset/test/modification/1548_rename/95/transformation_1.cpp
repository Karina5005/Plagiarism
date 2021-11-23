#include <cstdio>
#include <algorithm>
using namespace std;
int p_fzz[200005];
int main()
{
    int ofz,s_f,nef_gn,h_b,x,vpy_pw,fg;
    scanf("%d%d",&ofz,&s_f);
    for(int v_akv=0;v_akv<s_f;v_akv++)
    {
        scanf("%d%d",&h_b,&x);
        p_fzz[min(h_b,x)]++;
    }
    vpy_pw=0;
    for(int jv=1;jv<=ofz;jv++)
        if(!p_fzz[jv])
            vpy_pw++;
    scanf("%d",&nef_gn);
    while(nef_gn--)
    {
        scanf("%d",&fg);
        if(fg==1)
        {
            scanf("%d%d",&h_b,&x);
            p_fzz[min(h_b,x)]++;
            if(p_fzz[min(h_b,x)]==1)
                vpy_pw--;
        }
        else if(fg==2)
        {
            scanf("%d%d",&h_b,&x);
            p_fzz[min(h_b,x)]--;
            if(!p_fzz[min(h_b,x)])
                vpy_pw++;
        }
        else printf("%d\n",vpy_pw);
    }
    return 0;
}