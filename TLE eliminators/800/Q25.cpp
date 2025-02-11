#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;

        int size = n;

        string s;
        cin>>s;

        for(int i = 0;i<n/2;i++){
            if(((s[i] - '0') & (s[n-i-1] -'0')) ==0 && s[i] !=s[n-i-1]){
                size = size-2;
            }
            else{
                break;
            }
        }

        cout<<size<<"\n";

    }

    return 0;
}