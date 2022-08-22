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

void print(vector<int> &v){
    for(auto x:v)
        cout << x << " ";
    cout << endl;
}

int main() {
    run();

    vector<vector<int>> A = { {1,2}, {3,4}, {5,6} };

    int R = A.size(), C = A[0].size();

    cout << "R=" << R <<",  C=" << C << "\n";
    
    vector<int> V;
    
    vector<vector<int>> dir = { {0,1}, {1,0}, {0,-1}, {-1,0} };
    int r_min=0, r_max=R-1;
    int c_min=0, c_max=C-1;
    
    vector<int> range = {r_min, c_max, r_max, c_min};
    int d=0, total=R*C;
    int i=0, j=0;

    print(V);

    while(total){
        
        while ( range[0] <= i and i <= range[2] and range[3] <= j and j <= range[1] ){
            // V.push_back(A[i][j]);
            cout << A[i][j] << " ";
            i += dir[d][0];
            j += dir[d][1];
            total--;
            
        }

        if(d==0 || d==3)range[d]++;
        else range[d]--;

        i -= dir[d][0];
        j -= dir[d][1];

        d = (d+1)%4;
        i += dir[d][0];
        j += dir[d][1];

    }
    
}