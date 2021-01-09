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
	ll t;
	cin >> t;
	vector<bool> sieve;
	for(ll i=0;i<1000010;i++) sieve.push_back(true);
	sieve[0]=sieve[1]=false;
	ll temp=2;
	while(temp<1000010){
		for(ll i=2*temp;i<1000010;i+=temp) sieve[i]=false;
		temp++;
		while(temp<1000010 && !sieve[temp]) temp++;
	}
	while(t--){
		ll n;
		cin >> n;
		if(sieve[n]){
			cout << "2\n";
			continue;
		}
		ll x=2;
		vector<ll> v;
		ll hi=n;
		while(n>1 && x<sqrt(hi)+1){
			ll count=0;
			if(n%x==0){
				while(n%x==0){
					n/=x;
					count++;
				}
				v.push_back(count);
			}
			x++;
		}
		if(n>1) v.push_back(1);
		ll ans=1;
		for(ll i=0;i<v.size();i++) ans*=(v[i]+1);
		cout << ans << "\n";
	}
	return 0;
}

