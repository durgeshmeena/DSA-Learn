// https://leetcode.com/problems/n-th-tribonacci-number/
// Completed on 12 March, 2022

#include <bits/stdc++.h>
using namespace std;

int tribonacci(int n) {
    vector<int> dp(n+1);
    
    if (n < 2) return n;

    dp[0] = 0, dp[1] = 1, dp[2] = 1;
    
    for (int i=3; i<=n; i++) {
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    }
    
    return dp[n];
}
// Doubt: why vector dp size should be n+3?. less than n+3 giving runtime error. I thought of n+1; 
// It is; error was coming because of 0/1 case (base case)
// keeping vector size as n+3 runs faster than adding if condition of checking n < 2; 

int main() { cout << endl << endl << "######################################"<< endl << endl;

    int n = 37;

    cout << tribonacci(n) << endl;


    cout << endl << "######################################";
    return 0;
}