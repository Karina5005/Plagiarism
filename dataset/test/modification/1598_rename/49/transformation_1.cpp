#include <bits/stdc++.h>
using namespace std;
unordered_map<char,int> cd_ter={{'(',-1},{'{',-2},{'[',-3},{')',1},{'}',2},{']',3}};

int main()
{
    int pl_ozd;
    cin>>pl_ozd;
    while(pl_ozd--) {
        int j_ai;
        cin>>j_ai;
        string ob,tai_av;
        cin>>ob>>tai_av;
        bool lo_a=1;
        for(int fr=0;fr<j_ai;fr++)
        {
            if(ob[fr]=='1'&& tai_av[fr]=='1')
            {
                lo_a=0;
                break;
            }
        }
        if(lo_a==0)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
    return 0;
}