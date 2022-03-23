#include <bits/stdc++.h>
using namespace std;


// function which updates the given string by removing all the x's from the string and update the string.
// wrong ans  
// void remove_x_string(string &s)
// {
//     if (s.size() == 0 || s.size() == 1)
//         return;
//     if (s[0] == 'x')
//         s = s.substr(1);
//     remove_x_string(s);      
// }




string removeX(string s)
{
    if ( s.size() == 0 )
        return "";
    if ( s[0] != 'x')
        return s[0] + removeX(s.substr(1));
    return removeX( s.substr(1) );    
}

void removeX_2(string &s)
{
    if ( s.size() == 0 )
        return;
    if ( s[0] == 'x')
    {
        s = s.substr(1);
        removeX_2(s);
    }
    else
    {
        string s1 = s.substr(0,1);
        s = s.substr(1);
        removeX_2(s);
        s = s1 + s;
    }    
    
}







int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    string s;
    cin >> s;

    string str;
    cin >> str;

    cout << s << endl;
    
    string s1 = removeX(s);
    cout << s1 << endl;
    removeX_2(s);
    cout << s << endl;

    // remove_x_string(str);
    cout << str << endl;
    

    return 0;
}