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

void solve(){
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    int ans1=INT_MAX,ans2=INT_MAX;
    int x,y,z;

    // divisible by 3
    x=a%3==0?0:3-a%3;
    y=b%3==0?0:3-b%3;
    z=c%3==0?0:3-c%3;
    ans1 = min(ans1, (x+y+z)*e);
    x = x-1>=0?x-1:3+(x-1);
    y = y-1>=0?y-1:3+(y-1);
    z = z-1>=0?z-1:3+(z-1);
    ans1 = min(ans1, 1*d + (x+y+z)*e);
    x = x-1>=0?x-1:3+(x-1);
    y = y-1>=0?y-1:3+(y-1);
    z = z-1>=0?z-1:3+(z-1);
    ans1 = min(ans1, 2*d + (x+y+z)*e);

    // divisible by 3
    x = a%3==0?1:0;
    y = b%3==0?1:0;
    z = c%3==0?1:0;
    ans2 = min(ans2, (x+y+z)*e);
    
    a++, b++, c++;
    x = a%3==0?1:0;
    y = b%3==0?1:0;
    z = c%3==0?1:0;
    ans2 = min(ans2, d+(x+y+z)*e);

    a++, b++, c++;
    x = a%3==0?1:0;
    y = b%3==0?1:0;
    z = c%3==0?1:0;
    ans2 = min(ans2, 2*d+(x+y+z)*e);

    cout << ans1 << " " << ans2 << endl;

}




int main() {
    init();

    int n;
    cin >> n ;
    
    solve();


}