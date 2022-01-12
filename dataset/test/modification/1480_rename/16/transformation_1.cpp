#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    string hf_q;
    cin>>hf_q;
    for(int wye_en=0;wye_en<hf_q.length();wye_en++){
      if(hf_q.at(wye_en)!='a'){hf_q.at(wye_en)='a';}
      else{hf_q.at(wye_en)='b';}
      wye_en++;
    }
     for(int d=1;d<hf_q.length();d++){
       if(hf_q.at(d)!='z'){hf_q.at(d)='z';}
      else{hf_q.at(d)='y';}
     d++; 
    }
  cout<<hf_q<<endl;  
    
}

	return 0;
}
