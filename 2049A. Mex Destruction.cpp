#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define ll long long

void fun() {
    int n; cin>>n;
    vector<int>a(n);
    for(int i = 0; i<n; i++) cin>>a[i];
    int non_zero_segment = 0;
    bool non_zero = false;
    for(int i = 0; i<n; i++){
        if(a[i]!=0 and !non_zero){
            non_zero_segment++;
            non_zero = true;
        }
        if(a[i]==0){
            non_zero = false;
        }
    }
    if(non_zero_segment>2) cout<<2<<endl;
    else cout<<non_zero_segment<<endl;
}

int32_t main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    optimize();
    
    int t; cin>>t;
    while (t--)
    {
        fun();
    }
    

    return 0;
}
