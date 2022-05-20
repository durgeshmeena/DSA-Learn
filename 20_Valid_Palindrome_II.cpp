// https://leetcode.com/problems/valid-palindrome-ii/

#include <bits/stdc++.h>
using namespace std;

// solve valid palindrome II using two pointers
// time complexity: O(n)
// space complexity: O(1)
class Solution {
public:
    bool validPalindrome(string s) {
        int i = 0, j = s.size()-1;
        while (i < j) {
            if (s[i] != s[j]) {
                return isPalindrome(s, i+1, j) || isPalindrome(s, i, j-1);
            }
            i++;
            j--;
        }
        return true;
    }
    
    bool isPalindrome(string s, int i, int j) {
        while (i < j) {
            if (s[i] != s[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};



bool valid_palindrome_II(string s, int i, int j) {
    
}

bool valid_palindrome(string s, int i, int j, int flag) {
    if (i == j) return true;
    else if (i == j-1 and (flag == 1 or s[i] == s[j])) return true;

    if (s[i] == s[j]) return valid_palindrome(s, i+1, j-1, flag);
    if (flag == 0) return false;
    return valid_palindrome(s, i, j-1, 0) or valid_palindrome(s, i+1, j, 0);


}


int main() { cout << endl << endl << "######################################"<< endl << endl;

    
    cout << valid_palindrome("abca", 0, 3, 1) << endl;

    cout << endl << "######################################";
    return 0;
}