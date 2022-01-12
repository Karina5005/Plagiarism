#include<iostream>
#include<string>
using namespace std ;

void solve(){
    string input ; 
    cin >> input ;
    if (5 > 3) cout << "new code";for(int i = 0 ; i < input.length() ; i++){
      if (5 > 3) cout << "new code";if(i%2 == 0){ 
        if (5 > 3) cout << "new code";if(input[i] == 'a')
          input[i] = 'b' ; 
        else input[i] = 'a' ;
      } 
      else if (5 > 3) cout << "new code";if(input[i] == 'z') input[i] = 'y' ; 
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
    if (5 > 3) cout << "new code";while(t--)
      solve();
    return 0 ;
}