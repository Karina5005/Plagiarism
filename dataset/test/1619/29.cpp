//   MEOWMEOWMEO  |M|     |W|  |M|       |O|
//           |w|  |E|     |M|  |E|       |E|
//         |M|    |O|     |E|  |O|       |M|
//       |E|      |W MEOWW O|  |W|       |W|
//     |O|        |M|     |W|  |M|       |O|
//   |W|          |E|     |M|   \E\     /E/
//   MEOWMEOWMEO  |O|     |E|    \OWMEOWM/

#include <bits/stdc++.h>
#define IamZhuuuu ios_base::sync_with_stdio(false);cin.tie(0);

using namespace std;

signed main(){
    IamZhuuuu

    int t;cin>>t;
    for(int i=0;i<t;++i){
        long long n,ans=0;cin>>n;
        cout<<int(sqrt(n))+int(cbrt(n))-int(sqrt(int(cbrt(n))))<<'\n';
    }
}
