// https://leetcode.com/problems/decode-ways/
// Completed on 25 March, 2022
#include <bits/stdc++.h>
using namespace std;

vector<int>dp;

// using bottom down approach
int numDecodings(string s) {
    vector<int>dp(s.size()+1, 0);
    
    int size = s.size();
    
    if (size == 1) return s[0]-'0' == 0 ? 0 :1;
    
    dp[size] = 1;
    dp[size-1] = (s[size-1] == '0') ? 0 : 1;
    
    
    for ( int i = size-2; i>= 0; i--) {
        int val1 = s[i] - '0';
        int val2 = 10*(s[i]-'0') + s[i+1]-'0';
        
        if (val1 == 0) 
            dp[i] = 0;
            else 
                dp[i] = (val1 > 0 )*dp[i+1] + (val2 > 0 and val2 < 27)*dp[i+2];
        
    }

    
    return dp[0];
    
}

int decode(string s, int i) {

    int val1 = s[i] - '0';
    if (i == s.size() or val1 == 0) {
        return dp[i] = 0;
    }
    if (i == s.size()-1) {
        return dp[i] = 1;
    }
    
    int val2 = 10*(s[i]-'0') + s[i+1]-'0';

    if (i == s.size()-2 and (val1 > 0 and val1 < 27) ) {
        if (val2 == 10 or val2 == 20)return dp[i] = 1;
        return dp[i] = 2;
    } 

    return dp[i] = (val1 > 0 and val1 < 27)*dp[i+1] + (val2 > 0 and val2 < 27)*dp[i+2];
    

}

int main() { cout << endl << endl << "######################################"<< endl << endl;

    string s = "123";






    cout << endl << "######################################";
    return 0;
}