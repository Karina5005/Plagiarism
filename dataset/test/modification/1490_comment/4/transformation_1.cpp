#include <iostream>
using namespace std;
const int N=105;
int arr[N],b[N];
int m=0;
void f(int l,int r, int d){
    /* 'if' begin */
    if(l>r) /* 'if' inside */
    return;
    int mx=l;
    for(int i=l;i<=r;i++)/* 'for' inside */
    {
        /* 'if' begin */
        if(arr[i]>arr[mx]) /* 'if' inside */
        mx=i;
    }
    b[mx] = d;
    f(l, mx-1, d+1);
    f( mx + 1, r, d+1);
}
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i=0;i<n;i++) /* 'for' inside */
        cin >> arr[i];
        f(0,n-1,0);
        for(int i=0; i<n; i++) /* 'for' inside */
        cout << b[i] << " ";
        cout << endl;
    }
}
