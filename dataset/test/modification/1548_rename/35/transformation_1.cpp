#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define inf 1e18
#define ff first
#define ss second
#define mod 1000000007




void tfc_al(){

    int xc_iyb,cj_gqd;
    cin>>xc_iyb>>cj_gqd;

    //creatting an adjacency list
    vector<set<int>> fm(xc_iyb+1);
    for(int jm_ol=1;jm_ol<=cj_gqd;jm_ol++){

        int m_ajv,pp;
        cin>>m_ajv>>pp;
        fm[m_ajv].insert(pp);
        fm[pp].insert(m_ajv);
    }

    //now we need to count the no of good nodes 
    vector<bool> lh(xc_iyb+1);
    int s=0;
    for(int g=1;g<=xc_iyb;g++){
        if(fm[g].lower_bound(g)==fm[g].end()){
            s++;
            lh[g]=true;
        }
    }

    //no of queries
    int fr;
    cin>>fr;
    while(fr--){
        int rp_eme;
        cin>>rp_eme;
        if(rp_eme==3){
            cout<<s<<endl;
        }
        else{
            int kkh_gbu,r;
            cin>>kkh_gbu>>r;
            if(lh[kkh_gbu])
                s--;
            if(lh[r])
                s--;

            if(rp_eme==1){
                fm[kkh_gbu].insert(r);
                fm[r].insert(kkh_gbu);
            }
            else{
                fm[kkh_gbu].erase(r);
                fm[r].erase(kkh_gbu);
            }

            if(fm[kkh_gbu].lower_bound(kkh_gbu)!=fm[kkh_gbu].end())
                lh[kkh_gbu]=false;
            else 
                lh[kkh_gbu]=true;

            if(fm[r].lower_bound(r)!=fm[r].end())
                lh[r]=false;
            else 
                lh[r]=true;


            if(lh[kkh_gbu])
                s++;
            if(lh[r])
                s++;
        }
    }

    return;
}  


int main()
{   
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int vq_rj=1;
    while(vq_rj--)
    {
        tfc_al();
    }
    return 0;

}