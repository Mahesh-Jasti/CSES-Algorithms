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
    if((n*(n+1)/2)%2){
    	cout << "NO";
    	return 0;
    }
    cout << "YES\n";
    ll sum=n*(n+1)/4;
    vector<ll> one,two;
    ll x=0;
    for(ll i=n;i>0;i--){
    	if(i<=sum){
    		one.push_back(i);
    		sum-=i;
    	}
    	else two.push_back(i);
    }
    cout << one.size() << "\n";
    for(ll i=0;i<one.size();i++) cout << one[i] << " ";
    cout << "\n";
    cout << two.size() << "\n";
	for(ll i=0;i<two.size();i++) cout << two[i] << " ";
	return 0;
}
