#include <bits/stdc++.h> 

using namespace std;
#define endl "\n"
void init() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#else
#endif
}


int main() {
    init();

    string A;
    cin >> A;
    cout << A << endl;
    cout << A.size() << endl << 443 << endl;


    // string res;
    // int n, c, val, i;
    // while(A.size()>18){

    //     cout << A << "   -------->     ";
        
    //     res=""; c=0;
    //     for(int i=0; i<A.size(); i++){
    //         val = 10*c + (A[i]-'0');
    //         if(val>=64){
    //             res += to_string(val/64);
    //             c = val%64;
    //         }
    //         else{
    //             res += '0';
    //             c = 10*c + A[i]-'0';    
    //         }
    //     }
    //     if(c!=0)return 0;
    //     i=0; while(res[i]=='0')i++;
    //     A = res.substr(i);
    //     cout << A << endl;
        
    // }
    
    // long long num = stoll(A);
    // while(num>64){
    //     if(num%64)return 0;
    //     num /= 64;
    // }
    // while(num>2){
    //     if(num%2)return 0;
    //     num /= 2;
    // }
    // cout << num << endl;

}