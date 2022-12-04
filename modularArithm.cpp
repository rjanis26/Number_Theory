/* #include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define llu unsigned long long int 

void solve(string str, int mod) {
    int ans = 0;
    for(int i=0; i<str.length(); i++) {
        ans = ans*10 + str[i] -'0';
        ans %= mod;
    }

    (ans%mod == 0) ? cout <<"Yes\n" : cout <<"No\n";
}

int main()
{

    freopen("input/input.txt", "r", stdin);
    freopen("input/output.txt", "w", stdout);

    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int test; cin>> test;
    while(test--) {
        string str; cin>> str;
        int mod; cin>> mod;
        solve(str, mod);
    }
 

    return 0;
} */

/* 
#include<bits/stdc++.h>
using namespace std;
#define enld '\n'
#define ll long long int
#define llu unsigned long long int 

void solve(string str, int mod) {
    int ans= 0;
    for(int i=0; i<str.length(); i++) {
        ans = ans*10 + str[i] - '0';
        ans %= mod;
    }

    (ans%mod == 0) ? cout << "Yes\n" : cout <<"No\n";
}

int main()
{

    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    // for input and output file 
    // this is take input and output from file 

    freopen("input/input.txt", "r", stdin);    
    freopen("input/output.txt", "w", stdout);    


    int test; cin>> test;
    while(test--) {
        string str; cin>> str; 
        int mod; cin>> mod;
        solve(str, mod);
    }
 
 
    return 0;
} */


 /* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int 

bool solve(string str, int mod) {
    int ans = 0; 
    for(int i=0; i<str.length(); i++) {
        ans = ans*10 + str[i] - '0';
        ans %= mod;
    }

    return (ans%mod == 0);
}

int main()
{

    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0); 

    freopen("input/input.txt", "r", stdin);    
    freopen("input/output.txt", "w", stdout);    

    int test; cin>> test;
    while(test--) {
        string str; cin>> str;
        int mod; cin>> mod;
        (solve(str, mod)) ? cout <<"Yes\n": cout <<"No\n";
    }
 

    return 0;
}  

  */



#include<bits/stdc++.h>
using namespace std; 
#define enl '\n' 
#define ll long long int 


int solve(string str, int mod) {
    int ans = 0;
    for(int i=0; i<str.length(); i++) {
        ans = ans*10 + str[i] - '0';
        ans %= mod;
    }

    return (ans%mod==0);
}


int main()
{

    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    freopen("input/input.txt", "r", stdin);
    freopen("input/output.txt", "w", stdout);

    int t; cin>>t;
    while(t--) {
        string str; cin>> str; 
        int mod; cin >> mod;
        (solve(str, mod)) ? cout <<"Yes\n": cout<<"No\n";
    }
 

    EXIT_SUCCESS;
}








