#include <bits/stdc++.h>
using namespace std;

int diff(string s1, string s2){
    int res = 0;
    for(int i=0; i<s1.size(); i++){
        res += s1[i] != s2[i];
    }
    return res;
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    vector<int> nums = {2,2,3,3,3,4};
    unordered_map<int, int> val;
    for(auto e : nums)
        val[e] += e;

    for(auto v : val)
        cout << v.first << ": " << v.second << endl;

        cout << val[1000] << endl;

    set<int> s(nums.begin(), nums.end());
    vector<int> v(s.begin(), s.end());
    sort(v.begin(), v.end());
    
    cout << endl;
    for(auto e : v)
        cout << e << " ";

    
    

    

    return 0;
}