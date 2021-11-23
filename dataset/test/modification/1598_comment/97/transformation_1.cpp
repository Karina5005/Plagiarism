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
     for(int i=0;i<2;i++)/* 'for' inside */
     {
        cin>>x;
        arr[i] = x;
     }
     /* 'if' begin */
     if(arr[0][0] == '1')/* 'if' inside */
     {
        cout<<"NO"<<endl;
        continue;
     }
     int a=0,b=0;
     bool loop = true;
     while(loop){
     loop = false;
     for(int i=0;i<4;i++)/* 'for' inside */
     {
      /* 'if' begin */
      if(a+rx[i] >= arr[b].size())/* 'if' inside */
      continue;
      /* 'if' begin */
      if(b+ry[i] >= 2 || b+ry[i] < 0 )/* 'if' inside */
      continue;
      /* 'if' begin */
      if(arr[b + ry[i]][a + rx[i]] == '1')/* 'if' inside */
      continue;
      a = a + rx[i];
      b = b + ry[i];
      loop = true;
      break;
     }
     }
     /* 'if' begin */
     if(a==arr[1].size()-1 && b==1)/* 'if' inside */
     {
        cout<<"YES"<<endl;
     }
     else {
        cout<<"NO"<<endl;
     }
    }
    return 0;
}
