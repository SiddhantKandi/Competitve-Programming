#include <bits/stdc++.h>
using namespace std;

int main() {

    int N;
    cin>>N;

    vector<int> arr(N,0);
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }

    int mini = INT_MAX;

    for(int i=0;i<N;i++){
        if(arr[i]==0){
            mini = 0;
            break;
        }
        else{
            mini = min(mini,abs(arr[i]));
        }
    }

    cout<<mini<<endl;

    return 0;
}