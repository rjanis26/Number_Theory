
// https://www.geeksforgeeks.org/prime-factor/

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int distinct_prime(vector<int>&arr) {
    unordered_set<int> res;
    
    // iterate over every element of arrr.
    for(int i=0; i<arr.size(); i++) { 
        int sq = sqrt(arr[i]);
        for(int j=2; j<=sq; j++) {
            if(arr[j] %j == 0) {
                res.insert(j);
                while(arr[i]%j == 0) arr[i]/=j;
            }
        }

        if(arr[i] > 1) res.insert(arr[i]);
    }

    return res.size();
}

int main()
{

    freopen("input/input.txt", "r", stdin);
    freopen("input/output.txt", "w", stdout);

    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int test; cin>> test;   
        while(test--) {
            int n; cin>> n;
        vector<int> arr(n);

        for(int i=0; i<n; i++) {
            int d; cin>> d;
            arr.push_back(d);
        }

        cout << distinct_prime(arr) << endl;
    }
 
    return 0;
}