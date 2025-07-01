#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;

   while(t--){
    int n;
    cin>>n;

    int sum = 0;

    for(int i = 0;i<n-1;i++){
        int num;
        cin>>num;
        sum+=num;
    }

    cout<<(-1*sum)<<endl;
   } 

    return 0;
}