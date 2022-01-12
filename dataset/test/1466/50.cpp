#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int b;
    int h=0;
    vector <int> o;
    for(int u=0;u<t;u++){
        cin>>b;
        int a[b];
        h=0;
        for(int i=0;i<b;i++){
            cin>>a[i];
            if(i!=0 and a[i]==a[i-1]){
                a[i]++;
                h++;
            }
            else if(i!=0 and a[i]>a[i-1]){
                h++;
            }
            else if(i!=0 and a[i]<a[i-1]){
                a[i]++;
            }
            else{
                h++;
            }
        }
        o.push_back(h);
    }
    for(int i=0;i<o.size();i++){
        cout<<o[i]<<"  ";
    }
}

/* Sat Dec 25 2021 17:34:01 GMT+0000 (Coordinated Universal Time) */
