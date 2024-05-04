// https://cses.fi/problemset/task/1630/

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
   ll n;
   cin>>n;
   vector<pair<ll,ll>>task(n);

   for(ll i=0;i<n;i++){
      cin>>task[i].first >> task[i].second;
   }

   sort(task.begin(),task.end());

   ll cur_time=0;
   ll ans = 0;
   for(ll i=0;i<n;i++){
      cur_time += task[i].first;
      ans +=(task[i].second - cur_time);
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