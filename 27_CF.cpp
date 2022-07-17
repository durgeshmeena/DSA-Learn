#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;
    int arr[6]={0};

    int a;
    while(n--){
        cin >> a;
        arr[a]++;
    }

    for(int i=0; i<6; i++)
        cout <<  arr[i] << " ";
    cout << endl;
    if(arr[5]/9 < 1  ){
        if(arr[0] < 1)
         cout << -1 << endl;
        else 
            cout << 0 << endl;

    }
    else{
        a = arr[5]/9;
        a*=9;
        while(a--)
            cout << 5;
        a = arr[0];    
        while(a--)
            cout << 0;
        cout << endl;

    }

    

    return 0;
}