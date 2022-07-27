#include <bits/stdc++.h>
using namespace std;

string BFS(int n){
    queue<unsigned long long int> q;
    q.push(1ll*1);
    while(q.empty()==false){
        unsigned long long int f = q.front(); q.pop();

        // cout << f << endl;
        
        if(f%n == 0)
            return to_string(f);
        
 
        q.push(f*10);
        q.push(f*10+1);
        
    }
    return "";
}


int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    cout <<  BFS(11484);
    

    return 0;
}