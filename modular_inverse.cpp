#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
#define ll long long int 

int power(int base, int p, int mod) {
    int  res =  1; 
    while(p) {
        if(p&1) {
            res = (res*base) %mod;
            p--;
        }
        else {
            base = (base*base)%mod;
            p/=2;
        }
    }

    return res%mod;
}


int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    freopen("input/input.txt", "r", stdin);
    freopen("input/output.txt", "w", stdout);

    int t; cin>> t;
    while(t--) {
        int a, b, m; cin>> a >> b >> m; // (a/b)%mod
        int x = power(b, m-2, m);
        int ans = (a*x)%m;
        cout << ans << endl; 
    }
 

    return 0;
}



