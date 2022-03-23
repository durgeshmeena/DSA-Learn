// https://leetcode.com/problems/min-cost-climbing-stairs/
// Completed on 12 Mar, 2022

#include <bits/stdc++.h>
using namespace std;

int minCostClimbingStairs(vector<int>& cost) {
        
    int n = cost.size();
    vector<int> dp(n, 0);
    
    dp[n-1] = cost[n-1];
    dp[n-2] = cost[n-2];

    for (int i=n-3; i>=0; i--) {
        dp[i] = cost[i] + min( dp[i+1], dp[i+2]);
    }

    cout << "0-> " << dp[0] << "\n" << "1-> " << dp[1] << "\n" << "2-> " << dp[2] << "\n" << "3-> " << dp[3] << "\n" << "4-> " << dp[4] << "\n" << "5-> " << dp[5] << "\n" << "6-> " << dp[6] << "\n" << "7-> " << dp[7] << "\n" << "8-> " << dp[8] << "\n" << "9-> " << dp[9] << "\n";
  
    return min(dp[0], dp[1]);

}

int main() { cout << endl << endl << "######################################"<< endl << endl;

    // vector<int> cost = {10, 15, 20};
    vector<int> cost = {1, 100, 1, 1, 1, 100, 1, 1, 100, 1};

    cout << minCostClimbingStairs(cost) << endl;

    


    cout << endl << "######################################";
    return 0;
}