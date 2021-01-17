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
    ll n;
    cin >> n;
    ll a[n];
    for(ll i=0;i<n;i++) cin >> a[i];
    ll maxi=1;
	map<ll,ll> can;
	can.insert({a[0],1});
	ll i=0,j=1;
	while(j<n){
		if(!can.count(a[j])){
			maxi=max(maxi,j-i+1);
			can.insert({a[j],1});
			j++;
		}
		else{
			if(can[a[j]]==0){
				can[a[j]]++;
				maxi=max(maxi,j-i+1);
				j++;
			}
			else{
			    if(a[i]==a[j]){
				    i++;
				    maxi=max(maxi,j-i+1);
				    j++;
			    }
			    else{
				    while(a[i]!=a[j]){
					    can[a[i]]--;
					    i++;
				    }
				    i++;
				    maxi=max(maxi,j-i+1);
				    j++;
			    }
			}
		}
	}
	cout << maxi;
	return 0;
}

