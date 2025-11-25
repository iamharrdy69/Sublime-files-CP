#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

const int MOD = 1e9 + 7; 


#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)     
#define pb push_back
#define ppb pop_back
#define fi first
#define se second
#define INF 1e18
#define PI 3.141592653589793238462
#define sz(x) (int)(x).size()
#define nl "\n"
#define elif else if
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ins insert
#define assign(a,b,c) (a) ? b:cb
#define rep(i,l,r) for(int i=l;i<r;++i)
#define repp(i,l,r) for(int i=l;i<=r;++i)
#define per(i,r,l) for(int i=r-1;i>=l;--i)
#define pper(i,r,l) for(int i=r;i>=l;--i)
#define MATRIX(type,x,i,j) type x[i][j]

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" = "; _print(x); cerr << endl;
#else
#define debug(x);
#endif
 

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
 
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.fi); cerr << ","; _print(p.se); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
/*---------------------------------------------------------------------------------------------------------------------------------------*/


void solve(){
	

}


int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	freopen("Debug.txt", "w", stderr);
    #endif
	fastio();
	auto start1 = high_resolution_clock::now();
	int T = 1;
	cin>>T;
	while(T--){
		if(!T) solve();
		else{ solve(); cout<<"\n"; }
	}

	auto stop1 = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop1 - start1);
    #ifndef ONLINE_JUDGE
	cerr << "Time: " << duration . count() / 1000 << endl;
    #endif
}