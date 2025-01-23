#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;

        vector<int> A(n,0);
        for(int j=0;j<n;j++){
            cin>>A[j];
        }

        int sum = 0;
        int product  = 0;

        for(int i : A){
            sum+= i;
            product *= i;
        }

        if(sum>=0 && product){
            cout<<0<<endl;
        }
        else if()
        

    }

    return 0;
}