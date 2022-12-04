

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
const int n =  1000001;
vector<int>ans[n];

void solve() {
    for(int i=1; i<n; i++) {
        int num= i;
        for(int j=2; j<=sqrt(num); j++) {
            if(num%j == 0) {
                ans[i].push_back(j);
                while(num%j ==0) num/=j;
            }
        }

        if(num >2) ans[i].push_back(num);
    }
} 

int query(int num, int n) {
    return ans[num][n-1];
}

int main()
{

    freopen("input/input.txt", "r", stdin);
    freopen("input/output.txt", "w", stdout);

    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solve();
    int test; cin>> test;
    while(test--) {
        int num,n; cin>> num>>n;
        cout << query(num, n)<< endl;
    }

 
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{

    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
 
    return 0;
}