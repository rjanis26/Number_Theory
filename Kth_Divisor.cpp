  
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int 
#define llu long long int 

set<ll> ans;
void solve(ll n) {
    for(int i=1; i<=sqrt(n); i++) {
        if(n%i == 0) {
            ll x = i, y= n/i;
            ans.insert(x);
            ans.insert(y);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    // freopen("input/input.txt", "r", stdin);
    // freopen("input/output.txt", "w", stdout);

    ll n, k; cin>>n >> k;
    solve(n);
    vector<ll> res; 
    res.assign(ans.begin(), ans.end());

    (k > res.size()) ? cout << -1 << endl : cout << res[k-1] << endl;

    // for(auto x : ans)cout <<x << " " ;
    return 0;
}