#include <bits/stdc++.h> 
using namespace std;
 
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

void solve()
{
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    int ans1=INT_MAX,ans2=INT_MAX;
    int x=a%3,y=b%3,z=c%3;
// case1 
     int t1=INT_MAX;

     
     


    if((x==y and y==z)){
        ans1=min(ans1,(3-x)*d);

        ans2=min(ans2,1);
    }
    else{
        int temp=INT_MAX,temp2=INT_MAX;
        int cnt=0;
        temp=(x*e) +(y*e) +(z*e);
        ans1=min(ans1,temp);

        if(x==0)cnt++;
        if(y==0)cnt++;
        if(z==0)cnt++;
        ans2=min(ans2,cnt*e);

    }

    cout<<ans1<<" "<<ans2<<endl;







}


int main()
{
//  fast_cin();
    init();
 int t;
 cin >> t;
 for(int i=0;i<t;i++) 
{
   solve();
}
 return 0;
}