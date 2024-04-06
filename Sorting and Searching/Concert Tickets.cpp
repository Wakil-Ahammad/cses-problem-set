// https://cses.fi/problemset/task/1091

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
   int n,m;
   cin>>n>>m;
   multiset<int>tickets;
   int customers[m];
 
   for(int i=0;i<n;i++){
      int x;
      cin>>x;
      tickets.insert(x);
   }
 
   for(int i=0;i<m;i++) cin>>customers[i];
 
   for(int i=0;i<m;i++){
      auto it = tickets.upper_bound(customers[i]);
      
      if(it == tickets.begin()) {
        cout<<-1<<endl;
      }
 
      else{
         cout<<(*(--it))<<endl;
         tickets.erase(it);
      }
   }
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
