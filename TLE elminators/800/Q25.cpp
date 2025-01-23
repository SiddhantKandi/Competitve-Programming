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

        char last = s[0];
        char first = s[n-1];
        for(int j=0;j<n/2;j++){
            if(s[i] != s[n-i-1]){
                if(j==0){
                    size = size-2;
                }
                else if(s[j] ==s[j-1])
            }
        }

    }

    return 0;
}