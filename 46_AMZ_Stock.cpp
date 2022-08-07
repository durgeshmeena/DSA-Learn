#include <bits/stdc++.h>
using namespace std;

int totalFruit(vector<int>& fruits) {
    unordered_map<int, int> count;
    int distinct = 0, res = 0;
    
    int i = 0; //i-> start index; j-> end index :representing window
    for(int j=0; j<fruits.size(); j++){
        count[fruits[j]]++;
        if(count[fruits[j]]==1)distinct++;

        while(distinct>2){
            count[fruits[i]]--;
            if(count[fruits[i]]==0)distinct--;
            i++;
        }
        res = max(res, j-i+1);
    }
    return res;
}

long long Amzstock(vector<int> &num, int k) {
    int n=num.size();
    long long res=-1, sum=0;
    unordered_map<int, int>count;
    
    int i=0;
    for(int j=0; j<n; j++){
        count[num[j]]++;
        sum += 1ll*num[j];
        while(j-i+1 > k || count[num[j]]>1){
            count[num[i]]--;
            sum -= num[i];
            i++;
        }
        if (j-i+1 == k) res = max(res, sum);
    }
    
    return res;
    
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    vector<int> v = {1,2,3,7,3,5};
    int k = 3;

    cout << Amzstock(v, k);
    

    return 0;
}