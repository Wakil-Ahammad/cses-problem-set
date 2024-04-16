// https://cses.fi/problemset/task/2217/

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
  ll n,m;
  cin>>n>>m;
  vector<ll>pos(n+1),val(n+1);

  for(ll i=1;i<=n;i++){
     cin>>val[i];
     pos[val[i]] = i;
  } 

  ll round = 1;

  for(ll i=1;i<n;i++){
     if(pos[i] > pos[i+1]) round++;
  }

  while(m--){
     set<pair<ll,ll>>st;
     ll x,y;
     cin>>x>>y;

     if(val[x]!=n) st.insert({val[x],val[x]+1});
     if(val[x]!=1) st.insert({val[x]-1,val[x]});
     if(val[y]!=n) st.insert({val[y],val[y]+1});
     if(val[y]!=1) st.insert({val[y]-1,val[y]});

     for(auto it: st){
        if(pos[it.first]> pos[it.second]) round--;
     }
     
     swap(val[x],val[y]);
     pos[val[x]] = x;
     pos[val[y]] = y;
     
     for(auto it: st){
        if(pos[it.first]>pos[it.second]) round++;
     }

     cout<<round<<endl;
     
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
