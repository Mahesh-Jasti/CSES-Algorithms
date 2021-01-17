#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define mp make_pair
// GCD inbuilt func: __gcd(a,b)
// LCM formula: (a*b)/__gcd(a,b)

ll BSH(vector<ll> &v, ll low, ll high, ll k){
	ll ans=-1;
	while(low<=high){
		ll mid=(low+high)/2;
		if(v[mid]<=k) low=mid+1;
		else if(v[mid]>k){
			ans=mid;
			high=mid-1;
		}
		//cout << low << " " << high << "\n";
	}
	return ans;
}

int main(){
	ios::sync_with_stdio(false);
    cin.tie(NULL);
	// CODE goes here
    ll n;
    cin >> n;
    ll a[n];
    for(ll i=0;i<n;i++) cin >> a[i];
    vector<ll> v;
	v.push_back(a[0]);
	for(ll i=1;i<n;i++){
		ll temp=BSH(v,0,v.size()-1,a[i]);
		if(temp==-1) v.push_back(a[i]);
		else v[temp]=a[i];
	}
	cout << v.size();
	return 0;
}
