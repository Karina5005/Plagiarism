#include<iostream>
#include<string>
using namespace std ;

void solve(){
    string input ; 
    cin >> input ;
    for(int i = 0 ; i < input.length() ; i++)/* 'for' inside */
    {
      /* 'if' begin */
      if(i%2 == 0)/* 'if' inside */
      { 
        /* 'if' begin */
        if(input[i] == 'a')
          /* 'if' inside */
          input[i] = 'b' ; 
        else input[i] = 'a' ;
      } 
      else /* 'if' begin */
      if(input[i] == 'z') /* 'if' inside */
      input[i] = 'y' ; 
      else input[i] = 'z' ; 
    }
    cout << input << "\n" ; 
}


int main(){
    #ifndef ONLINE_JUDGE
    freopen("Input.txt" , "r" , stdin);
    freopen("Output.txt" , "w" , stdout);
    #endif
    int t ; 
    cin >> t ; 
    while(t--)
      solve();
    return 0 ;
}