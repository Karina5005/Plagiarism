#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n; cin>>n;
    int k=0;
    int a=1, cnt=0;
    for ( ; ((a*a+1)/2)<=n; ) 
{cnt++; a+=2;}
    cout<<--cnt<<endl;

}


int main(){
    int t; cin>>t;
    for ( ; t--; ) 
{solve(); cout<<"\n";}
    return 0;
}


