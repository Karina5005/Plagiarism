#include <iostream>
using namespace std;
 

int main()
{

   
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        long long int r;
        long long int b;
        long long int d;
        long long int x;
        long long int y;
        cin>>r>>b>>d;
        x = min(r,b);
        y = max(r,b);
        if(abs(r-b) <= min(r,b)*d){
cout<<"YES"<<endl;
}
else{
cout<<"NO"<<endl;
}
        
        
    }
}