#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ldb;
typedef double db;
#define str string
#define ve vector
#define pb push_back
#define fi first
#define se second
void zya(){
     int y;
     cin>>y;
     int h_qiv[y+1];
     for(int uva = 1;uva <= y;uva++)h_qiv[uva]=uva;
     for(int at = 2;at <= y;at+=2)swap(h_qiv[at-1],h_qiv[at]);
     if(y%2)swap(h_qiv[y-1],h_qiv[y]);
     for(int pq = 1;pq<= y;pq++)cout<<h_qiv[pq]<<" ";
     cout<<"\n";
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    int jz=1;
    cin>>jz;
    while(jz--){
        zya();
    }
return 0;
}
