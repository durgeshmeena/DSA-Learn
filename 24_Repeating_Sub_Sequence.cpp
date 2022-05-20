// https://www.interviewbit.com/problems/repeating-subsequence/
// Completed on 17 May, 2022

#include <bits/stdc++.h>
using namespace std;



int anytwo(string A) {
    string B = A;

    int n = A.size();
    int dp[n+1][n+1];

    for(int i=0;i<=n; i++)
        for(int j=0; j<=n; j++){
            if (i==0 || j==0)
                dp[i][j] = 0;

            else if (A[i-1] == B[j-1])
                if (i != j)
                    dp[i][j] = 1+dp[i-1][j-1];
                else
                    dp[i][j] = max(dp[i][j-1], dp[i-1][j]);  

            else
                dp[i][j] = max(dp[i][j-1], dp[i-1][j]);        
        }

    return dp[n][n];    

}







int main() { 
    cout << endl << endl << "######################################"<< endl << endl;

    string A = "aabebcdd";


    cout << anytwo(A) << endl;


    cout << endl << "######################################";
    return 0;
}