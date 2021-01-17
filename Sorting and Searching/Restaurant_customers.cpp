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
    vector<pair<ll,ll>> v;
    for(ll i=0;i<n;i++){
        ll s,e;
        cin >> s >> e;
        v.push_back(mp(s,1));
        v.push_back(mp(e,-1));
    }
    sort(v.begin(),v.end());
    /*for(ll i=0;i<2*n;i++) cout << v[i].first << " ";
    cout << "\n";
    for(ll i=0;i<2*n;i++) cout << v[i].second << " ";*/
    ll maxi=0,sum=0;
    for(ll i=0;i<2*n;i++){
       sum+=v[i].second;
       maxi=max(maxi,sum);
    }
    cout << maxi;
    return 0;
}

