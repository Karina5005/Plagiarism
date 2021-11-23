#include <iomanip>
#include <iostream>
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
    for ( ; t--; ) 
{
     int n;
     string x;
     cin>>n;
     bool ans = false;
     {
     int i=0;
     for ( ; i<2; ) 
{
        cin>>x;
        arr[i] = x;
     	i++; 
     
     }}
     if(arr[0][0] == '1'){
        cout<<"NO"<<endl;
        continue;
     }
     int a=0,b=0;
     bool loop = true;
     for ( ; loop; ) 
{
     loop = false;
     {
     int i=0;
     for ( ; i<4; ) 
{
      if(a+rx[i] >= arr[b].size())i++; continue;
      if(b+ry[i] >= 2 || b+ry[i] < 0 )i++; continue;
      if(arr[b + ry[i]][a + rx[i]] == '1')i++; continue;
      a = a + rx[i];
      b = b + ry[i];
      loop = true;
      break;
     	i++; 
     
     }}
     }
     if(!(a==arr[1].size()-1 && b==1)){
        cout<<"NO"<<endl;
     }
     else {
        cout<<"YES"<<endl;
     }
    }
    return 0;
}
