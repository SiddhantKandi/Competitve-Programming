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

        sort(A.begin(),A.end());

        vector<int> B;
        vector<int> C;

        for(int j=n-1;j>=0;j--){
            if(C.size()==0 || C[0] == A[j]){
                C.push_back(A[j]);
            }
            else{
                B.push_back(A[j]);
            }
        }

        if(C.size() == 0 || B.size() == 0){
            cout<< -1 <<endl;
            continue;
        }

        cout<<B.size()<<" "<<C.size()<<endl;
        for(int j=0;j<B.size();j++){
            cout<<B[j]<<" ";
        }
        cout<<endl;
        for(int j=0;j<C.size();j++){
            cout<<C[j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}