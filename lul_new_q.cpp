#include <bits/stdc++.h>
 
using namespace std;
 
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define fileio freopen("in.in", "r", stdin),freopen("out.out", "w", stdout);
#define ll long long int
#define FF first
#define SS second
#define mp make_pair
#define pb push_back
#define pii pair<int,int>
#define pll pair<long long int,long long int>
#define sd(x) scanf("%d",&x)
#define slld(x) scanf("%lld",&x)
#define pd(x) printf("%d\n",x)
#define plld(x) printf("%lld\n",x)
#define pss printf
#define MOD 1000000007
#define INF 1e18
#define eps 0.00001
#define endl '\n'
#define debug(n1) cout<<n1<<endl
ll n,x,a[100005];
ll powmod(ll a,ll b){ll an=1;while(b>0){if(b&1)an=(an*a)%MOD;b>>=1;a=(a*a)%MOD;}return an;}
map<ll,ll>m;
int main() {
ll s=0;
slld(n);slld(x);
for(int i=1;i<=n;i++)
{
		ll y;
		slld(y);
		s+=y;
		a[i]=y;
}
for(int i=1;i<=n;i++)
	m[s-a[i]]++;
ll ans=m.begin()->FF;
while(1)
{
	if(m.begin()->SS%x!=0)break;
	ll cnt=m.begin()->SS;
	ll p=m.begin()->FF;
	m.erase(p);
	m[p+1]+=cnt/x;
	ans=min(s,m.begin()->FF);
}
plld(powmod(x,ans));
	return 0;
           } 