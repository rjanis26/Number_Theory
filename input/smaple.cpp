

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int 
 

string solve(ll n)  {
    string ones[10] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string tens1[10]={"ten ","eleven ","twelve ","thirteen ","fourteen ","fifteen ","sixteen ","seventeen ","eighteen ","nineteen "};
    string tens2[10]={"","","twenty ","thirty ","forty ","fifty ","sixty ","seventy ","eighty ","ninety "};
    string bigger[4]={"hundred","thousand ","lakh ","crore "};

    string ans= "";
    int i=0, flag = 0, hundred;
    while(n> 0)  {
        string str = "";
        int one = n%10;
        n/=10;
        int ten = n%10;
        n/=10;

        if(ten == 0) 
            str = ones[one];
        else {
            if(ten == 1) str = tens1[one];
            else str = tens2[ten]+ ones[one];
        }

        if(i==0) {
            hundred = n%10;
            n/=10;
        }

        if(i==0 and hundred!=0) {
            if(str.size()>1) str = ones[hundred] +"hundred and " + str;
            else str = ones[hundred] + "hundred ";
            flag = 1;
        }

        else if(i>=1 and str.size()>1) {
            if(flag == 1) str += bigger[i];
            else {
                str += bigger[i] + "and ";
                flag = 1;
            }
        }
         
        ans += str;
        i++;
    }

    return ans;
}

int main() 
{   
    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int test; cin>> test;
    while(test--) {
        int n; cin>>n;
        cout << solve(n) << endl;
    }





    return 0;
}