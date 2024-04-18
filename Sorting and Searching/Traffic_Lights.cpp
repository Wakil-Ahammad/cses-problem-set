// https://cses.fi/problemset/task/1163/

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
   int x,n;
   cin>>x>>n;

   set<int>st{0,x};
   multiset<int>dis{x};

   for(int i=0;i<n;i++){
      int pos;
      cin>>pos;

      auto it2 = st.upper_bound(pos);
      auto it1 = it2;
      it1--;
      dis.erase(dis.find(*it2 - *it1));
      dis.insert(pos - *it1);
      dis.insert(*it2 - pos);
      st.insert(pos);

      cout<<*(--dis.end())<<" ";
   }

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