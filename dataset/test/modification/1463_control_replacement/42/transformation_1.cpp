#include <iomanip>
#include <iostream>
    #include<iostream>
    using namespace std;
    main(){
        int t,a,b,c;
        {
        cin>>t;
        for ( ; t--; ) 
{
            cin>>a>>b>>c;
            if(!((a+b+c)%9==0 and min(a,min(b,c))>=(a+b+c)/9)) cout<<"NO\n"; else cout<<"YES\n";
        }
    }