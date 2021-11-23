#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int c;
    cin>>c;
    while(c--)
    {
        int rl_it;
        cin>>rl_it;
        char t[2][rl_it];
        for(int yn_so=0;yn_so<2;yn_so++)
        {
            for(int h=0;h<rl_it;h++)
            {
                cin>>t[yn_so][h];
            }
        }
        int lxr_t=0,kxb=0,fyu=0;
        while(lxr_t!=1 || kxb!=rl_it-1)
        {
            if(lxr_t==0 && kxb<rl_it-1)
            {
                if(t[lxr_t][kxb+1]=='1' && t[lxr_t+1][kxb+1]=='1' && t[lxr_t+1][kxb]=='1')
                {
                    cout<<"NO\n";
                    fyu=1;
                    break;
                }
                else
                {
                    if(t[lxr_t+1][kxb]=='0')
                    {
                        lxr_t++;
                    }
                    else if(t[lxr_t+1][kxb+1]=='0')
                    {
                        lxr_t++;
                        kxb++;
                    }
                    else
                    {
                        kxb++;
                    }
                }
            }
            else if(lxr_t==1 && kxb<rl_it-1)
            {
                if(t[lxr_t][kxb+1]=='1' && t[lxr_t-1][kxb+1]=='1' /*&& arr[x-1][y]=='1'*/)
                {
                    cout<<"NO\n";
                    fyu=1;
                    break;
                }
                else
                {
                    // if(arr[x-1][y]=='0')
                    // {
                    //     x--;
                    // }
                    if(t[lxr_t-1][kxb+1]=='0')
                    {
                        lxr_t--;
                        kxb++;
                    }
                    else if(t[lxr_t][kxb+1]=='0')
                    {
                        kxb++;
                    }
                }
            }
            else
            {
                lxr_t++;
            }
        }
        if(fyu==0)
        {
            cout<<"YES\n";
        }
    }
    return 0;
}