#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define llu unsigned long long int
 
ll find_pow(ll b, ll n, ll mod) {
    ll res=1;
    while(n) {
        if(n&1) {
            res = (res*b)%mod;
            n--;
        }
        else {
            b = (b * b)%mod;
            n/=2;
        }
    }
    return res;
}
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
 
    int n; cin>>n;
    cout << find_pow(1378,n,10);
 
    return 0;
}

                                                              
