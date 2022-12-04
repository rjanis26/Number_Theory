#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define llu unsigned long long int 

int solve(int n) {
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
   return ans;
}

int main()
{

    ios_base ::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n;  cin>> n;
    cout << solve(n) << endl;

    return 0;
}