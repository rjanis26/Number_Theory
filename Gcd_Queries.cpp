 #include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int 
#define llu unsigned long long int 

int gcd(int a, int b) {
    return (b == 0)? a : gcd(b, a%b);
}

void solve() {
    int n, q; cin>> n >> q;
    int arr[n+3];

    for(int i=1; i<=n; i++) cin >> arr[i];  
    int pre[n+2], post[n+3];
    pre[0] = 0;
    for(int i=1; i<=n; i++) pre[i] = gcd(pre[i-1], arr[i]);
    
    post[n+1] = 0;
    for(int i=n; i>=1; i--) post[i] = gcd(post[i+1], arr[i]);

    while(q--) {
        int l, r; cin>> l >> r;
        cout << gcd(pre[l-1], post[r+1]) << endl;
    }
}

int main()
{   
    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t; cin>> t;
    while(t--) {
        solve();

    }

    return 0;
}


// another way to sovle the problem .
// using bulit_in gcd function
 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int gcd(int a, int b) {
    return (b == 0)? a : gcd(b, a%b);
}

void solve() {
   int n, q; cin>>n >> q;
   vector<int> arr(n+2, 0);
   vector<int> pre(n+2, 0);
   vector<int> suf(n+2, 0);

   for(int i=1; i<=n; i++) 
        cin>> arr[i];
    
    for(int i=1; i<=n; i++) 
        pre[i] = __gcd(pre[i-1], arr[i]);
    
    for(int i=n; i>=1; i--) 
        suf[i] = __gcd(suf[i+1], arr[i]);
    
    while(q--)  {
        int l, r; cin>> l >> r;
       cout << __gcd(pre[l-1], suf[r+1]) << endl;
    }
}

int main() 
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int test; cin>> test;
    while(test--) {
        solve();
    }
    

    return 0;
}
 


 
 