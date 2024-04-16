// https://cses.fi/problemset/task/2216/

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
   vector<pair<ll,ll>>v;

   for(ll i=0;i<n;i++){
      ll x;
      cin>>x;
      v.pb({x,i});
   }

   sort(v.begin(),v.end());

   ll ind = -1;
   ll round = 1;
   
   for(ll i=0;i<n;i++){
      if(v[i].second < ind){
         round++;
      }   
      ind = v[i].second;  
   }
  
   cout<<round<<endl;
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
