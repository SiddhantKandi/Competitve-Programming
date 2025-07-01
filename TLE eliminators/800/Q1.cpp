#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--){
    int n,k;
    cin>>n>>k;
    vector<int> store(n,0);
    for(int i = 0;i<n;i++){
        cin>>store[i];
    }

    string ans = "Yes";
    for(int i = 1;i<n && k==1;i++){
        if(store[i-1] > store[i]){
            ans = "No";
        }
    }

    cout<<ans<<endl;
   } 
    return 0;
}
