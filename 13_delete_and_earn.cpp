// https://leetcode.com/problems/delete-and-earn/
// Completed on 11 March, 2022

#include <bits/stdc++.h>
using namespace std;

int deleteAndEarn(vector<int>& nums) {
    
    map<int, int> m;
    
    for (int i=0; i<nums.size(); i++) {
        m[nums[i]] += nums[i];
    }

    cout << "Map Size = "<< m.size() << endl;
    for (auto x: m) {
        cout << x.first << " -> " << x.second << endl;
    }
    
    int m_s = m.size();
    auto it = m.begin();
    
    if (m_s == 1) return it->second;
    if (m_s == 2) {
        int k1, k2, v1, v2;
        k1 = it->first;
        v1 = it->second;

        ++it;

        k2 = it->first;
        v2 = it->second;

        return abs(k1-k2) != 1 ? v1 + v2 : max(v1, v2);

    }
    
        
    vector<int> dp(m_s+1);   
    
    dp[1] = it->second;
    int k1, k2, v1, v2;
    k1 = it->first;
    v1 = it->second;
    ++it;
    k2 = it->first;
    v2 = it->second;
    dp[2] = abs(k1-k2) != 1 ? v1 + v2 : max(v1, v2);
    
    int i=3;
    
    ++it;
    
    for (; it != m.end(); it++) {

        auto pre = prev(it, 1);

        if ( abs(it->first - pre->first) == 1 ) {
            dp[i] = max(dp[i-1], dp[i-2] + it->second);
        } else {
            dp[i] = dp[i-1] + it->second;
        }

        
        i++;
    }
    return dp[m_s];
}


int main() { cout << endl << endl << "######################################"<< endl << endl;

    vector<int> num = {1,3,4,5,5};

    cout << deleteAndEarn(num) << endl;


    cout << endl << "######################################";
    return 0;
}