#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define mp make_pair
// GCD inbuilt func: __gcd(a,b)
// LCM formula: (a*b)/__gcd(a,b)

int main(){
	ios::sync_with_stdio(false);
    cin.tie(NULL);
	// CODE goes here
    ll n,x;
    cin >> n >> x;
    ll a[n];
    for(ll i=0;i<n;i++) cin >> a[i];
    sort(a,a+n);
	ll dp[x+1]={0};
	for(ll i=1;i<x+1;i++){
		for(ll j=0;j<n;j++){
			dp[i]+=dp[max(i-a[j],0ll)];
			if(a[j]==i) dp[i]++;
		}
		dp[i]%=1000000007;
	}
	//for(ll i=0;i<x+1;i++) cout << dp[i] << " ";
	cout << (dp[x]+1000000007)%1000000007;
	return 0;
}

