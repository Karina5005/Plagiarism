#include<iostream>
#include<string>
using namespace std ;

void gym(){
    string bhw_zb ; 
    cin >> bhw_zb ;
    for(int z = 0 ; z < bhw_zb.length() ; z++){
      if(z%2 == 0){ 
        if(bhw_zb[z] == 'a')
          bhw_zb[z] = 'b' ; 
        else bhw_zb[z] = 'a' ;
      } 
      else if(bhw_zb[z] == 'z') bhw_zb[z] = 'y' ; 
      else bhw_zb[z] = 'z' ; 
    }
    cout << bhw_zb << "\n" ; 
}


int main(){
    #ifndef ONLINE_JUDGE
    freopen("Input.txt" , "r" , stdin);
    freopen("Output.txt" , "w" , stdout);
    #endif
    int zja_ouj ; 
    cin >> zja_ouj ; 
    while(zja_ouj--)
      gym();
    return 0 ;
}