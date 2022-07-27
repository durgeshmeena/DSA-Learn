#include <bits/stdc++.h>
using namespace std;

int main() { cout << endl << endl << "######################################"<< endl << endl;

    vector<int> v{ 10, 20, 30, 30, 30, 40, 50 };

    cout << lower_bound(v.begin(), v.end(), 5) - v.begin() << endl;
    cout << lower_bound(v.begin(), v.end(), 30) - v.begin() << endl;
    cout << lower_bound(v.begin(), v.end(), 60) - v.begin() << endl;


    cout << endl << "######################################";
    return 0;
}