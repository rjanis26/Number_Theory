/* // permality_test.cpp
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int 

bool prime(int n)  {
    for(int i=2; i<n; i++) {
        if(n%i == 0) return false;
    }

    return true;
}

int main()
{   

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int tst; cin>> tst;
    while(tst--) {
    int n; cin>>n;
    (prime(n)) ? printf("Yes\n"):printf("No\n");

    }
 
    return 0;
} */
 /* 

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long 

void print_arr(int arr[], int n) {
    for(int i=0; i<n; i++) {
        if(arr[i]&1) printf("%d ", arr[i]);
    } 
    printf("\n");
     
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n; scanf("%d", &n);
    int arr[n+2];
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);

    print_arr(arr, n);

    return 0;
} */


 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long 

bool is_prime(int n) {
    if(n<2) return false;
    if(n<=3) return true;
    if(n%2 == 0) return false;

    for(int i = 3; i*i <=n; i+= 2) {
        if(n%i == 0) return false;
    }
    return true;
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
     
    
    int test; cin>> test;
    while(test--) {
        int n; cin>> n;
        (is_prime(n)) ? printf("Yes\n"): printf("No\n");
    }
  
    return 0;
}