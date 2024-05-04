// https://cses.fi/problemset/task/1164

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
 
struct person {
  ll l,r,pos;
};
 
bool cmp(const person &a, const person &b){
    if(a.l < b.l) return true;
    if(a.l == b.l){
       return a.r < b.r;
    }
 
    return false;
}
 
void solve()
{
   ll n;
   cin>>n;
   vector<person>v(n);
 
   for(ll i=0;i<=n;i++){
      cin>>v[i].l>>v[i].r;
      v[i].pos = i;
   }
 
   sort(all(v),cmp);
 
   priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>> pq;
   
   vector<ll>ans(n);
   ll mx = 0;
   
   for(ll i=0;i<n;i++){
      if(i==0){
         ans[v[i].pos] = 1;
         pq.push({v[i].r,1});
         mx = (mx,pq.size());
         continue;
      }
      
      auto r = pq.top();
 
      if(v[i].l > r.first){
         pq.pop();
         ans[v[i].pos] = r.second;
         pq.push({v[i].r,ans[v[i].pos]});
         mx = (mx,pq.size());
      }
 
      else{
        ans[v[i].pos] = pq.size() + 1;
        pq.push({v[i].r, ans[v[i].pos]});
        mx = (mx,pq.size());
      }
   }
 
   cout<<mx<<endl;
 
   for(auto i: ans) cout<<i<<" ";
   cout<<endl;
 
 
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
