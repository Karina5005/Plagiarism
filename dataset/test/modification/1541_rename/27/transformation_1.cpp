#include <bits/stdc++.h>
#define ll long long

using namespace std;

void q()
{
   int wx_xgr;
   cin>>wx_xgr;
   int x_bt[wx_xgr];
   for(int w_luy=0;w_luy<wx_xgr;w_luy++)
   {
       x_bt[w_luy]=w_luy+1;
   }
   if(wx_xgr%2==0)
   {
       for(int mx=0;mx<wx_xgr-1;)
       {
           swap(x_bt[mx],x_bt[mx+1]);
           cout<<x_bt[mx]<<" "<<x_bt[mx+1]<<" ";
           mx=mx+2;
       }
       cout<<endl;
   }
   else
   {
       cout<<3<<" "<<1<<" "<<2<<" ";
       for(int py=3;py<wx_xgr;)
       {
            swap(x_bt[py],x_bt[py+1]);
           cout<<x_bt[py]<<" "<<x_bt[py+1]<<" ";
           py=py+2;
       }
       cout<<endl;
   }
    
}
int main()
{
    int zqz;
    cin>>zqz;
    while(zqz--)
        q();
    return 0;
}

