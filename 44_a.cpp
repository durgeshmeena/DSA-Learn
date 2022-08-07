#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    string s;cin>>s;
    int n=s.length();
    int k;cin>>k;
    // int k;
    vector<int>pre(n),suf(n);
    int cnt=0,cnt2=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='1')
        {
            cnt+=1;
            pre[i]=cnt;
        }
        else 
        {
            cnt=0;
            pre[i]=0;
        }

        if(s[n-1-i]=='1')
        {
            cnt2+=1;
            suf[n-1-i]=cnt2;
        }
        else 
        {
            cnt2=0;
            suf[n-i-1]=0;
        }
    }

    int i=0,j=k-1;

    int ans=k;

    while(j<n)
    {
        ans=max(k+pre[i]+suf[j],ans);
        i++;j++;
    }
    cout<<ans<<endl;

    

    return 0;
}