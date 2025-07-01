#include <bits/stdc++.h>
using namespace std;

int main() {
    // cout<<"Number of testcases are : "<<endl;
    int t;
    cin>>t;

   while(t--){
    int n;
    cin>>n;
    vector<char> store(n,0);

    for(int i = 0;i<n;i++){
        cin>>store[i];
    }

    int maxConsecutive = 0;
    int consecutive = 0;
    int total = 0;
    for(int i =0;i<n;i++){
        if(consecutive > 2){
            maxConsecutive = max(maxConsecutive,consecutive);
            break;
        }

        if(store[i] == '.'){
            consecutive++;
        }
        else{
            maxConsecutive = max(maxConsecutive,consecutive);
            total+=consecutive;
            consecutive = 0;
        }
    }
    maxConsecutive = max(maxConsecutive,consecutive);

    if(maxConsecutive > 2){
        cout<<2<<endl;
    }
    else{
        total+=consecutive;
        cout<<total<<endl;
    }
   } 

    return 0;
}
