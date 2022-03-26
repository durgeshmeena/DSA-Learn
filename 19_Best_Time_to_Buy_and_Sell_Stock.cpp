// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// Trying 

#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int minn = INT_MAX;
    int maxp = 0;

    for (auto & x: prices) {
        minn = min(minn, x);
        maxp = max(maxp, x - minn);
    }
    return maxp;
}


int main() { cout << endl << endl << "######################################"<< endl << endl;

    vector<int> prices = {7,1,5,3,6,4};

    cout << maxProfit(prices) << endl;

    cout << endl << "######################################";
    return 0;
}