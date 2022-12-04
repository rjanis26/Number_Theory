/* 
#include<bits/stdc++.h> 
using namespace std;
#define endl '\n'
#define ll long long int 
#define llu unsigned long long int 

void prime_factor(int n) {
    for(int i=2; i*i<=n; i++) {
        if(n%i == 0) {
            int count(0);
            while(n%i == 0) {
                count++;
                n/=i;
            }

            cout <<i<<"^"<< count << ",";
        }
    }

    if(n>1) cout << n<< "^" << 1 << endl;
}


int main()
{   
    freopen("input/input.txt", "r", stdin);
    freopen("input/output.txt", "w", stdout);
    
    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);    
    
    int t; cin>> t;
    while(t--) {
        int n; cin>>n;
        prime_factor(n);
    }
     
    return 0;
}
 */



/*  
As we know that every number >=2 can be represented as natural powers of primes(prime factorization). Also prime factorization is unique for a number. 
Eg. 360 = 233251
 */
 

#include<bits/stdc++.h> 
using namespace std;
#define endl '\n'
#define ll long long int 
#define llu unsigned long long int 

int solve(int n) { 
    for(int i=2; i*i<=n; i++) {
        int count= 0;
        while(n%i == 0) {
            count++;
            n/=i;
        }

        if(count>1) return 0;
    }

    return 1;
}


int main()
{   
    freopen("input/input.txt", "r", stdin);
    freopen("input/output.txt", "w", stdout);
    
    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);    
    
    int test; cin>>test;
    while(test--) {
        int n; cin >> n;
        cout << solve(n) << endl;
    }
      
    return 0;
}
