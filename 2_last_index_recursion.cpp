#include <bits/stdc++.h>
using namespace std;

int last_index11(int arr[], int n, int x)
{
    if (n == 0)
        return -1;
    int last_ind = last_index11(arr, n-1, x);
    if (arr[n-1] == x)
        return n-1;
    return last_ind;    
}

int last_index12(int arr[], int n, int x)
{
    if (n == 0)
        return -1;
    if (arr[n-1] == x)
        return n-1;
    return last_index12(arr, n-1, x);        
}

int last_index21(int arr[], int n, int x)
{
    if (n == 0 )
        return -1;
    int last_index = last_index21(arr+1, n-1, x);

    if ( last_index == -1 )    
        return arr[0] == x ? 0 : -1;
    return last_index+1;    
}

int last_index22(int arr[], int n, int x)
{
    if (n == 0 )
        return -1;

    if ( arr[0] == x )
        return last_index22(arr+1, n-1, x) == -1 ? 0 : last_index22(arr+1, n-1, x)+1;    
    return last_index22(arr+1, n-1, x) == -1 ? -1 : last_index22(arr+1, n-1, x)+1;

}

int last_index_v(vector<int> &v, int x)
{
    if ( v.size() == 0 )
        return -1;

    if (v[v.size()-1] == x)
        return v.size()-1;
    v = {v.begin(), v.end()-1};
    return last_index_v(v, x);
}


int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    
    int array[] = {1, 2, 5, 3, 3, 5, 6, 5, 7, 8, 5,  9, 10, 6, 4};
    int n = sizeof(array) / sizeof(array[0]);
    vector<int> v(array, array+n);

    cout << last_index11(array, n, 5) << "\n";
    cout << last_index12(array, n, 5) << "\n";
    cout << last_index21(array, n, 5) << "\n";
    cout << last_index22(array, n, 5) << "\n";

    cout  << last_index_v(v, 5) << "\n";



    // vector<int> v2(v.begin(), v.end()-1);

    // v = vector<int>(v.begin(), v.end());

    // v = {v.begin()+2, v.end()-1};

    // for (auto i : v)
    //     cout << i << "\n";

    
    


    return 0;
}