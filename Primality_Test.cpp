
// problem Link: https://www.codechef.com/problems/PRB01

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int 

bool is_prime(int n) {
    if(n<2) return false;
    if(n<=3) return true;
    if(n%2==0) return false;

    for(int i=3; i*i<=n; i+=2) {
        if(n%i == 0) return false;
    }

    return true;
}
 

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int test; scanf("%d", &test);
    while(test--) {
        int n; scanf("%d", &n);
        (is_prime(n)) ? printf("yes\n"): printf("no\n");
    }
 
    return 0;
}