#include <iomanip>
#include <iostream>
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
    {
    int u=0;
    for ( ; u<t; ) 
{
        cin>>b;
        int a[b];
        h=0;
        {
        int i=0;
        for ( ; i<b; ) 
{
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
        	i++; 
        
        }}
        o.push_back(h);
    	u++; 
    
    }}
    {
    int i=0;
    for ( ; i<o.size(); ) 
{
        cout<<o[i]<<"  ";
    	i++; 
    
    }}
}

/* Sat Dec 25 2021 17:34:01 GMT+0000 (Coordinated Universal Time) */
