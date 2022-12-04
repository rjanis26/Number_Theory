/* #include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long 
#define m 10e+7


int solve(ll b, ll p)  {
    ll res = 1;
    while(p) {
        if(p&1) {
            res *= b;
            p--;
        }
        else {
            b *= b;
            p/=2;
        }
    }

    return res;
}


int main()
{

    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    //for input/ output...
    freopen("input/input.txt", "r", stdin);
    freopen("input/output.txt", "w", stdout);


    int test; cin>> test;
    while(test--) {
        ll b,p; cin>>b >> p;
        cout << solve(b, p) << endl;
    }
     
    return 0;
}
 
 */

/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int 
#define mod 100000007


int solve (ll b, ll p) {
    ll res = 1; 
    while(p) {
        if(p%1) {
            res = (res*b)%mod;
            p--;
        }
        else  {
            res = (b*b)%mod;
            p/=2;
        }
    }
    return res;
}


int main()  
{   
    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    freopen("input/input.txt", "r", stdin);
    freopen("input/output.txt", "w", stdout);

    int t;   cin>> t;
    while(t--) {
        ll b, p; cin>> b >> p;
        cout << solve(b, p)<< endl;
    }


    return 0;
}
 */


#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define llu unsigned long long int 
#define ll long long int 

int solve(ll b, ll p, int mod) {
    ll res = 1;
    while(p) {
        if(p&1) {
            res = (res*b)%mod;
            p--;
        }
        else {
            b = (b*b)%mod;
            p/=2;
        }
    }

    return res;
}

int main() 
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);


    int p; cin>> p;
    cout<< solve(8, p, 10)<< endl;

    // freopen("input/input.txt", "r", stdin);
    // freopen("input/output.txt", "w", stdout);


    // int t; cin>> t;
    // while(t--) {
    //     int b, p;cin>> b >> p;
    //     cout << solve(b, p, 10e7)<< endl;
    // }

 
    return 0;

}