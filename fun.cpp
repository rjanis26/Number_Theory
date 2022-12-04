/* // Program to convert a given number to words
 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

string convertToWords(long n) {
    // code here
    
    string ones[10]={"","one ","two ","three ","four ","five ","six ","seven ","eight ","nine "};
    string tens1[10]={"ten ","eleven ","twelve ","thirteen ","fourteen ","fifteen ","sixteen ","seventeen ","eighteen ","nineteen "};
    string tens2[10]={"","","twenty ","thirty ","forty ","fifty ","sixty ","seventy ","eighty ","ninety "};
    string bigger[4]={"hundred","thousand ","lakh ","crore "};
    int i=0;
    string ans="";
    int flag=0,hundred;
    while(n>0){
        string str="";
        int one=n%10;
        n/=10;
        int ten=n%10;
        n/=10;
        if(ten==0){
            str = ones[one];
        }
        else{
            if(ten==1){
                str=tens1[one];
            }
            else{
                str=tens2[ten]+ones[one];
            }
        }
        if(i==0){
            hundred=n%10;
            n=n/10;
        }
        if(i==0 && hundred!=0){
            if(str.size()>1)str=ones[hundred]+"hundred and "+str;
            else{
                str=ones[hundred]+"hundred ";
            }
            flag=1;
            }
        else if(i>=1 and str.size()>1){
            if(flag==1)str += bigger[i];
            else{
                str += bigger[i]+"and ";
                flag=1;
            }
        }
        ans+= str;
        i++;
        
    }
    
    return ans;

}


int main()
{       

     freopen("input/input.txt", "r", stdin);
    freopen("input/output.txt", "w", stdout);

    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int test;cin>> test;
    while(test--) {
        long n; cin>> n;
        cout << convertToWords(n) << endl;
    }


    EXIT_SUCCESS;
}
 */
/* 

string ones[20] = {"","one ", "two ","three ","four ", "five ","six ","seven ","eight ","nine ","ten ","eleven ","twelve ","thirteen ","fourteen ","fifteen ","sixteen ","seventeen ","eighteen ","nineteen "};
string tens[10] = {"","","twenty ","thirty ","forty ","fifty ","sixty ","seventy ","eighty ","ninety "};

  string numToWord(int n , string s)
  {
      string str="";
      if(n>19)
      {
          str += tens[n/10] + ones[n%10]; // 43 = forty + three  
      }
      else
      {
          str += ones[n];
      }
      if(n)
      str += s; // crore
      
      return str; // fourty three crore 
  }

   string convertToWords(long n) // n = 438237764
   {
       string res;
       res += numToWord((n/10000000),"crore "); // 43 , crore = forty three crore
       res += numToWord((n/100000)%100,"lakh "); // 82 , lakh = eighty two lakh
       res += numToWord((n/1000)%100,"thousand "); // 37 , thousand = thirty seven thousand
       res += numToWord((n/100)%10,"hundred "); // 7 , hundred = seven hundred
       if( n>100 && n%100 )
       {
           res += "and "; // it will add "and" if there is a number which is smaller then 100 like 746 = Seven hundred and fourty six
       }
       res += numToWord((n%100),""); // 64 ,  = sixty four
       
       return res;  
   } */



// #include<bits/stdc++.h>
// using namespace std;
// #define endl '\n'


// int main()
// {
//     ios_base :: sync_with_stdio(false);
//     cin.tie(0); cout.tie(0);

//     int test; cin>> test;
//     while(test--) {
//         int n; cin>> n; 

//     }
 

//     return  0;
// }
 




#include <bits/stdc++.h>
using namespace std;
 
class Solution{   
public:
    string convertToWords(long n) {
        
    string ones[10]={"","one ","two ","three ","four ","five ","six ","seven ","eight ","nine "};
    string tens1[10]={"ten ","eleven ","twelve ","thirteen ","fourteen ","fifteen ","sixteen ","seventeen ","eighteen ","nineteen "};
    string tens2[10]={"","","twenty ","thirty ","forty ","fifty ","sixty ","seventy ","eighty ","ninety "};
    string bigger[4]={"hundred","thousand ","lakh ","crore "};
    int i=0;
    string ans="";
    int flag=0,hundred;
    while(n>0){
        string str="";
        int one=n%10;
        n/=10;
        int ten=n%10;
        n/=10;
        if(ten==0){
            str = ones[one];
        }
        else{
            if(ten==1){
                str=tens1[one];
            }
            else{
                str=tens2[ten]+ones[one];
            }
        }
        if(i==0){
            hundred=n%10;
            n=n/10;
        }
        if(i==0 && hundred!=0){
            if(str.size()>1)str=ones[hundred]+"hundred and "+str;
            else{
                str=ones[hundred]+"hundred ";
            }
            flag=1;
            }
        else if(i>=1 and str.size()>1){
            if(flag==1)str += bigger[i];
            else{
                str += bigger[i]+"and ";
                flag=1;
            }
        }
        ans = str + ans;
        i++;
        
    }
    
    return ans;
}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        long n;
        cin >> n;
        Solution ob;
        auto ans = ob.convertToWords(n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends