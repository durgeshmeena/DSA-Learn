#include <bits/stdc++.h>
using namespace std;

int first_index11(int arr[], int n, int x)
{
    if (n==0)
        return -1;
    if (arr[0]==x)
        return 0;
    int start_index = first_index11(arr+1, n-1, x);
    if (start_index==-1)
        return -1;
    return start_index+1;                 
}

int first_index12(int arr[], int n, int x)
{
    if (n==0)
        return -1;
    int start_index = first_index12(arr+1, n-1, x);
    if (arr[0]==x)
        return 0;
    return start_index == -1 ? -1 : start_index+1;    
                    
}

int first_index21(int arr[], int n, int x)
{
    if (n==0)
        return -1;
    int start_index = first_index21(arr, n-1, x);
    if (start_index==-1)
        return arr[n-1]==x ? n-1 : -1;
    return start_index;       
}

int first_index22(int arr[], int n, int x)
{
    if (n==0)
        return -1;
    int start_index = arr[n-1];
    if (start_index==x)
        return first_index22(arr, n-1, x)==-1 ? n-1 : first_index22(arr, n-1, x);
    return first_index22(arr, n-1, x);    
        
       
         
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int array[] = {1, 2, 5, 3, 3, 5, 6, 5, 7, 8, 5,  9, 10, 6, 4};
    // int array[] = {2, 4,1};
    int n = sizeof(array) / sizeof(array[0]);

    cout << first_index11(array, n, 11) << endl;
    cout << first_index12(array, n, 11) << endl;
    cout << first_index21(array, n, 11) << endl;
    cout << first_index22(array, n, 11) << endl;
    return 0;
}