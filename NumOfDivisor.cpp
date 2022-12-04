
// bruth force solution: TC: O(n)
/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int 
#define llu unsigned long long int 

int solve(int n) {
    vector<int> ans;
    for(int i=1; i<=n; i++) {
        if(n%i == 0) ans.push_back(i);
    }

    return ans.size();
}

int main()
{
    ios_base :: sync_with_stdio(false); 
    cin.tie(0); cout.tie(0);

    freopen("input/input.txt", "r", stdin);
    freopen("input/output.txt", "w", stdout);

    int test; cin>> test;
    while(test--) {
        int n; cin>> n;
        cout << solve(n) << endl;
    }
     

    return 0;
}

  */

// optimize solutions...
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int 
#define llu unsigned long long int 

set<int> ans;
void countDivisor(int n) {
    for(int i=1; i<=sqrt(n); i++) {
        if(n%i == 0) {
            int x = i;
            int y = n/i;
            ans.insert(x);
            ans.insert(y);
        }
    }
}


int main()
{
    ios_base :: sync_with_stdio(false); 
    cin.tie(0); cout.tie(0);

    freopen("input/input.txt", "r", stdin);
    freopen("input/output.txt", "w", stdout);

    int test; cin>> test;
    while(test--) {
        int n; cin>> n;
        countDivisor(n);
        cout << ans.size() << endl;
        for(auto it: ans) cout << it <<" ";
        cout << endl;
        ans.clear();
         
    }
      

    return 0;
}

 