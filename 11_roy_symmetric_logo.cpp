#include <bits/stdc++.h>
using namespace std;
// function which solve roy and symmetric logo problem of hackerearch
void roySymmetricLogo(int n) {
    // Your code here
    int size = 2*n-1;
    int ** arr = (int**)malloc(size*sizeof(int*));
    for (int i=0; i < size; i++) {
        arr[i] = (int*)malloc(size*sizeof(int*));
    }
    for (int i=0; i<size; i++)
        for (int j = 0; j < size; j++) {
            if (i==j) {
                arr[i][j] = 1;
            }
            else if (i+j==size-1) {
                arr[i][j] = 1;
            }
            else if (i-j==j-i) {
                arr[i][j] = 1;
            }
            else if (i+j==size-2) {
                arr[i][j] = 1;

            }   
        } 
}    

int main() { 
    
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif 
    cout << endl << "######################################"<< endl << endl;

    int t;
    cin >> t;
    while (t--) {
        
        int n;
        cin >> n;
        int arr[n][n];

        for (int i=0; i<n; i++) {
            string st;
            cin >> st;
            for (int j=0; j<n; j++)
                arr[i][j] = (int)st[j];
        }
            
        int s = n-1;
        int flag = 1;
        for (int i=0; i<=n/2; i++)
            for (int j=0; j<=n/2; j++) {
                if ( arr[i][j] == arr[i][s-j] and arr[i][s-j] == arr[s-i][j] and arr[s-i][j] == arr[s-i][s-j])
                    continue;
                else {
                    flag = 0;
                    break;
                }

            }
        if (flag == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
                    

            
                        
        
    }


    cout << endl << "######################################";
    return 0;
}