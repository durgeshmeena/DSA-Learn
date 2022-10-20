#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void init() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#else
#endif
}

    string decodeString(string s) {
        stack<string> st;
        
        for(int i=0; i<s.size(); i++){
            string ch = "";
            ch += s[i];
            
            if(ch=="]"){
                string s="";
                while(st.top()!="["){
                    s = st.top()+s;
                    st.pop();
                }st.pop();
                string repp = "";
                while(!st.empty() and st.top()!="[" and !isalpha(st.top()[0])){
                    repp = st.top()+repp;
                    st.pop();
                }
                int rep = stoi(repp);
                string ss = s;
                while(--rep) ss += s;
                st.push(ss);
            }
            else{
                st.push(ch);
            }



        }
        string res = "";
        while(!st.empty()){
            res = st.top()+res;
            st.pop();
        }
        return res;
        
        
    }

int main() {
    init();

    string s; cin >> s;
    
    cout << decodeString(s) << endl;

}