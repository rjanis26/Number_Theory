#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int 
#define llu unsigned long long int 

int gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a%b);
}

int main()
{
    freopen("input/input.txt", "r", stdin);
    freopen("input/output.txt", "w", stdout);

    int test; cin>> test;
    while(test--) {
        int a, b; cin>> a >> b;
        cout << gcd(a, b) << endl;
    }

 
    return 0; 
}



