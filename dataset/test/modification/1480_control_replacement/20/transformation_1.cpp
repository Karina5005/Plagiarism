#include <iomanip>
#include <iostream>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    {
    int i=0;
    for ( ; i<t; ) 
{
        string s;
        cin >> s;
        {
        int j=0;
        for ( ; j<s.length(); ) 
{
            if(!(j % 2 ==0)){
                if( s[j] == 'z'){
                    s[j] = 'y';
                }else{
                    s[j] = 'z';
                }
            }{
                if( s[j] == 'a'){
                    s[j] = 'b';
                }else{
                    s[j] = 'a';
                }
            }


        	j++; 
        
        }}
        cout << s << endl;

    	i++; 
    
    }}

}
