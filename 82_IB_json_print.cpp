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
    cout << A << endl << endl;

    int n = A.size();
    vector<string> v(n);

    int i=0, indent=0;
    for(int k=0; k<n; k++){
        if(A[k]==' ')continue;
        
        if(A[k]=='{' || A[k]=='['){
            i++;
            v[i] += ( string(indent, '\t') + A[k] );
            i++; indent++;
            v[i] += ( string(indent, '\t') );
        }
        else if(A[k]=='}' || A[k]==']'){
            i++; indent--;
            v[i] += ( string(indent, '\t') + A[k] );


        }
        else if(A[k] == ',' and !(A[k+1]=='{' || A[k+1]=='[')){
            v[i] += A[k];
            i++;
            v[i] += ( string(indent, '\t') );
        }
        else{
            v[i] += A[k];
        }
        
    }    
    
    vector<string> u(v.begin()+1, v.begin()+i+1);

    for(int i=0; i<u.size(); i++){
        cout << u[i] << endl;
    }


    
}