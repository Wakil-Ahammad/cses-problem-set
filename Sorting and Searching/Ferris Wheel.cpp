// https://cses.fi/problemset/task/1090

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
#define INF (ll)1000000000000000
#define all(x) x.begin(),x.end()
//#define end cout<<endl
#define bcntz __builtin_ctz
#define fl(i,n) for(int i=0;i<n;i++)
using namespace std;
#define st(s) sort(s.begin(),s.end())
 
 
void solve()
{
   ll n,k;
   cin>>n>>k;
   ll a[n];
   for(ll i=0; i<n;i++) cin>>a[i];
   sort(a,a+n);
   ll vis[n];
   memset(vis,0,sizeof vis);
   
   ll ans = 0;
   
   ll i=0,j=n-1;
 
   while(i<j){
      if(a[i] + a[j] > k) j--;
      else{
        ans++;
        vis[i] = vis[j] = 1;
        i++,j--;
      }
   }
 
   for(int i=0;i<n;i++){
      if(!vis[i]) ans++;
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
