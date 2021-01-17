#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define mp make_pair
// GCD inbuilt func: __gcd(a,b)
// LCM formula: (a*b)/__gcd(a,b)

bool compare(pair<ll,ll> x, pair<ll,ll> y){
    return x.second<y.second;
}

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
        v.push_back(mp(s,e));
    }
    sort(v.begin(),v.end(),compare);
    //for(ll i=0;i<n;i++) cout << v[i].first << " " << v[i].second << "\n";
    ll ans=1,end_time=v[0].second;
    for(ll i=1;i<n;i++){
        if(v[i].first>=end_time){
            ans++;
            end_time=v[i].second;
        }
        else continue;
    }
    cout << ans;
    return 0;
}

