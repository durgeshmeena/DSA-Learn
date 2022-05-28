#include <bits/stdc++.h>
using namespace std;



int helper(string A, string B, unordered_map<string, int>&dp) {
    if(A == B)
        return dp[A+B] = 1;

    else if (A.size() <= 1)
        return dp[A+B] = 0;

    int n = A.size();
    bool flag = 0;

    for(int i=1; i<n; i++){

        if( helper(A.substr(0,i), B.substr(0, i)) * helper(A.substr(i), B.substr(i) )  ) {
            flag = 1;
            break;
        }
        if( helper(A.substr(0, i), B.substr(n-i, i)) * helper(A.substr(i, n-i), B.substr(0, n-1) )) {
            flag = 1;
            break;
        }

    }      
    return dp[A+B] = flag;  
}


int isScramble(const string A, const string B) {
    unordered_map<string, int>dp;
    return helper(A, B, dp);

}


int main() { cout << endl << endl << "######################################"<< endl << endl;

    


    cout << endl << "######################################";
    return 0;
}