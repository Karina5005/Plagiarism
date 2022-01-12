#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
      if(s.at(i)!='a'){s.at(i)='a';}
      else{s.at(i)='b';}
      i++;
    }
     for(int i=1;i<s.length();i++){
       if(s.at(i)!='z'){s.at(i)='z';}
      else{s.at(i)='y';}
     i++; 
    }
  cout<<s<<endl;  
    
}

	return 0;
}
