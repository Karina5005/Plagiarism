#include <bits/stdc++.h>
using namespace std;
unordered_map<char,int> auo_dy={{'(',-1},{'{',-2},{'[',-3},{')',1},{'}',2},{']',3}};

int main()
{
    int g;
    cin>>g;
    while(g--) {
        int h;
        cin>>h;
        string gaz_qdk,fl;
        cin>>gaz_qdk>>fl;
        bool pnu_al=1;
        for(int xo=0;xo<h;xo++)
        {
            if(gaz_qdk[xo]=='1'&& fl[xo]=='1')
            {
                pnu_al=0;
                break;
            }
        }
        if(pnu_al==0)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
    return 0;
}