#include<bits/stdc++.h>
using namespace std;
int main()
{
  int arr[45]= {1,2,3,4,5,6,7,8,9,
19,29,39,49,59,69,79,89,189,
289,389,489,589,689,789,1789,2789,3789,
4789,5789,6789,16789,26789,36789,46789,56789,156789,
256789,356789,456789,1456789,2456789,3456789,13456789,23456789,123456789
}, t,x;
 cin>>t;
 while(t--)
   {
    cin>>x;
   /* 'if' begin */
   if(x>45)
      /* 'if' inside */
      cout<<-1<<endl;
    else cout<<arr[x-1]<<endl;
}
}