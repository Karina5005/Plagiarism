#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int rul_bd;
    cin>>rul_bd;
    int be_b;
    int zo=0;
    vector <int> mr;
    for(int zfl=0;zfl<rul_bd;zfl++){
        cin>>be_b;
        int sx[be_b];
        zo=0;
        for(int c=0;c<be_b;c++){
            cin>>sx[c];
            if(c!=0 and sx[c]==sx[c-1]){
                sx[c]++;
                zo++;
            }
            else if(c!=0 and sx[c]>sx[c-1]){
                zo++;
            }
            else if(c!=0 and sx[c]<sx[c-1]){
                sx[c]++;
            }
            else{
                zo++;
            }
        }
        mr.push_back(zo);
    }
    for(int vdj=0;vdj<mr.size();vdj++){
        cout<<mr[vdj]<<"  ";
    }
}

/* Sat Dec 25 2021 17:34:01 GMT+0000 (Coordinated Universal Time) */
