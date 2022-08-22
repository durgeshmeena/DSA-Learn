#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void run() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#else
#endif
}

int idigit(int i, int A){
    int div = pow(10, i-1);
    A = A/div;
    return A%10;
}

int isPalindrome(int A) {
    if(A<0)return 0;
    int n = log10(A)+1;
    int i=1;
    int j=n;
    
    while(j>i){
        if(idigit(j, A) != idigit(i, A)) return 0;
        i++;
        j--;
    }
    
    return 1;

    // return n;
}


int main() {
    run();

    int n = 2147447412;

    cout << isPalindrome(n) << endl;

    
    
}