/* #include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int 

void seive(int n) {
    int prime[n+2];
    memset(prime, 0, sizeof(prime));

    for(int i=2; i*i<=#n; i++) {
        if(prime[i] == 0) {
            for(int j=i*i; j<=n; j+=i) 
                prime[j] = 1;
        }

        for(int i=2; i<n; i++) {
            if(prime[i] == 0) 
                cout << i <<" ";
            printf("\n");
        }
    }
}

int main()
{  

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int test; cin>> test;
    while(test--) {
        int n; cin>>n;
        seive(n);
        cout << endl;
    }
    
    return 0;
} */


#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

void sieve(int n)  {
    bool prime[n+2];
    memset(prime,true, sizeof(prime));

    for(int i=2; i*i<=n; i++) {
        if(prime[i] == true) {
            for(int j=i*i; j<=n; j+=i) 
                prime[j] = false;
        }
    }

    // print all prime numbers..
    for(int i=2; i<=n; i++) {
        if(prime[i]) 
            printf("%d ", i);
    }
}

int main()
{

    // file input....
    freopen("input/input.txt", "r", stdin);
    freopen("input/output.txt", "w", stdout);

    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);


    int test; scanf("%d", &test);
    while(test--) {
        int n; scanf("%d", &n);
        sieve(n);
        printf("\n");
    } 
 
    return 0;
}

