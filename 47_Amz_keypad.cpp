#include <bits/stdc++.h>
using namespace std;

int Amz_keypad(string s){


    // create priority queue
    vector<int> res(26, 0);
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i=0; i<9; i++){
        pq.push(1);
    }

    
    
    unordered_map<char, int> count; 

    for(int i=0; i<s.size(); i++){
        count[s[i]]++;
    }

    vector<pair<char, int>> v(count.begin(), count.end());

    sort(v.begin(), v.end(), [](pair<char, int> a, pair<char, int> b){
        return a.second > b.second;
    });

    for(auto it : v){
        int alpha = it.first;
        int count = it.second;
        int min_count = pq.top(); pq.pop();
    
        res[alpha-'a'] = count*min_count;
        pq.push(min_count + 1);
    }

    return accumulate(res.begin(), res.end(), 0);

}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    string s = "abacadefghibj";

    cout << Amz_keypad(s);
    

    return 0;
}