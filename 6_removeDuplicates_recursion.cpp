#include <bits/stdc++.h>
using namespace std;

// remove duplicates from a string using recursion


string removeDuplicate1(string &s)
{
    if (s.size() == 0 || s.size() == 1)
        return s;
    if ( s[0] == s[1])
    {
        s = s.substr(1);
        return removeDuplicate1(s);
    }else
    {
        string s1 = s.substr(1);
        return s[0] + removeDuplicate1(s1);
    }
        
}

string removeDuplicate(string &s)
{
    int n = s.size();
    if (n < 2)
        return s;

    if (s[n - 1] == s[n - 2])
    {
        s.pop_back();
        return removeDuplicate(s);
    }
    else
    {
        char last = s.back();
        s.pop_back();
        return removeDuplicate(s) + last;
    }
}


string removeDuplicates(string s)
{
    if ( s.size() < 2 )
        return s;

    if ( s[0] == s[1] )
    {
        s.erase(s.begin(), s.begin() + 2);
        return removeDuplicates(s);
    } 
    string s1 = s.substr(1);
    return s[0] + removeDuplicates(s1);
       
}

string leetcodeDup(string s)
{
    string ans = removeDuplicates(s);

    if ( ans != removeDuplicates(ans) )
        ans = leetcodeDup(ans);

    return ans;   
}


int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    string s;
    cin >> s;
    cout << leetcodeDup(s) << endl;
    

    return 0;
}