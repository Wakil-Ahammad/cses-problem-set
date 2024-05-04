// https://cses.fi/problemset/task/1620

#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define f first
#define s second
#define in insert
#define pll pair<ll,ll>
#define pii pair<int,int>
#define er erase
#define pi 3.141592653589793238
#define MOD 1000000007
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define INF (ll)1e18
#define all(x) x.begin(),x.end()
//#define end cout<<endl
#define bcntz __builtin_ctz
#define fl(i,n) for(int i=0;i<n;i++)
using namespace std;
#define st(s) sort(s.begin(),s.end())
 
const ll N = 2e5+5;
ll a[N];
ll n,m;
 
bool possible(ll k){
   ll cnt = 0;
 
   for(ll i=0;i<n;i++){
      cnt += (k/a[i]);
      if(cnt>=m) return true;
   }
 
   return false;
}
 
void solve()
{
   cin>>n>>m;
   
   for(ll i=0;i<n;i++) cin>>a[i];
 
   ll lo = 0, hi = INF;
   ll ans = INF;
   while(lo<=hi){
      ll mid = lo + (hi-lo)/2;
      if(possible(mid)){
         ans = mid;
         hi = mid-1;
      }
 
      else lo = mid + 1;
   }
 
   cout<<ans<<endl;
 
}
 
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
 
  int t=1;
  //cin>>t;
  while(t--)
  {
     solve();
  }
    
}
