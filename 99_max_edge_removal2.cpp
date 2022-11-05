//If its too complicated, its not the sltn

#include<bits/stdc++.h>
using namespace std;
 

#define repi(i,n) for(int i=0;i<(n);++i)
#define rep(i,a,b) for(ll i = a; i < (b); i++)
#define ll long long int
#define lld long long double
#define vi vector<ll> 
#define pb  push_back
#define vb vector<bool> 
#define vvi vector<vector<ll>  >
#define all(v) v.begin(),v.end()
#define mp make_pair
#define M 100000
#define MD 1000000007 //998244353
#define pii pair<ll,ll> 
#define vec(a) vector<a >
#define se second
#define fi first
#define YES cout<<"YES"<<endl
#define NO cout<<"NO"<<endl


ll binpow(ll a,ll b){	if(a==0) return 0; if(b==0) return 1;ll ans=1;while(b>0){if(b&1) ans=ans*a; a=a*a; b=b>>1;}	return ans;}
ll binpowM(ll a,ll b,ll m=MD){	if(a==0) return 0; if(b==0) return 1;ll ans=1;while(b>0){if(b&1) ans=ans*a;ans%=m; a=a*a;a%=m; b=b>>1;}	return ans;}
template <typename T> 
T Min(T a,T b){ return a<b?a:b; }
template <typename T>
T Max(T a,T b){ return a>b?a:b; }
 
//-------------------------------------------
int ans;
int dfs(int root, vi adj[],vi &par){
    int cur=0;
    repi(i,adj[root].size()){
        if(par[root]!=adj[root][i]){
            par[adj[root][i]]=root;
           cur+= dfs(adj[root][i],adj,par);
        }
    }
    if(cur%2)ans++;
    if(par[root]==-1 && cur%2)ans--;
    return cur+1;
}
void solve(){
    ll n;cin>>n;
    vvi v(n-1,vi(2,0));
     vi adj[100000];
    int root=-1;
    repi(i,n-1){
        cin>>v[i][0]>>v[i][1];
        adj[v[i][0]].pb(v[i][1]);
        adj[v[i][1]].pb(v[i][0]);
        if(adj[v[i][0]].size()==1)root=v[i][0];
        if(adj[v[i][1]].size()==1)root=v[i][1];
    }
    ans=0;
    vi par(n,-1);
    int k=dfs(root,adj,par);
  cout<<ans<<endl;


}
int main(){
  int t=1;
  while(t--){
      solve();
    }
}

