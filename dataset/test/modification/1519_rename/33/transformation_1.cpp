#include <iostream>
using namespace std;
 

int main()
{

   
    int zd_ckh;
    cin>>zd_ckh;
    
    for(int tvq=0;tvq<zd_ckh;tvq++)
    {
        long long int d_mk;
        long long int e;
        long long int t_rf;
        long long int dor_tkw;
        long long int z_w;
        cin>>d_mk>>e>>t_rf;
        dor_tkw = min(d_mk,e);
        z_w = max(d_mk,e);
        if(abs(d_mk-e) <= min(d_mk,e)*t_rf){
cout<<"YES"<<endl;
}
else{
cout<<"NO"<<endl;
}
        
        
    }
}