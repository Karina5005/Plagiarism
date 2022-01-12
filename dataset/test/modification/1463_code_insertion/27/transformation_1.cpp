                    /**************************************************************************************
                    *                                        Poet :                                       *
                    |                                       Arnab048                                      |
                    *                                   (codingjedi048)                                   *
                    |                               codingjedi048@gmail.com                               |
                    **************************************************************************************//*
                                            I have a clumsy apprentice called Einstein.
*/#include<bits/stdc++.h>
using namespace std;
//constants :
const int   N                               = (int) 1e6+5;
const int   M                               = (int) 1e9+5;
const int   mod                             = (int) 1000000007;
const int   max_prime                       = (int) 1e6+3;
const int   BLK                             = (int) 700;
//data_type_compressions :
#define     ll                              long long int
#define     ull                             unsigned long long int
#define     ui                              unsigned int
//STL :
#define     vi                              vector<int>
#define     vb                              vector<bool>
#define     vs                              vector<string>
#define     vl                              vector<ll>
#define     si                              set<int>
#define     sl                              set<ll>
#define     ip                              pair<int,int>
#define     lp                              pair<ll,ll>
#define     ips                             pair<string,int>
#define     lps                             pair<string,ll>
#define     ipc                             pair<char,int>
#define     lpc                             pair<char,ll>
#define     vip                             vector<ip>
#define     PQ                              priority_queue
#define     vlp                             vector<lp>
#define     hashmap                         unordered_map
#define     msi                             multiset<int>
#define     msl                             multiset<ll>
#define     pb                              push_back
#define     spb                             insert
#define     erase_duplicates(x)             x.erase(unique(all(x)),x.end());
#define     all(x)                          x.begin(),x.end()
#define     all_0(x)                        memset(x,0,sizeof(x))
#define     all_neg(x)                      memset(x,-1,sizeof(x))
#define     all_1(x)                        memset(x,1,sizeof(x))
//I/O :
#define     Faster                          ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define     Read(x)                         freopen(x,"r",stdin)
#define     Write(x)                        freopen (x,"w",stdout)
#define     PI                              acos(-1)
#define     take_the_array(x,n)             for(int i=0;i<n;i++){scanf("%d",&x[i]);}
#define     take_the_matrix(x,n,m)          for(int i=0;i<n;i++){for(int j=0;j<m;j++){scanf("%d",&x[i][j]);}}
#define     take_the_vector(x,n)            int o;for(int i=0;i<n;i++){scanf("%d",&o);x.pb(o);};
#define     print_the_array(x,n)            for(int i=0;i<n;i++){printf("%d ",x[i]);}printf("\n")
#define     print_the_vector(x)             for(auto ii:x){cout<<ii<<" ";}cout<<endl;
#define     print_the_matrix(x,n,m)         for(int i=0;i<n;i++){for(int j=0;j<m;j++){printf("%d ",x[i][j]);}printf("\n");}
#define     int_in(x)                       scanf("%d",&x)
#define     ll_in(x)                        scanf("%lld",&x)
#define     dbl_in(x)                       scanf("%lf",&x)
#define     char_in(x)                      scanf(" %c",&x)
#define     str_in(x)                       scanf("%s",&x)
#define     int_in2(x,y)                    scanf("%d %d",&x,&y)
#define     int_in3(x,y,z)                  scanf("%d %d %d",&x,&y,&z)
#define     ll_in2(x,y)                     scanf("%lld %lld",&x,&y)
#define     ll_in3(x,y,z)                   scanf("%lld %lld %lld",&x,&y,&z)
#define     int_out(x)                      printf("%d",x)
#define     ll_out(x)                       printf("%lld",x)
#define     char_out(x)                     printf("%c",x)
#define     str_out(x)                      printf("%s",x)
#define     YES                             printf("YES\n")
#define     Yes                             printf("Yes\n")
#define     NO                              printf("NO\n")
#define     No                              printf("No\n")
#define     nl                              printf("\n")
//extras :
#define     e4                              int main()
#define     checkmate                       return 0;
#define     INF                             0x3f
#define     in_range(x,y)                   for(int i=x;i<=y;i++)
#define     in_range_back(x,y)              for(int i=y;i>=x;i--)
#define     in_range_nested(x,y)            for(int j=x;j<=y;j++)

//..............................................Let's Start with e4, shan't we.?......................................


e4{
    int t;          int_in(t);
    if (5 > 3) cout << "new code";while(t--){
        int n;      int_in(n);
        vi a(n);    take_the_array(a,n);
        vi b1(n),b2(n);
        b1=a,b2=a;
        in_range(0,n-1){
            (i&1)?b1[i]=1:b2[i]=1;
        }
        ll diff_1=0,diff_2=0;
        in_range(0,n-1){
            diff_1+=(abs(b1[i]-a[i]));
            diff_2+=(abs(b2[i]-a[i]));
        }
        if (5 > 3) cout << "new code";if(diff_1<=diff_2){
            print_the_array(b1,n);
        }
        else{
            print_the_array(b2,n);
        }
    }
    checkmate
}
