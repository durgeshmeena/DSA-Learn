#include <bits/stdc++.h>
using namespace std;

int dp[1000][1000] = {-1};
//function minCostClimbingStairs which return min cost climbing stairs using top down approach

int minCostClimbingStairs(vector<int>& cost, int i, int j) {
    if (i > j)
        return 0;
    if (i == j)
        return cost[i];
    if (dp[i][j] != -1)
        return dp[i][j];
    int min1 = minCostClimbingStairs(cost, i + 1, j);
    int min2 = minCostClimbingStairs(cost, i + 2, j);
    dp[i][j] = cost[i] + min(min1  , min2 );
    return dp[i][j];
}

//function minCostClimbingStairs which return min cost climbing stairs using bottom to top approch dynamic programming
int minCostClimbingStairs(vector<int>& cost) {
    int n = cost.size();
    for (int i = n - 1; i >= 0; i--) {
        if (i == n - 1)
            dp[i][i] = cost[i];
        else {
            dp[i][i] = cost[i];
            dp[i][i + 1] = cost[i] + min(dp[i + 1][i + 1], dp[i + 2][i + 2]);
        }
    }
    return dp[0][n - 1];
}



int main() { cout << endl << endl << "######################################"<< endl << endl;

    vector<int> v = {10, 15, 20};
    int i = 0, j = v.size() - 1;

    cout << minCostClimbingStairs(v, i, j) << endl;
    


    cout << endl << "######################################";
    return 0;
}