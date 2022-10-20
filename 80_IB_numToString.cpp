#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
void init() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#else
#endif
}


int main() {
    init();

    string A = "28440447";

    vector<string> ones = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    vector<string> teens = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    vector<string> tens = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    
    vector<string> place = {"hundred-", "thousand-", "lakh-", "crore-"};
    int n = A.size();
    
    auto numToString = [&](int ind, auto &numToString){
        if(ind == n-1){
            return ((n>2 and A[n-2]=='0')?"and-":"") + ones[A[ind]-'0'];
        }
        else if( ind==n-2){
            if(A[ind]=='0') return numToString(ind+1, numToString);
            else if(A[ind]=='1' )
                return ((n>2)?"and-":"") + teens[A[ind+1]-'0'] + "-";
            else
                return ((n>2)?"and-":"") + tens[A[ind]-'0']  + "-" + numToString(ind+1, numToString);       
        }
        else if(ind==n-3){
            if(A[ind]=='0')return numToString(ind+1, numToString);
             
            return ones[A[ind]-'0']  + "-" + "hundred-" + numToString(ind+1, numToString); 
        }
        
        
        if(A[ind]=='0')return numToString(ind+1, numToString);

        else if((n-ind)%2==0){
            return ones[A[ind]-'0']  + "-" + place[(n-ind)/2 - 1]  + numToString(ind+1, numToString);
        }
        else{

            if(A[ind]=='1' )
                return teens[A[ind+1]-'0'] + "-" + place[(n-ind)/2 - 1] + numToString(ind+2, numToString);
            
            return tens[A[ind]-'0']  + (A[ind+1]=='0'?"":"-") + ones[A[ind+1]-'0'] + "-" + place[(n-ind)/2 - 1] + numToString(ind+2, numToString);
    
        }
    
        
    };

    string s =  numToString(0, numToString);
    if(s.back()=='-')s.pop_back();
    if(s.size()>3 and s.substr(s.size()-3, 3)=="and") s = s.substr(0, s.size()-4);
    cout << s << endl;


    
}
