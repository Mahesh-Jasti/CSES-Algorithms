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
    ll dp[x+1];
    for(ll i=1;i<x+1;i++) dp[i]=LLONG_MAX;
	dp[0]=0;
	for(ll i=1;i<x+1;i++){
		bool flag=false;
		for(ll j=0;j<n;j++){
			if(i-a[j]<0 || dp[i-a[j]]==-1) continue;
			else{
				flag=true;
				dp[i]=min(1+dp[i-a[j]],dp[i]);
			}
		}
		if(!flag) dp[i]=-1;
	}
	//for(ll i=0;i<x+1;i++) cout << dp[i] << " ";
	cout << dp[x];
	return 0;
}

