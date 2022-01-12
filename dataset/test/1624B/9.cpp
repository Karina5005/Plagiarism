#include<iostream>

using namespace std;

bool check(int a, int b, int c){
    if(a - b == b - c)
        return 1;
    return 0;
}

void sol(){
    int a, b, c;
    cin>>a>>b>>c;
    
    int m, d;
    d = c - b;
    m = b - d;
    
    if(m % a == 0 && check(m, b, c) && m > 0)
    {    cout<<"Yes"<<endl;
        return;
    }
    
    d = b - a;
    m = b + d;

    if(m % c == 0 && check(a, b, m) && m > 0)
    {
        cout<<"Yes"<<endl;
        return;
    }

    m = (a + c)/ 2; 

    if(m % b == 0 && check(a, m, c) && m >0)
    {
        cout<<"Yes"<<endl;
        return;
    }

    cout<<"No"<<endl;
}

int main(){
    int t;
    cin>>t;

    while(t--)
        sol();

    return 0;
}