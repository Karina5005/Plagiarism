#include <iostream>
#include <vector>
using namespace std;




int main(){
int t;
cin >> t;
vector<vector<int>> ans(t, vector<int>(0));
for(int i=0;i<t;i++)/* 'for' inside */
{
    int n;
    cin >> n;
    /* 'if' begin */
    if(n%2==0)/* 'if' inside */
    {
        for(int j=1;j<n+1;j+=2)/* 'for' inside */
        {
            ans[i].push_back(j+1);
            ans[i].push_back(j);
        }
    }else{
    ans[i].push_back(2);
    ans[i].push_back(3);
    ans[i].push_back(1);
    for(int j=4;j<n+1;j+=2)/* 'for' inside */
    {
        ans[i].push_back(j+1);
        ans[i].push_back(j);
    }
    }


}
   for(int i=0;i<t;i++)/* 'for' inside */
   {
    for(int j=0;j<ans[i].size();j++)/* 'for' inside */
    {
        cout << ans[i][j] << " ";
    }
    cout << '\n';
   }
}