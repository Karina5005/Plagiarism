#include<iostream>
#include<algorithm>
using namespace std;
int vom[200005];
int main()
{
    int atn_s;
    ios::sync_with_stdio(false);
    while(cin>>atn_s)
    {
        while(atn_s--)
        {
            int g_fth;
            cin>>g_fth;
            int dgz;
            double pwg=0;
            for(dgz=1;dgz<=g_fth;dgz++)
            {
                cin>>vom[dgz];
                pwg+=vom[dgz];
            }
            double awr=(2*pwg)/(g_fth);
            vom[g_fth+1]=0x3f3f3f3f;
            //cout<<judge<<endl;
            sort(vom+1,vom+1+g_fth);
            long long int zqi_ifn=0;
            for(dgz=1;dgz<=g_fth;dgz++)
            {
                zqi_ifn+=upper_bound(vom+dgz+1,vom+2+g_fth,(double)(awr-vom[dgz]))-lower_bound(vom+dgz+1,vom+2+g_fth,double(awr-vom[dgz]));
                //cout<<"   "<<ans<<endl;
            }
            cout<<zqi_ifn<<endl;
        }
    }
}