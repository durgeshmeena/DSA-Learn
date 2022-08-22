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


int main() {
    run();

    // vector<int> v = {0,1,1,1,1,2,2,2,2,3,4,5};
    // auto it = v.rbegin();
    // cout << *(it+1) << endl;
    // for(it; it!=v.rend(); it++){
    //     cout << *it << " ";
    // }
    // int i=0;
    // it = find(v.rend()+i-3, v.rend()+i, 1);
    // cout << "\n" << *it << ", " << v.rend()-it-1 << endl;


    vector<int> A = {1,1,0,0,1,1};
    int B = 1;


    int res=0;
    int n = A.size(), N=B-1;
    int i=0, last_i=-1, l,r;
    int cnt=0;
    while(i<n and cnt<100){
        
        cout << "i=" << i <<", " << A[i] << " -> ";
        if(A[i]==0){
            l = max(0,i-N); 
            r = min(n-1, i+N);
            auto it = find(A.rend()-r-1, A.rend()-i, 1);
            if(it!=A.rend()-i){
                res++;
                i = i+N;
            }
            else{
                auto it = find(A.rend()-i-1, A.rend()-l, 1);
                if(it!=A.rend()-l){
                    res++;
                    i = i+N;
                }
                else
                    return -1;
            }
        }
        else{
            i++;
        }


        cnt++;
    }

    cout << "\nRes = " << res << endl;
    
}