/* #include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int 
#define llu unsigned long long int 
  

int gcd(int a, int b) {
    return (b==0) ? a : gcd(b, a%b);
}

int solve(int n)  {
    int count(0);
    for(int i=1; i<=n; i++) {
        if(gcd(i,n) == 1) count++;
    }

    return count;
}

int main()
{   
    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    // input from file
    freopen("input/input.txt", "r", stdin);
    freopen("input/output.txt", "w", stdout);
    
    int n; cin>>n;
    cout << solve(n) << endl;

 

    return 0;

} */



/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int 
#define llu unsigned long long int 

void solution(int n) {
    int ans = n;
    for(int i=2; i*i<=n; i++) {
        if(n%i==0) {
            int count =0;
            while(n%i == 0) {
                n/=i;
                count++;
            }
            ans *= (i-1);
            ans/=i;
        }
    }

    if(n>1) {
        ans *= n-1;
        ans/=n;
    }

    cout << ans << endl;
}
 
int main()
{   
    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    // input from file
    freopen("input/input.txt", "r", stdin);
    freopen("input/output.txt", "w", stdout);
    
    int test; cin>> test;
    while(test--) {
        int n; cin>> n;
        solution(n);
        cout << endl;

    }
 

    return 0;

} */


#include<bits/stdc++.h>
using  namespace  std;

void phi(int n)
{
    int ans=n;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            int cnt=0;
            while(n%i==0)
            {
                n/=i;
                cnt++;
            }
            //cout<<i<<"^"<<cnt<<endl;
            ans*=(i-1);
            ans/=i;
        }
    }
    if(n>1)
    {
        //cout<<n<<"^"<<1<<endl;
        ans*=n-1;
        ans/=n;
    }
    cout<<ans<<endl;
}

int main()
{

     freopen("input/input.txt", "r", stdin);
    freopen("input/output.txt", "w", stdout);
    
    int n;
    cin>>n;
    phi(n);
}






