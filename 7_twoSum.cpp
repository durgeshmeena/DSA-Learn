#include <bits/stdc++.h>
using namespace std;

// twoSum function return vector ans with the indices of the two numbers whose sum is equal to the target.
vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> ans;
    unordered_map<int, int> m;
    for(int i = 0; i < nums.size(); i++) {
        if(m.find(target - nums[i]) != m.end()) {
            ans.push_back(m[target - nums[i]]);
            ans.push_back(i);
            return ans;
        }
        m[nums[i]] = i;
    }
    return ans;
}

// 
vector<int> twoSum3(vector<int>& nums, int target) {
    vector<int>v;

    for (int i=0; i<nums.size(); i++) {
        auto it = find(nums.begin()+i+1, nums.end(), target-nums[i]);
        
        if (it != nums.end() ) {
            v.push_back(i);
            v.push_back( it - nums.begin() );
            break;
        }

        
    }
    return v;
}    


// twoSum function return vector ans with the indices of the two numbers whose sum is equal to the target using two pointers.
vector<int> twoSum2(vector<int>& nums, int target) {
    vector<int> ans;
    int l = 0, r = nums.size() - 1;
    while(l < r) {
        if(nums[l] + nums[r] == target) {
            ans.push_back(l);
            ans.push_back(r);
            return ans;
        }
        else if(nums[l] + nums[r] < target)
            l++;
        else
            r--;
    }
    return ans;
}




int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        // freopen("output.txt", "w", stdout);
    #endif

    vector<int>v = {3,2,4};
    int target = 6;

    vector<int> ans = twoSum(v, target);
    vector<int> ans3 = twoSum3(v, target);

    for(auto x: ans)
        cout << x << " ";

    cout << "\n" << endl;

    for (auto x: ans3)
        cout << x << " ";
        
    

    return 0;
}

    /*
        vector<int> v;
        unordered_map<int, int> map;
        
        for (int i=0; i<nums.size(); i++) {
            auto it = map.find(target - nums[i]);
            if (it == map.end())
                map[nums[i]] = i;
            else {
                v.push_back(i);
                v.push_back( it->second );
            }
                
        }
        return v;

    */