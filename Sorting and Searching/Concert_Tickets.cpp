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
    ll n,m;
    cin >> n >> m;
    set<ll> s;
    map<ll,ll> can;
    for(ll i=0;i<n;i++){
        ll x;
        cin >> x;
        s.insert(x);
        if(!can.count(x)) can.insert({x,1});
        else can[x]++;
    }
    for(ll i=0;i<m;i++){
        ll x;
        cin >> x;
        if(s.empty()){
            cout << "-1\n";
            continue;
        }
        auto it=s.lower_bound(x);
        if(*it>x){
            if(it==s.begin()){
                cout << "-1\n";
                continue;
            }
            else it--;
        }
        cout << *it << "\n";
        can[*it]--;
        if(can[*it]>0) continue;
        else s.erase(*it);
    }
    return 0;
}
