//https://codeforces.com/problemset/problem/1548/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>is;
    int ef,ang_cvn;cin>>ef>>ang_cvn;
    int lc=ef;
    for(int v=0;v<ang_cvn;v++)
    {
        int ihd,rc;cin>>ihd>>rc;
        if(is[min(ihd,rc)]==0) 
        lc--;
        is[min(ihd,rc)]++;

    }
    int c;cin>>c;
    while(c--)
    {
       // cout<<"yes"<<endl;
        int msb;cin>>msb;
        if(msb==1)
        {
            int yhf,u_tni;cin>>yhf>>u_tni;
            if(is[min(yhf,u_tni)]==0) 
            lc--;
            is[min(yhf,u_tni)]++;
        }
        else if(msb==2)
        {
            int nk,utx;cin>>nk>>utx;
            if(is[min(nk,utx)]==1)
            lc++;
            is[min(nk,utx)]--;
        }
        else
        cout<<lc<<endl;
    }
    

}