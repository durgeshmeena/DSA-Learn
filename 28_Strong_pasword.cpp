#include <bits/stdc++.h>
using namespace std;

bool strongPasswordCheckerII(string password) {
 
        
        
        vector<bool>V(6, false);
        V[5] = true;

        string special_characters = "!@#$%^&*()-+";

        string s=password;

        if(s.length() >= 8){
            V[0] = true;
        }
        else{
            return false;
        }

        for(int i = 0; i < s.length(); i++) {
            if(s[i] >= 'a' && s[i] <= 'z')V[1] = true;
            if(s[i] >= 'A' && s[i] <= 'Z')V[2] = true;
            if(s[i] >= '0' && s[i] <= '9')V[3] = true;
            if(special_characters.find(s[i]) != string::npos)V[4] = true;
            // if(i<s.length()-1 && s[i] == s[i+1])V[5] = false;
        }

        for(auto x:V)
            cout << x << " ";

        int flag = true;
        for(int i = 1; i < 6; i++) {
            flag = flag and V[i];
        }       
        
        return flag;
        
        
    }

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    vector<bool>V(6, false);

    string special_characters = "!@#$%^&*()-+";

    string s;
    cin >> s;



    if(strongPasswordCheckerII(s))cout << "STRONG\n";
    else cout << "WEAK\n";

    
    

    return 0;
}