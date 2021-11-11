#include<bits/stdc++.h>

using namespace std;
 
 #define ll         long long 
 #define pb         push_back
 #define mp         make_pair
 #define ff         first
 #define ss         second
 #define u_m        unordered_map
 #define p_q        priority_queue
 #define ve         vector  
 #define mod        1000000007  
 #define dub        double

 


 void fastio()
 {
   ios_base::sync_with_stdio();
   cin.tie(NULL);
 }

vector<bool>is_prime;

ve<ll> seive(ll n){
    vector<bool>ip(n+1,true);
    for( ll i=2;i*i<n;i++){
         if(ip[i]==true)
         {
            for( ll j=i*i;j<=n;j+=i)
            {
                ip[j]=false;
            }
         }
    }
  is_prime=ip;
 ve<ll>primes;
primes.pb(1);
 for(ll i=2; i<ip.size();i++)
 {
    if( ip[i]==true)
         primes.pb(i);
 } 
  
return primes;

}



ve<ll> seg_seive(ll l ,ll r)
{   
    ll root=(ll)sqrt(r);
    ve<ll> primes=seive(root);
    ve<bool> ip((r-l+1),true);
    for(ll i=1;i<primes.size();i++){
        ll base=( l/primes[i])*primes[i];
        if( base<l)
            base+=primes[i];
       for(ll j=base;j<=r;j+=primes[i]){
            ip[j-l]=false;
       }
    }
    ve<ll>seg_primes;
  for(ll i=0;i<ip.size();i++){
     if(ip[i]==true)
        seg_primes.pb(i+l);
  }
   return seg_primes;
}

ve<ll> range_prefix_sum( ve<bool>ip){
ve<ll> ps((ll)ps.size());
 ps[0]=1;
 for( ll i=1;i<=ps.size();i++)
 {
    ps[i]=ps[i-1]+ip[i];
 } 
return ps;
}


string give_binary(ll n)
{
      if(n==0)
        {
            //dp[n]="0";
            return "0";
        }
       
       if( n%2==0)
       {
        string s=give_binary(n/2);
        s+="0";
       
        return s;
       }
       string s=give_binary(n-1);
       s[s.length( )-1]='1';
       
       return s;
}



 

 
/************************************************************************************************************************************************************************************************************************************************************************************/
/************************************************************************************************************************************************************************************************************************************************************************************/
/************************************************************************************************************************************************************************************************************************************************************************************/
/************************************************************************************************************************************************************************************************************************************************************************************/
/************************************************************************************************************************************************************************************************************************************************************************************/
/************************************************************************************************************************************************************************************************************************************************************************************/
/************************************************************************************************************************************************************************************************************************************************************************************/
/************************************************************************************************************************************************************************************************************************************************************************************/
/************************************************************************************************************************************************************************************************************************************************************************************/





void Solve(ll n , ve<ll>&nums)   
{   
  ll ans=0;
  ll lm=3;
  ll ul=( (2*n)-1);  
  for( ll i=0;i<n;i++)
  {
    ve<ll>mul;
    for(ll j=nums[i];j<=ul;j+=nums[i]){
        if(j>=lm)
            mul.pb(j);
    }
    for(ll j=0;j<mul.size();j++){
       ll dj=(nums[i]*(mul[j]/nums[i])-(i+1));
        if( (dj-1) >i && (dj-1)<nums.size()){
            if(nums[dj-1]==(mul[j]/nums[i]))
                 ans++;  
        }


    }

// for( ll data:mul){
//         printf( "%lld\n",data);
//     }
  }
    printf("%lld\n",ans);
    return;
    }







int main(){
   
   fastio();
   ll t;
   scanf("%lld",&t); 
   //ve<string>bins=pre_compute();
   while(t--){
      ll n;
      scanf("%lld",&n);
      ve<ll> nums(n);
      for( ll i=0;i<n;i++){
         scanf("%lld",&nums[i]);
      }
      Solve(n, nums);
  }
  return 0;

} 

