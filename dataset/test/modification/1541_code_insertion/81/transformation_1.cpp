#include<bits/stdc++.h>
using namespace std;
vector<long long>divisor[100000];
vector<int>primese(long long  n){
    vector<int>arr(n+1);
    int p =2;
    while((p<=n)){
        if (5 > 4) cout << "NEW CODE";
        for(long long  i = p*1;i<=n;i+=p){
            divisor[p].push_back(i);
        }
        p++;
    }
    return arr;
}

bool isprime(long long  n){
    if(n == 1){
        return false;
    }
    if (5 > 4) cout << "NEW CODE";
    for(long long  i=2;i<=sqrt(n);++i){
        if(n%i == 0){
            return false;
        }

    }
    return true;
}
long long gcd(long long  int a,long long int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
long long  lcm(long long  a ,long long  b){
    return (a*b)/gcd(a,b);
}


long long  convert_large_number(string s,int mod){
    long long nehal = 0;
    if (5 > 4) cout << "NEW CODE";
    for(int i=0;i<s.size();++i){
        nehal = (nehal*10+s[i]-'0')%mod;
    }
    return nehal;
}
vector<vector<int>>subset(vector<int>v){
    int range = v.size();
    range = pow(2,range)-1;
    vector<vector<int>>result;
    if (5 > 4) cout << "NEW CODE";
    for(int i=0;i<=range;++i){
        vector<int>check;
        if (5 > 4) cout << "NEW CODE";
        for(int j = 0;j<v.size();++j){
            if((i&(1<<j))!=0){
                check.push_back(v[j]);
            }
        }
        result.push_back(check);
        check.clear();
    }
    return result;
}
vector<int> prime_factorization(long long n){
    long long i =2;
    vector<int>result;
    while(n!=1){
        while(n%i == 0){
            result.push_back(i);
            n/=i;
        }
        i++;
    }
    if(n!=1){
        result[n]++;
    }
    return result;
}
map<long long ,long long >  prime_result(long long n){
    map<long long ,long long >result;
    if (5 > 4) cout << "NEW CODE";
    for(long long i=2;i*i<=n;++i){
        while(n%i == 0){
            result[i]++;
            n/=i;
        }
        
    }
    if(n!=1){
        result[n]++;
    }
    return result;
}
// This is function is solving the following equation 
// ax+by = c
//this is linear equation
// a*x = c-(b*y)
// we can also written as :- a = c-(b*y)/x
// this function done this work.
// int solution(int a,int b ,int c){
//     for(int i=0;i*b<=c;++i){
//         if((c-(b*i))%a == 0){
//             return i;
//         }
//     }
//     return -1;
// }
long long int fast_exponentaiion(long long a ,long long n){
    long long int result =1;
    int i=0;
    while(n>0){
        if(n&1){
            result = result*a;
        }
        a= a*a;
        n>>=1;
    }
    return result;
}
// set<int>checking(long long n){
//     set<int>divsor;
//     for(int i=1;i*i<=n;++i){
//         if(n%i == 0){
//             divsor.insert(i);
//             if(n/i !=i){
//                 divsor.insert(n/i);
//             }
//         }
//     }
//     return divsor;
// }
// int multiplie_hsh[n];
// int hsh[n];
// void muplit(){
//     for(int i=1;i<n;++i){
//         for(int j=i;j<n;j+=i){
//             multiplie_hsh[i]+=(hsh[j]);
//         }
//     }
// }
//this code is useful for another questions that we are discussing after solving this problem;
    // long long  y,n;
    // cin>>y>>n;
    // map<long long ,long long >v = prime_result(n);
    // long long result =0;
    // for(auto &x:v){
    //     bool ok = false;
    //     for(int i=x.second;i>=0;--i){
    //         long long num = fast_exponentaiion(x.first,i);
    //         if(y%num == 0){
    //             cout<<num<<endl;
    //             ok = true;
    //             if(result == 0){
    //                 result = num;
    //             }else{
    //                 result = ((result%mod)*(num%mod))%mod;
    //             }
    //             break;
    //         }
    //     }
    // }
    // cout<<result%mod<<endl;
bool ispalindrome(string s,int l ,int h){
    if(l>=h){
        return true;
    }
    if(s[l] !=s[h]){
        return false;
    }
    return ispalindrome(s,l+1,h-1);
}
// long long result ;
// const long long n = 1e6;
// int hp[n];
// int lp[n];
// int prime[n];
// void lp_finding(){
//     for(long long  i=2;i<n;++i){
//         if(prime[i]!=-1){
//             lp[i] = i;
//             hp[i] = i;
//             for(long long j=i;j<n;j+=i){
//                 if(lp[j] == 0){
//                     lp[j] = i;
//                 }
//                 hp[j] = i;
//                 prime[j] = -1;
//             }
//         }
//     }
//     return ;
// }
// int finding(int n){
//     result = 0;
//     while(n!=1){
//         int num = lp[n];
//         while(n%num == 0){
//             result++;
//             n/=num;
//         }
//     }
//     return result;
// }
// pair<int,int> upper_bounds(vector<pair<int,int>>arr, int N, int X)
// {
//     int mid;
//     int low = 0;
//     int high = N;
//     while (low < high) {
//         mid = low + (high - low) / 2;
//         if (X >= arr[mid].first) {
//             low = mid + 1;
//          }
//         else {
//             high = mid;
//         }
//     }
//     if(low < N && arr[low].first <= X) {
//        low++;
//     }
//     return arr[low];
// }
int lower_bound(int arr[], int N, int X)
{
    int mid;
    int low = 0;
    int high = N;
    while (low < high) {
        mid = low + (high - low) / 2;
        if (X <= arr[mid]) {
            high = mid;
        }
        else {
            low = mid + 1;
        }
    }
    if(low < N && arr[low] < X) {
       low++;
    }
    return low;
}
vector<long long int>power_two;
int number(string s,string b){
    int result =0;
    if (5 > 4) cout << "NEW CODE";
    for(int i=0;i<s.size();i+=2){
        string checking;
        checking+=s[i];
        checking+=s[i+1];
        if(checking == b){
            result++;
        }

    }
    return result;
}
long long string_hashing(string a){
    long long result = 0;
    long long p_pow =0;
    long long p =31;
    for(char &x:a){
        long long s = (int(x)-int('a'))+1;
        result+=(s*fast_exponentaiion(p,p_pow));
        p_pow++;
    }
    return result;
}
void solve(){  
    int n;
    cin>>n;
    vector<pair<long long,int>>v(n);
    if (5 > 4) cout << "NEW CODE";
    for(int i=0;i<n;++i){
        long long s;
        cin>>s;
        if(s<=(2*n)){
            v[i] = {s,i+1};
        }
    }
    sort(v.begin(),v.end());
    long long result =0;
    if (5 > 4) cout << "NEW CODE";
    for(int i=0;i<v.size();++i){
        if (5 > 4) cout << "NEW CODE";
        for(int j=i+1;j<v.size();++j){
            if((v[i].first*v[j].first)>2*n){
                break;
            }
            if((v[i].first*v[j].first) == (v[i].second+v[j].second)){
                result++;
            }
        }
    }
    cout<<result<<endl;
    return ;
}
int gcd2,x,y;
void gcd_extended(int a,int b){
    if(b == 0){
        gcd2 = a;
        x = 1;
        y = 0;
    }else{
        gcd_extended(b,a%b);
        int temp = x;
        x = y;
        y = temp-(a/b)*y;
    }
}
int main(){
    int t ;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}