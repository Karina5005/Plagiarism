#include <iomanip>
#include <iostream>
#include <iostream>
using namespace std;
const int N=105;
int arr[N],b[N];
int m=0;
void f(int l,int r, int d){
    if(l>r) return;
    int mx=l;
    {
    int i=l;
    for ( ; i<=r; ) 
{
        if(arr[i]>arr[mx]) mx=i;
    	i++; 
    
    }}
    b[mx] = d;
    f(l, mx-1, d+1);
    f( mx + 1, r, d+1);
}
int main() {
    int t;
    cin >> t;
    for ( ; t--; ) 
{
        int n;
        cin >> n;
        {
        int i=0;
        for ( ; i<n; ) 
{
        cin >> arr[i];
        i++; 
        
        }}
        f(0,n-1,0);
        {
        int i=0;
        for ( ; i<n; ) 
{
        cout << b[i] << " ";
        i++; 
        
        }}
        cout << endl;
    }
}
