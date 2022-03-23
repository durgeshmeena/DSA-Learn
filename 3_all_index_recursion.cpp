#include <bits/stdc++.h>
using namespace std;

vector<int> all_index_1(vector<int> v, int x)
{
    if (v.size() == 0)
        return {};
    vector<int> v1 = {v.begin(), v.end() - 1};
    vector<int> v2 = all_index_1(v1, x);
    if (v[v.size() - 1] == x)
        v2.push_back(v.size() - 1);
    return v2;

}

//void function all_index_11 which takes an int vector v, integer x and reference vector v2 as input and push of all the indices of x in the vector v into v2.
void all_index_11(vector<int> v, int x, vector<int> &v2)
{
    if (v.size() == 0)
        return;

    int last_val = v[v.size() - 1];

    v = {v.begin(), v.end() - 1};  
    all_index_11(v, x, v2);
    if ( last_val == x)
        v2.push_back(v.size() );

}

void all_index_22(vector<int> v, int x, vector<int> &v2)
{
    if (v.size() == 0)
        return;
    if (v[0] == x)
        v2.push_back(0);
    int v2_len = v2.size();
    v = {v.begin() + 1, v.end()};
    all_index_22(v, x, v2);  

    for (int i = v2_len; i < v2.size(); i++)
        v2[i] += 1;

   
}







int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int array[] = {3, 7, 5, 3, 5, 5, 1, 5};
    int n = sizeof(array) / sizeof(array[0]);
    vector<int> v(array, array + n);

    vector<int> ans1 = all_index_1(v, 5);
    
    cout << ans1.size() << "\n";
    for (auto x : ans1)
        cout << x << " ";

    cout << "\n\n";
    vector<int> v2;
    all_index_11(v, 5, v2);
    cout << v2.size() << "\n";
    for (auto x : v2)
        cout << x << " ";

    
    cout << "\n\n";
    vector<int> v3;
    all_index_22(v, 5, v3);
    cout << v3.size() << "\n";
    for (auto x : v3)
        cout << x << " ";


    return 0;
}