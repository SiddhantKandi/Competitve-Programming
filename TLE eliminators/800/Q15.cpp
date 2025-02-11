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

        int count=0;
        for(int j=0;j<n;j++){
            if(A[j]%2!=0){
                count++;
            }
        }

        if(count%2==0){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }

    return 0;
}