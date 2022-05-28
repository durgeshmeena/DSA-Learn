#include <bits/stdc++.h>
using namespace std;

// longest increasing subsequence using binary search
int LIS(int arr[], int n)
{
    int *dp = new int[n];
    dp[0] = 1;
    int max_len = 1;
    for (int i = 1; i < n; i++)
    {
        int low = 0, high = max_len, mid;
        while (low <= high)
        {
            mid = (low + high) / 2;
            if (arr[i] > arr[dp[mid]])
                low = mid + 1;
            else
                high = mid - 1;
        }
        dp[low] = i;
        if (low > max_len)
            max_len = low;
    }
    return max_len;
}




int LIS(vector<int>&A){
    vector<int>v{A[0]};
    int n = A.size();
    for(int i=1; i<n; i++){
        if(A[i]>*(v.end()-1))
            v.push_back(A[i]);    //4,10,4,3,8,9
        else{
            auto it = lower_bound(v.begin(), v.end(), A[i]);
            v[it-v.begin()] = A[i];      
        }

        for(auto it=v.begin(); it!=v.end(); it++)
            cout<<*it<<" ";
        cout << endl;    
 
    }       
    return v.size();
}

int main() { cout << endl << endl << "######################################"<< endl << endl;

    vector<int>A{4,10,4,3,8,9};
    cout << LIS(A) << endl;

    cout << endl << "######################################";
    return 0;
}