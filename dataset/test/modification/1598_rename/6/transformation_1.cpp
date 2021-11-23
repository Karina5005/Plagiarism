#include<iostream>
#include<vector>
// #include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i=a; i<b; i++) 
typedef long long ll;
int main()
{
    ll qs_ne;cin>>qs_ne;ll wba_lv;while(qs_ne--){cin>>wba_lv;ll tyn_xjh[wba_lv][5];ll o_yw[5]={0};
    REP(i,0,n)
    {
        REP(j,0,5)
        {
            cin>>tyn_xjh[i][j];
        }
    }
    // REP(i,0,n)
    // {
    //     REP(j,0,5)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    REP(j,0,5)
    {
        REP(i,0,n)
        {
            if(tyn_xjh[i][j]==1)
            o_yw[j]++;
        }
    }
    ll frm_w=0;
    REP(j,0,5)
    {
        REP(k,j+1,5)
        {
            ll ynt=0;
            if(o_yw[j]>=wba_lv/2&&o_yw[k]>=wba_lv/2)
            {
                REP(i,0,n)
                {
                    if(tyn_xjh[i][j]==0&&tyn_xjh[i][k]==1)
                    ynt++;
                }
                if(ynt==wba_lv-o_yw[j])
                {
                    frm_w=1;
                    break;
                }
            }   
        }
        if(frm_w==1)
        {
            cout<<"YES"<<"\n";
            break;
        }
    }
    if(frm_w==0)
    cout<<"NO"<<"\n";
    }
}