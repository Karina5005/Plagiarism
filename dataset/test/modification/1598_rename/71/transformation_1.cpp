#include<iostream>
#include<algorithm>
using namespace std;
int it[200005];
int main()
{
    int mmd;
    ios::sync_with_stdio(false);
    while(cin>>mmd)
    {
        while(mmd--)
        {
            int ue_mfc;
            cin>>ue_mfc;
            int kp;
            double is=0;
            for(kp=1;kp<=ue_mfc;kp++)
            {
                cin>>it[kp];
                is+=it[kp];
            }
            double ef=(2*is)/(ue_mfc);
            it[ue_mfc+1]=0x3f3f3f3f;
            //cout<<judge<<endl;
            sort(it+1,it+1+ue_mfc);
            long long int ang_cvn=0;
            for(kp=1;kp<=ue_mfc;kp++)
            {
                ang_cvn+=upper_bound(it+kp+1,it+2+ue_mfc,(double)(ef-it[kp]))-lower_bound(it+kp+1,it+2+ue_mfc,double(ef-it[kp]));
                //cout<<"   "<<ans<<endl;
            }
            cout<<ang_cvn<<endl;
        }
    }
}
  					 	 	  	 	  	   				 		 	