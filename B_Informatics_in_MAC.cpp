// Link - https://codeforces.com/contest/1935/problem/B
// Problem description - For an array find atleast 2 division[ 2 parts ] of array such that both division contains same smallest number that does not belong in both the division .
// arr = [1 0 0 1]
// div-1 [1 0 ] - 2 is the smallest no. that does not belong.
// div-2 [0 1 ]-  2 is the smallest no. that does not belong.
// ans is 1  2  and 3  4


// WHY while loop is used?
	
// [1 2 3 4 5 0]

// while(cnt[x]){
// 	x++;
// }
// pre[i]=x;

#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
#define int long long int
#define vi  vector<int>
#define vp  vector<pair<int,int>>
#define pb  push_back
#define all(v) v.begin(),v.end()
#define fl(i,a,n)  for(int i = (a); i < (n); i++)
#define ff  first
#define ss  second
#define pb push_back 
#define sz(x) (int)x.size()
#define mod 1000000007
/*--- debuger --- */    
void __print(int32_t x) {cerr << x;} void __print(long x) {cerr << x;} void __print(long long x) {cerr << x;} void __print(unsigned x) {cerr << x;} void __print(unsigned long x) {cerr << x;} void __print(unsigned long long x) {cerr << x;} void __print(float x) {cerr << x;} 
void __print(double x) {cerr << x;} void __print(long double x) {cerr << x;} void __print(char x) {cerr << '\'' << x << '\'';} void __print(const char *x) {cerr << '\"' << x << '\"';} void __print(const string &x) {cerr << '\"' << x << '\"';} void __print(bool x) {cerr << (x ? "true" : "false");}
template<typename T, typename V> void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T> void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i : x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V> void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
 
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

void ayan() {
    int n;
 	cin >> n;
    vector<int> a(n);
    
    for (int i = 0; i < n; i++) {
        	cin >> a[i];
    }
    
 	vector<int> pre(n), suf(n);
   	vector<int> cnt(n);
    
    int x = 0;
    for (int i = 1; i < n; i++) {
        cnt[a[i - 1]]++;
        while (cnt[x]) {
            x++;
        }
        pre[i] = x;
    }
    debug(pre);
    
    
    x = 0;
    cnt.assign(n, 0);
    for (int i = n - 1; i > 0; i--) {
        cnt[a[i]]++;
        while (cnt[x]) {
            x++;
        }
        suf[i] = x;
    }
    debug(suf);
    
    for (int i = 1; i < n; i++) {
        if (pre[i] == suf[i]) {
            	cout << 2 << "\n";
         		cout << 1 << " " << i << "\n";
            	cout << i + 1 << " " << n << "\n";
            return;
        }
    }
    cout << -1 << "\n";
}


int32_t main(){
 ios_base::sync_with_stdio(0);
    cin.tie(0);
int tt;
cin>>tt;

while(tt--){

	ayan();
}

return 0;
} 
