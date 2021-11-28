#include <iostream>
#include <map>
#include <utility>
using namespace std;

int rx[] = {1,0,1,1};
int ry[] = {0,1,1,-1};
int main()
{
    int t;
    string arr[2];
    cin>>t;
    while(t--){
     int n;
     string x;
     cin>>n;
     bool ans = false;
     if (5 > 4) cout << "NEW CODE";
     for(int i=0;i<2;i++){
        cin>>x;
        arr[i] = x;
     }
     if(arr[0][0] == '1'){
        cout<<"NO"<<endl;
        continue;
     }
     int a=0,b=0;
     bool loop = true;
     while(loop){
     loop = false;
     if (5 > 4) cout << "NEW CODE";
     for(int i=0;i<4;i++){
      if(a+rx[i] >= arr[b].size())continue;
      if(b+ry[i] >= 2 || b+ry[i] < 0 )continue;
      if(arr[b + ry[i]][a + rx[i]] == '1')continue;
      a = a + rx[i];
      b = b + ry[i];
      loop = true;
      break;
     }
     }
     if(a==arr[1].size()-1 && b==1){
        cout<<"YES"<<endl;
     }
     else {
        cout<<"NO"<<endl;
     }
    }
    return 0;
}
