
// problem link:https://www.spoj.com/problems/TDKPRIME/
 

#include<bits/stdc++.h>
using namespace  std;
#define endl '\n'
#define ll long long int 
#define llu unsigned long long int 

int n = 90000000;
bool prime[90000001];
vector<int> ans;

void seive() {
    for(int i=2; i*i<=n; i++) {
        if(prime[i] == false) {
            for(int j=i*i; j<=n; j+=i) 
                prime[j] = true;
        }
    }

    for(int i=2; i<=n; i++) {
        if(prime[i] == false) ans.push_back(i);
    }
}
 

int main() 
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    seive();
    int test; cin>> test;
    while(test--) {
        int n; cin>>n;
        cout << ans[n-1] << endl;
    }

    return 0;
}