// https://www.interviewbit.com/problems/edit-distance/
// Completed on 17 May, 2022

#include <bits/stdc++.h>
using namespace std;

int minDistance(string A, string B) {

    int n = A.size();
    int m = B.size();

    vector< vector<int> >dp(n+1, vector<int>(m+1));
    for(int i=0; i<=n; i++) dp[i][0]=i;
    for(int j=0; j<=m; j++)dp[0][j]=j;
  

    for(int i=1; i<=n; i++)
     for(int j=1; j<=m; j++){
      if (A[i-1] == B[j-1])
            dp[i][j] = dp[i-1][j-1];
        else
            dp[i][j] = 1 + min(dp[i-1][j-1],min(dp[i][j-1], dp[i-1][j]) );        
    }
    return dp[n][m];
}






int main() { cout << endl << endl << "######################################"<< endl << endl;

    string A = "aac";
    string B = "abac";

    cout << minDistance(A,B) << endl;
    


    cout << endl << "######################################";
    return 0;
}