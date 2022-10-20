#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void run() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#else
#endif
}



int main() {
    run();

    vector<int> A = {30, 3, 298, 29};

    vector<string> v;
    for(auto x:A){
        v.push_back(to_string(x));
    }

    auto cmp = [](const auto &self, string s1, string s2) -> bool {
        if(s1.size() != s2.size()){
            int diff = s1.size() - s2.size();
            if(diff > 0){
                s2 += s2.substr(0, diff);
            }
            else{
                s1 += s1.substr(0, -diff);
            }    
        }
        if(s1[0] != s2[0]){
            return s1[0] > s2[0];
        }
        
        string s11, s22;
        s11 = s1.substr(1);
        s22 = s2.substr(1);
        return self(self, s11, s22);    
    
    };




    sort(v.begin(), v.end(), cmp);
    
    // string s="";
    // for(auto c:v)
    //     s += c;
    
    for(auto s:v){
        cout << s << " ";
    }

    // string s1 = "99197494093090589587787286882579979879178278077273570968668667867566465335024704093953663633573372982927126124019124113";
    // string s2 = "99197494093090589587787286882579979879178278077273570968668667867566465335024704093953663633573372929827126124019124113";

    // cout << cmp(s1, s2) << endl;
    


}