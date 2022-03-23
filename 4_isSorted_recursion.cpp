#include <bits/stdc++.h>
using namespace std;

// function which check wether vector is sorted or not using recursion

bool isSorted3(vector<int> &v)
{
    if (v.size() == 0 || v.size() == 1)
        return true;
    if (v[0] <= v[1])
    {
        v = {v.begin() + 1, v.end()};
        return isSorted3(v);
    }
    return false;


}

bool isSorted( vector<int>v )
{
    if (v.size() == 0 || v.size() == 1)
        return true;
    vector<int> v1 = {v.begin(), v.end()-1};    
    bool smallSortd = isSorted(v1);
    if ( smallSortd && (v[v.size()-1] > v[v.size()-2]))
        return true;
    return false;    
}

bool isSorted2( vector<int>v )
{
    if (v.size() == 0 || v.size() == 1)
        return true;
    bool startSorted =  ( *(v.begin()) < *(v.begin()+1) );
    v = {v.begin()+1, v.end()};    
    return startSorted && isSorted2(v);
      
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    vector<int> v = {1,2,3,5,6,7,8,91,10};
    cout << isSorted(v) << endl;
    cout << isSorted2(v) << endl;
    cout << isSorted3(v) << endl;

    

    return 0;
}