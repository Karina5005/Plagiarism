#include <iostream>
using namespace std;
 

int main()
{

   
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    /* 'for' inside */
    {
        long long int r;
        long long int b;
        long long int d;
        long long int x;
        long long int y;
        cin>>r>>b>>d;
        x = min(r,b);
        y = max(r,b);
        /* 'if' begin */
        if(abs(r-b) <= min(r,b)*d)/* 'if' inside */
        {
cout<<"YES"<<endl;
}
else{
cout<<"NO"<<endl;
}
        
        
    }
}